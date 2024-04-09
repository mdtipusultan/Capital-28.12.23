import SwiftUI
struct Protfolio_statement: View {
    @State private var selectedTabIndex = 0
    let names = ["Position", "Balance", "Receivable"]
    
    var body: some View {
        NavigationView {
            VStack {
                ScrollView(.horizontal, showsIndicators: false) {
                    HStack {
                        ForEach(0..<names.count) { index in
                            Button(action: {
                                self.selectedTabIndex = index
                            }) {
                                VStack {
                                    Text(self.names[index])
                                        .padding()
                                        .foregroundColor(self.selectedTabIndex == index ? .white : Color.white.opacity(0.5))
                                    if self.selectedTabIndex == index {
                                        Rectangle()
                                            .frame(width: UIScreen.main.bounds.width / 3, height: 3)
                                            .foregroundColor(.white)

                                    }
                                }
                                .frame(width: UIScreen.main.bounds.width/3, height: 68)
                                
                            }
                        }
                    }
                    .background(appColor)
                }
                
                // Placeholder for content
                switch selectedTabIndex {
                case 0:
                    OverviewView()
                case 1:
                    IndicesView()
                case 2:
                    StocksView()
                default:
                    Text("No Content")
                }
                
                Spacer() // Add space to push buttons to the bottom
            }
        }
    }
}


// Preview
#if DEBUG
struct ProtfolioStatement_Previews: PreviewProvider {
    static var previews: some View {
        Protfolio_statement()
    }
}
#endif
