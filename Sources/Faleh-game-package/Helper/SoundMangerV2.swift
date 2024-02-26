//
//  SoundMangerV2.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 14/08/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import Foundation
import AVFoundation


class SoundManagerV2 {
    
    static let shared = SoundManagerV2()
    
     init() {
        try? AVAudioSession.sharedInstance().setCategory(AVAudioSession.Category.playback)
        try? AVAudioSession.sharedInstance().setActive(true)
    }
    
    private let serialQueue = DispatchQueue(label: "SoundQueue", qos: .userInitiated)
    private var player: AVAudioPlayer?
    
    static func play(_ sound: String) {
        shared.play(sound)
    }
    
    func play(_ sound: String) {
        guard let url = falehBundle?.url(forResource: sound, withExtension: "wav") else { return }
        serialQueue.async {
            do {
                let player = try AVAudioPlayer(contentsOf: url)
                player.prepareToPlay()
                // You can hold the player in a collection if you need to manage multiple sounds
                // or ensure it doesn't get deallocated if playing longer sounds
                self.player = player
                
                // Since playing does not update the UI, it's okay to do it on the serial queue
                player.play()
            } catch {
                print("Failed to play sound: \(error)")
            }
        }
    }

}
