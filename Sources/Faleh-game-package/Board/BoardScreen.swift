//
//  BoardScreen.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 01/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import Foundation
import Shared
import SwiftUI
import UIPilot

struct BoardScreen: View {
    @ObservedObject var viewModel: IOSBoardViewModel
    @EnvironmentObject var pilot: UIPilot<AppRoute>

    @State var isPause: Bool = false
    @State var isFirstTime: Bool

    init(isFirstTime: Bool) {
        viewModel = IOSBoardViewModel()
        self.isFirstTime = isFirstTime
    }

    private var fourColumnGrid = [GridItem(.flexible()), GridItem(.flexible()), GridItem(.flexible()), GridItem(.flexible())]

    var body: some View {
        ZStack {
            Faleh_game_package.background.ignoresSafeArea(.all)

            VStack {
                HStack(alignment: .center, spacing: 30) {
                    TimerView(time: viewModel.state.time,
                              percent: viewModel.state.percent)
                        .animation(.linear, value: viewModel.state.percent)
                    PointsView(points: viewModel.state.points)
                        .animation(.bouncy, value: viewModel.state.points)

                    Button(action: {
                        isPause = !isPause
                        viewModel.onEevent(event: BoardEvents.OnPause())
                        SoundManager.shared.play()
                    }, label: {
                        Image("pause_btn", bundle: .module)
                    })
                }
                Spacer()
                GeometryReader { geometry in
                    VStack {
                        LazyVGrid(columns: fourColumnGrid, spacing: 20) {
                            ForEach(0 ..< viewModel.state.grid.count, id: \.self) { row in
                                ForEach(0 ..< viewModel.state.grid[row].count, id: \.self) { col in
                                    LetterTileView(letter: viewModel.state.grid[row][col], colNumber: col).id(row * 100 + col)
                                }
                            }
                        }
                        .gesture(DragGesture(minimumDistance: 0)
                            .onChanged { value in
                                let touchLocation = value.location
                                determineSwipingPosition(touchLocation: touchLocation, geometry: geometry)
                            }.onEnded { _ in
                                viewModel.onEevent(event: BoardEvents.UserSwiped())
                            })
                    }.frame(maxWidth: .infinity, maxHeight: .infinity)
                        .padding(.bottom, -40)
                }

                ZStack (alignment: .bottom){
                    FalehFealsState(falehFeel: viewModel.state.falehFeel)
                    Text("شعور فالح")
                        .font(.system(size: 20))
                        .fontWeight(.bold)
                        .foregroundColor(Color(red: 0.973, green: 0.643, blue: 0.357))
                }.padding(.bottom, 4)
            }
            if isPause {
                PauseScreen(onResume: {
                    isPause = !isPause
                    viewModel.onEevent(event: BoardEvents.OnResume())
                }, onHomeClick: {
                    pilot.popTo(.Home)
                })
            }
            if isFirstTime {
                TutorialScreen(onDone: {
                    isFirstTime = false
                    viewModel.onEevent(event: BoardEvents.OnResume())
                }).onAppear(perform: {
                    viewModel.onEevent(event: BoardEvents.OnPause())
                })
            }
        }.navigationBarHidden(true)
            .navigationBarTitle("")
            .onAppear {
                self.viewModel.startObserving()
                self.viewModel.onEevent(event: BoardEvents.GameStarted())
            }.onDisappear {
                self.viewModel.onEevent(event: BoardEvents.OnCanel())
                self.viewModel.dipose()
            }.onChange(of: viewModel.state.isNavigate, perform: { canNaviagte in
                if canNaviagte {
                    pilot.push(.Result(stars: Int(viewModel.state.stars), list: Int(viewModel.state.stars) == 0 ?viewModel.state.remainingAnswers : []))
                }
            })
    }

    func determineSwipingPosition(touchLocation: CGPoint, geometry: GeometryProxy) {
        let gridSize = viewModel.state.grid.count

        guard gridSize > 0 else {
            return
        }
        let verticalSpacing: CGFloat = geometry.size.width * 0.04
        let horizontalSpacing: CGFloat = geometry.size.width * 0.08
        let screenWidth = geometry.size.width

        let tileWidth = screenWidth / CGFloat(gridSize)
        let tileHeight = screenWidth / CGFloat(gridSize)

        let row = max(0, min(Int((touchLocation.y + verticalSpacing) / (tileHeight + verticalSpacing)), gridSize - 1))
        let column = max(0, min(Int((touchLocation.x + horizontalSpacing) / (tileWidth + horizontalSpacing)), gridSize - 1))

        if row < 5 && column < 4 {
            viewModel.onEevent(event: BoardEvents.LetterSwiped(
                positions: [KotlinInt(int: Int32(row)), KotlinInt(int: Int32(column))]))
        }
    }
}

#Preview {
    BoardScreen(isFirstTime: true)
}
