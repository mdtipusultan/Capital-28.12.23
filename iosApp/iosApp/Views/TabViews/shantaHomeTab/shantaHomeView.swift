//
//  shantaHomeView.swift
//  iosApp
//
//  Created by LEADS Corporation Limited on 10/1/24.
//  Copyright © 2024 orgName. All rights reserved.
//

import SwiftUI
struct shantaHomeView: View {
    
    var body: some View {
        NavigationView {
            
            //MARK: main-views
            
            VStack() {
                NavigationLink(destination: password_recovery()) {
                    HStack{
                        Text("Balance")
                            .foregroundColor(Color.black)
                            .bold()
                            
                        Spacer()
                        Image(systemName: "dollarsign.circle.fill") // Add your image here
                                                    .resizable()
                                                    .frame(width: 20, height: 20) // Adjust the size as needed
                                                    .foregroundColor(.accentColor) // Adjust the color as needed

                    }
                    
                }
                
                Divider()
                
                HStack {
                    Text("Row 2")
                    Spacer()
                    Text("Row 2")
                }
                Divider()
                HStack {
                    Text("Row 2")
                    Spacer()
                    Text("Row 2")
                }
                Divider()
                HStack {
                    Text("Row 2")
                    Spacer()
                    Text("Row 2")
                }
            }
            .padding()
            .background(Color.white)
            .cornerRadius(10)
            .shadow(radius: 5) // Add shadow here
            
            
            
            //MARK: NAVBAR-ITEMS
            .navigationBarTitle("SHANTA", displayMode: .inline)
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
            
            
            
        }//navigationview
        
    }
}

#Preview {
    shantaHomeView()
}
