import SwiftUI

struct ProfileView: View {
    var body: some View {
        NavigationView {
            ScrollView {
            VStack(spacing: 20) {
                // User Profile Row
                UserProfileRow(image: "person.crop.circle.fill", userName: "Md. Momtajul Karim", accountCode: "F111", boId: "5678")
                
                
                // 5 Different Rows with Titles
                TitleRow(title: "Balances", description: "Description for Row....")
                    .onTapGesture {
                        // Show description for Row 1
                        print("Description for Row 1")
                    }
                
                TitleRow(title: "Position", description: "Description for Row 2")
                    .onTapGesture {
                        // Show description for Row 2
                        print("Description for Row 2")
                    }
                
                NavigationLink(destination: HomeView()) {
                    SimpleTitleRow(title: "Portfolio Statement")
                }
                
                NavigationLink(destination: HomeView()) {
                    SimpleTitleRow(title: "Ledger Statement")
                }
                
                // Logout Row
                LogoutRow()
                // Spacer to push content to the top
                Spacer()
            }
            
            .padding()
            .navigationBarTitle("Profile", displayMode: .inline)
            .navigationBarItems(
                leading:
                    Button(action: {
                        // Handle action for the first button
                    }) {
                        Image(uiImage: UIImage(named: "loading_nav_button")!)
                    },
                trailing:
                    Button(action: {
                        // Handle action for the second button
                    }) {
                        Image(uiImage: UIImage(named: "alarm_nav_button")!)
                        
                    }
            )
        }
    }
    }
}

struct UserProfileRow: View {
    var image: String
    var userName: String
    var accountCode: String
    var boId: String
    
    var body: some View {
        HStack {
            Image(systemName: image)
                .resizable()
                .frame(width: 50, height: 50)
            VStack(alignment: .leading) {
                Text(userName)
                    .font(.headline)
                
                Text("Account Code: \(accountCode)")
                Text("BO ID: \(boId)")
                
                    .font(.subheadline)
            }
            Spacer()
        }
        .padding()
        .background(Color.white)
        .cornerRadius(10)
        .padding(.top, 20)
        .shadow(radius: 5)
    }
}
/*
 struct TitleRow: View {
 var title: String
 var description: String
 
 var body: some View {
 HStack {
 Text(title)
 .font(.headline)
 Spacer()
 Image(systemName: "chevron.down")
 }
 .padding()
 .background(Color.white)
 .cornerRadius(10)
 .shadow(radius: 5)
 .onTapGesture {
 // Handle tap action for other rows if needed
 print(description)
 }
 }
 }
 */



struct TitleRow: View {
    var title: String
    var description: String
    
    @State private var isExpanded: Bool = false
    
    var body: some View {
        VStack(alignment: .leading, spacing: 0) {
            HStack {
                Text(title)
                    .font(.headline)
                Spacer()
                Image(systemName: isExpanded ? "chevron.up" : "chevron.down")
            }
            .padding()
            .background(Color.white)
            .cornerRadius(10)
            .shadow(radius: 5)
            .onTapGesture {
                isExpanded.toggle()
            }
            
            if isExpanded {
                // Description
                Text(description)
                    .padding()
                
                // Additional rows with data
                HStack {
                    Text("Available Balance")
                    Spacer()
                    Text("Row 2")
                }
                ColoredDivider(color: .black, height: 1)
                
                HStack {
                    Text("Current Balance")
                    Spacer()
                    Text("Row 2")
                }
                ColoredDivider(color: .black, height: 1)
                
                HStack {
                    Text("Equity")
                    Spacer()
                    Text("Row 2")
                }
                ColoredDivider(color: .black, height: 1)
                
                HStack {
                    Text("Purchase Power")
                    Spacer()
                    Text("Row 2")
                }
            }
        }
    }
}





struct SimpleTitleRow: View {
    var title: String
    
    var body: some View {
        HStack {
            Text(title)
                .font(.headline)
            Spacer()
            Image(systemName: "chevron.right")
        }
        .padding()
        .background(Color.white)
        .cornerRadius(10)
        .shadow(radius: 5)
    }
}
struct LogoutRow: View {
    var body: some View {
        HStack {
            Text("Logout")
                .font(.headline)
                .foregroundColor(.red)
            Spacer()
            Image(systemName: "power")
        }
        .padding()
        .background(Color.white)
        .cornerRadius(10)
        .padding(.bottom, 20)
        .shadow(radius: 5)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ProfileView()
    }
}
