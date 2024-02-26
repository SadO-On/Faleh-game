//
//  HomeScreen.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 20/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import Shared
import SwiftUI
import UIPilot

struct HomeScreen: View {
    @EnvironmentObject var pilot: UIPilot<AppRoute>
    @ObservedObject var viewModel: IOSHomeViewModel
    @Environment(\.openURL) var openURL

    @State private var scales: [CGFloat]
    
    let onBackClicked: ()-> Void
    
    init(onBackClicked: @escaping ()->Void) {
        _scales = State(initialValue: Array(repeating: 0, count: 4))
        viewModel = IOSHomeViewModel()
        self.onBackClicked = onBackClicked
    }

    var body: some View {
        ZStack {
            Faleh_game_package.background.ignoresSafeArea(.all)
            
            VStack {
                HStack(alignment: .top) {
                    Button(action: {
                        onBackClicked()
                    }, label: {
                        Image("back_btn", bundle: .module)
                    }).padding()

                    Spacer()
                }.scaleEffect(scales[0])
                    .onAppear {
                        withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0)) {
                            scales[0] = 1
                        }
                    }
                    
                LevelComponentWidget(level: String(viewModel.state.userLevel.level),
                                     percent: viewModel.state.userLevel.xp)
                    .scaleEffect(scales[1])
                    .onAppear {
                        withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0)) {
                            scales[1] = 1
                        }
                    }
                    .padding(.horizontal)
                HStack {
                    Image("title", bundle: .module)
                        .resizable()
                        .frame(width: UIScreen.screenWidth * 0.8, height: UIScreen.screenWidth * 0.25)
                }.scaleEffect(scales[2])
                    .onAppear {
                        withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0).delay(0.3)) {
                            scales[2] = 1
                        }
                    }
                StarterFalehWidget()
                Spacer()

                PrimaryButtonWidget(text: "العب", onClick: {
                    pilot.push(.Board)
                })
                .scaleEffect(scales[3])
                .onAppear {
                    self.viewModel.startObserving()
                    self.viewModel.onEevent(event: HomeEvents.GetLevel())
                    // Animate to full size with a spring effect
                    withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0).delay(0.4)) {
                        scales[3] = 1 // Animate to full size
                    }
                }
                Button(action: { openURL(URL(string: "https://twitter.com/98sStudio")!)
                }, label: {
                    Image("powered_by", bundle: .module).padding(.top)
                }).padding(.bottom, 40)
            }
        }.navigationBarHidden(true).navigationBarTitle("")
    }
}

#Preview {
    HomeScreen(onBackClicked: {})
}


//let falehBundle = Bundle(identifier: "Faleh_game_package")
