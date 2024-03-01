//
//  PrimaryButtonWidget.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 04/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import AVFoundation
import Foundation
import SwiftUI

struct PrimaryButtonWidget: View {
    let text: String
    let onClick: () -> Void

    var body: some View {
        Button(action: {
            onClick()
            SoundManager.shared.play()
        }, label: {
            ZStack {
                Image("button-container", bundle: .module)
                Text(text)
                    .font(.system(size: UIScreen.screenWidth * 0.09))
                    .fontWeight(.bold)
                    .padding(.bottom, 16)
                    .foregroundColor(.white)
            }
        })
    }
}

#Preview {
    PrimaryButtonWidget(text: "التالي") {
    }
}

private var player: AVAudioPlayer?

struct SoundManager {
    static let shared = SoundManager()

    func intit() {
        guard let url = Bundle.module.url(forResource: "click", withExtension: "wav") else { return
        }

        do {
            let player = try AVAudioPlayer(contentsOf: url)
            player.prepareToPlay()
        } catch {
            print("Failed to play sound: \(error)")
        }
    }

    func play() {
        DispatchQueue.main.async {
            player?.play()
        }
    }
}
