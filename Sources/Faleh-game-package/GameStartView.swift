import SwiftUI
import UIPilot
import Shared


public struct GameStartView: View {
    @StateObject var pilot = UIPilot(initial: AppRoute.Home)

    public init(){
        
    }
    public var body: some View {
            UIPilotHost(pilot){ route in
                switch route {
                case .Home: HomeScreen()
                case.Board: BoardScreen()
                case.Result(let stars, let list): ResultScreen(isWin: stars != 0, starsCount: stars, list: list)
                }
            }.ignoresSafeArea(.all).onAppear {
                SoundManager.shared.intit()
            }
   
      
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        GameStartView()
            .environment(\.font, Font.custom("Tajawal", size: 14))
         

    }
}
