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
            ScrollView{
                VStack(spacing:20) {
                    VStack {
                        NavigationLink(destination: password_recovery()) {
                            HStack{
                                Text("Balance")
                                    .foregroundColor(Color.black)
                                    .bold()
                                
                                Spacer()
                                Image(uiImage: UIImage(named: "next_page_arrow")!)
                                    .resizable()
                                    .frame(width: 8, height: 12)
                                    .foregroundColor(.accentColor)
                            }
                        }
                        
                        
                        
                        Divider()
                            .background(Color(red: 0.929, green: 0.929, blue: 0.929))
                                                   .padding(.horizontal, -20)
                                                   
                                                                      
                        
                        HStack {
                            Text("Available Balance")
                                //.fontWeight(.medium)
                                
                            Spacer()
                            Text("Row 2")
                        }
                        ColoredDivider(color: dividerColor, height: 1)
                        
                        HStack {
                            Text("Current Balance")
                            Spacer()
                            Text("Row 2")
                        }
                        ColoredDivider(color: dividerColor, height: 1)
                        HStack {
                            Text("Equtity")
                            Spacer()
                            Text("Row 2")
                        }
                        
                        ColoredDivider(color: dividerColor, height: 1)
                        HStack {
                            Text("Purchase Power")
                            Spacer()
                            Text("Row 2")
                        }
                    }
                    .padding()
                    .background(Color.white)
                    .cornerRadius(10)
                    .shadow(radius: 5) // Add shadow here
                    
                    VStack {
                        NavigationLink(destination: password_recovery()) {
                            HStack{
                                Text("Position")
                                    .foregroundColor(Color.black)
                                    .bold()
                                
                                Spacer()
                                Image(uiImage: UIImage(named: "next_page_arrow")!)
                                    .resizable()
                                    .frame(width: 8, height: 12)
                                    .foregroundColor(.accentColor)
                            }
                        }
                        
                        Divider()
                            .background(Color(red: 0.929, green: 0.929, blue: 0.929))
                                                   .padding(.horizontal, -20)
                        
                        HStack {
                            VStack{
                                Text("ACI")
                                Text("Market Price")
                                    .font(.caption)
                                    .foregroundColor(.gray)
                                Text("Average Price")
                                    .font(.caption)
                                    .foregroundColor(.gray)
                                    
                            }
                            
                            Spacer()
                            VStack{
                                Text("500.00")
                                Text("500.00")
                                    .font(.caption)
                                    .foregroundColor(.gray)
                                Text("500.00")
                                    .font(.caption)
                                    .foregroundColor(.gray)
                            }
                        }
                        ColoredDivider(color: dividerColor, height: 1)
                        HStack {
                            VStack{
                                Text("ACME")
                                Text("Market Price")
                                    .font(.caption)
                                Text("Average Price")
                            }
                            
                            Spacer()
                            VStack{
                                Text("500.00")
                                Text("500.00")
                                Text("500.00")
                            }
                        }
                        
                    }
                    .padding()
                    .background(Color.white)
                    .cornerRadius(10)
                    .shadow(radius: 5) // Add shadow here
                    
                    VStack {//3rd vstack
                        NavigationLink(destination: password_recovery()) {
                            HStack{
                                Text("Receivable")
                                    .foregroundColor(Color.black)
                                    .bold()
                                
                                Spacer()
                                Image(uiImage: UIImage(named: "next_page_arrow")!)
                                    .resizable()
                                    .frame(width: 8, height: 12)
                                    .foregroundColor(.accentColor)
                            }
                        }
                        
                        Divider()
                            .background(Color(red: 0.929, green: 0.929, blue: 0.929))
                                                   .padding(.horizontal, -20)
                        
                        HStack {
                            Text("Row 2")
                            Spacer()
                            Text("Row 2")
                        }
                        ColoredDivider(color: dividerColor, height: 1)
                        HStack {
                            Text("Row 2")
                            Spacer()
                            Text("Row 2")
                        }
                        ColoredDivider(color: dividerColor, height: 1)
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
                    
                    
                    VStack {
                        NavigationLink(destination: password_recovery()) {
                            HStack{
                                Text("Transaction")
                                    .foregroundColor(Color.black)
                                    .bold()
                                
                                Spacer()
                                Image(uiImage: UIImage(named: "next_page_arrow")!)
                                    .resizable()
                                    .frame(width: 8, height: 12)
                                    .foregroundColor(.accentColor)
                            }
                        }
                        
                        Divider()
                            .background(Color(red: 0.929, green: 0.929, blue: 0.929))
                                                   .padding(.horizontal, -20)
                        
                        HStack {
                            Text("Row 2")
                            Spacer()
                            Text("Row 2")
                        }
                        ColoredDivider(color: dividerColor, height: 1)
                        HStack {
                            Text("Row 2")
                            Spacer()
                            Text("Row 2")
                        }
                        ColoredDivider(color: dividerColor, height: 1)
                        HStack {
                            Text("Row 2")
                            Spacer()
                            Text("Row 2")
                        }
                    }
                    .padding()
                    .background(Color.white)
                    .cornerRadius(10)
                    .shadow(radius: 5)
                    
                    VStack {
                        NavigationLink(destination: password_recovery()) {
                            HStack{
                                Text("News")
                                    .foregroundColor(Color.black)
                                    .bold()
                                
                                Spacer()
                                Image(uiImage: UIImage(named: "next_page_arrow")!)
                                    .resizable()
                                    .frame(width: 8, height: 12)
                                    .foregroundColor(.accentColor)
                            }
                        }
                        
                        Divider()
                            .background(Color(red: 0.929, green: 0.929, blue: 0.929))
                                                   .padding(.horizontal, -20)
                        
                        HStack {
                            Text("Row 2")
                            Spacer()
                            Text("Row 2")
                        }
                        ColoredDivider(color: dividerColor, height: 1)
                        HStack {
                            Text("Row 2")
                            Spacer()
                            Text("Row 2")
                        }
                        ColoredDivider(color: dividerColor, height: 1)
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
                    
                }//full-vstack
                .padding(.top, 20)
                .padding(.horizontal, 20)
            }
            
            
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
