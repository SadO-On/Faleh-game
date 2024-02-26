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
                Image("button-container", bundle: falehBundle)
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

var audioPlayer: AVAudioPlayer!

struct SoundManager {
    static let shared = SoundManager()

    func intit() {
        let sound =  Bundle(identifier: "studio.98s.faleh")?.path(forResource: "click", ofType: "wav")
        audioPlayer = try! AVAudioPlayer(contentsOf: URL(fileURLWithPath: sound!))
        audioPlayer.prepareToPlay()
    }

    func play() {
        DispatchQueue.main.async {
            audioPlayer.play()
        }
    }
}
