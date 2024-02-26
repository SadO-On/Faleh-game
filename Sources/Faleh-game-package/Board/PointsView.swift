//
//  PointsWidget.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 18/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import SwiftUI

struct PointsView: View {
    let points: Int32
    let gradientColor = [
        Color(red: 0.953, green: 0.612, blue: 0.071),
        Color(red: 0.953, green: 0.627, blue: 0.071),

        Color(red: 0.925, green: 0.616, blue: 0.078),
        Color(red: 0.898, green: 0.6, blue: 0.082)
    ]
    var body: some View {
        Text("\(points) نقطة")
            .font(.system(size: 20))
            .fontWeight(.bold)
            .padding(.vertical, 8)
            .foregroundColor(.white)
            .padding(.horizontal, 12)
            .background(
                LinearGradient(gradient: Gradient(colors: gradientColor), startPoint: .top, endPoint: .bottom)
            )
            .clipShape(RoundedRectangle(cornerRadius: 12))
            .overlay(
                RoundedRectangle(cornerRadius: 12)
                    .stroke(Color(red: 0.655, green: 0.459, blue: 0.122), lineWidth: 2)
            )
    }
}

#Preview {
    PointsView(points: 100)
}
