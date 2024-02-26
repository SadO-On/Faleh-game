//
//  ResultScreen.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 04/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import SwiftUI
import UIPilot

struct ResultScreen: View {
    @EnvironmentObject var pilot: UIPilot<AppRoute>

    let isWin: Bool
    let starsCount: Int

    let list: [String]

    @State private var scales: [CGFloat] = Array(repeating: 0, count: 7)
    @State private var isShow = false

    @State private var showShareSheet = false

    var body: some View {
        ZStack {
            Faleh_game_package.background.ignoresSafeArea()

            ZStack(alignment: .topLeading) {
                VStack {
                    Spacer()

                    LottieView(lottieFile: starsCount == 3 ? "three-star-lottie.json" : starsCount == 2 ? "two-star-lottie.json" : starsCount == 1 ? "one-star-lottie.json" : "zero-star-lottie.json") {
                        isShow = true
                    }.onAppear(perform: {
                        SoundManagerV2.shared.play(starsCount == 3 ? "three-star-sound" : starsCount == 2 ? "two-star-sound" : starsCount == 1 ? "one-star-sound" : "zero-star-sound")
                    })

                    PhraseWidget(starsCount: starsCount)
                        .padding(.top, isWin ? -(UIScreen.screenWidth * 0.3) :-(UIScreen.screenWidth * 0.20)) // -140 -80
                        .scaleEffect(scales[1])
                        .onChange(of: isShow, perform: { _ in
                            withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0).delay(0.2)) {
                                scales[1] = 1
                            }
                        })

                    Text("الكلمات الموجودة كانت:")
                        .font(.system(size: 20))
                        .fontWeight(.bold)
                        .padding(.bottom, 16)
                        .foregroundColor(Color(#colorLiteral(red: 0.973, green: 0.643, blue: 0.357, alpha: 1)))
                        .scaleEffect(scales[2])
                        .onChange(of: isShow, perform: { _ in
                            withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0)) {
                                scales[2] = 1
                            }
                        })
                        .hide(if: isWin)
                    VStack {
                        ForEach(list, id: \.self) { word in
                            HStack {
                                ForEach(0 ..< word.count, id: \.self) { charIndex in
                                    ResultLetterTile(letter: charAsString(str: word, index: charIndex), colNumber: charIndex)
                                }

                            }.environment(\.layoutDirection, .rightToLeft)
                        }
                    }.scaleEffect(scales[3])
                        .onChange(of: isShow, perform: { _ in
                            withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0)) {
                                scales[3] = 1
                            }
                        }).hide(if: isWin)

                    Button(action: {
                        showShareSheet = true

                    }, label: {
                        Image("share", bundle: falehBundle)
                    }).hide(if: starsCount < 2)
                        .scaleEffect(scales[5])
                        .onChange(of: isShow, perform: { _ in
                            withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0)) {
                                scales[5] = 1
                            }
                        })

                    PrimaryButtonWidget(text:
                        isWin ?
                            "التالي" :
                            "إعادة", onClick: {
                                pilot.pop()
                            }).padding()
                        .scaleEffect(scales[6])
                        .onChange(of: isShow, perform: { _ in
                            withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0).delay(0.6)) {
                                scales[6] = 1
                            }
                        })
                    Spacer()
                }
                Button(action: {
                    pilot.popTo(.Home)
                }, label: {
                    Image("back_btn", bundle: falehBundle)
                }).padding()
                    .scaleEffect(scales[0])
                    .onChange(of: isShow, perform: { _ in
                        withAnimation(.spring(response: 0.5, dampingFraction: 0.5, blendDuration: 0)) {
                            scales[0] = 1
                        }
                    })

            }
            .imageShareSheet(isPresented: $showShareSheet, image: UIImage(named: starsCount == 3 ? "share-3" : "share-2", in: falehBundle!, with: nil)!)
        }
    }
}

#Preview {
    ResultScreen(isWin: true, starsCount: 3, list: ["حازم", "ام", "زرع"])
}

func charAsString(str: String, index: Int) -> String {
    return String(Array(str)[index])
}
