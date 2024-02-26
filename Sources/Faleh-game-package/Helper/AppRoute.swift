//
//  AppRoute.swift
//  iosApp
//
//  Created by Mohammed Alsadoun on 29/07/1445 AH.
//  Copyright © 1445 AH orgName. All rights reserved.
//

import Foundation


enum AppRoute: Equatable {
    case Home
    case Board
    case Result(stars: Int, list: [String])
}
