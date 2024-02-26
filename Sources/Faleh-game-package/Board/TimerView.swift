//
//  TimerView.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 18/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import SwiftUI


struct TimerView: View {
    let width: CGFloat = 130
    let time: String
    let percent: Float
    let gradientColor = [
        Color(red: 0.976, green: 0.976, blue: 0.976),
        Color(red: 0.976, green: 0.976, blue: 0.976),
        Color(red: 0.976, green: 0.976, blue: 0.976),
        Color(red: 0.945, green: 0.925, blue: 0.89),
        Color(red: 0.918, green: 0.878, blue: 0.812),
    ]


    var body: some View {
     
        let multiplayer = width / 100
        ZStack(alignment: .leading) {
            RoundedRectangle(cornerRadius: 12)
                .stroke(Color(red: 0.655, green: 0.459, blue: 0.122), lineWidth: 0)
                .frame(width: width, height: 40)
                .background(
                    LinearGradient(gradient: Gradient(colors: gradientColor), startPoint: .top, endPoint: .bottom)
                )
            RoundedRectangle(cornerRadius: 12)
                .stroke(Color(red: 0.655, green: 0.459, blue: 0.122), lineWidth: 0)
                .frame(width: CGFloat(percent) * multiplayer, height: 39)
                .background(Color(red: 0.973, green: 0.643, blue: 0.357))

            RoundedRectangle(cornerRadius: 12)
                .stroke(Color(red: 0.655, green: 0.459, blue: 0.122), lineWidth: 6)
                .frame(width: width, height: 40)

            Text(time)
                .font(.system(size: 20))
                .fontWeight(.bold)
                .frame(width: width, height: 40)
                .foregroundColor(.white)
                .shadow(color: .black, radius: 1)

                .clipShape(
                    RoundedRectangle(cornerRadius: 12)
                )

        }.clipShape(RoundedRectangle(cornerRadius: 11, style: .continuous))
    }
}

struct TimerProgressView_Previews: PreviewProvider {
    static var previews: some View {
        TimerView(time: "1:55", percent: 30)
    }
}
