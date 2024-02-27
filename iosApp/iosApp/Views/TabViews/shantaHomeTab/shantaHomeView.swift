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
                                Text("800.00")
                                    .font(.caption)
                                    .foregroundColor(.gray)
                                Text("800.00")
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
                                    .foregroundColor(.gray)
                                Text("Average Price")
                                    .font(.caption)
                                    .foregroundColor(.gray)
                            }
                            
                            Spacer()
                            VStack{
                                Text("500.00")
                                Text("800.00")
                                    .font(.caption)
                                    .foregroundColor(.gray)
                                Text("800.00")
                                    .font(.caption)
                                    .foregroundColor(.gray)
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
                            Text("Right Share Receivable")
                                .foregroundColor(Color.black)
                                .bold()
                            Spacer()
                        }
                        HStack {
                            Text("")
                        }
                        HStack {
                            Text("AL-HAJTEX")
                                .foregroundColor(.gray)
                            Spacer()
                            Text("100.00 @ 0.00")
                                .font(.caption)
                                .foregroundColor(.gray)
                        }
                        HStack {
                            Text("AL-HAJTEX")
                                .foregroundColor(.gray)
                            Spacer()
                            Text("50.00 @ 0.00")
                                .font(.caption)
                                .foregroundColor(.gray)
                        }
                        ColoredDivider(color: dividerColor, height: 1)
                        
                        HStack {
                            Text("Cash Dividend Receivable")
                                .foregroundColor(Color.black)
                                .bold()
                            Spacer()
                        }
                        HStack {
                            Text("")
                        }
                        HStack {
                            Text("ACI")
                                .foregroundColor(.gray)
                            Spacer()
                            Text("0.00 @ 22,000.00")
                                .font(.caption)
                                .foregroundColor(.gray)
                        }
                        HStack {
                            Text("ACI")
                                .foregroundColor(.gray)
                            Spacer()
                            Text("0.00 @ 22,000.00")
                                .font(.caption)
                                .foregroundColor(.gray)
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
                            Text("Cash Deposit")
                                .foregroundColor(Color.black)
                                .bold()
                            Spacer()
                            
                            Text("-20,000.00")
                                .foregroundColor(Color.red)
                                .bold()
                        }
                        HStack {
                            Text("")
                        }
                        HStack {
                            Text("15-jun-2023")
                                .foregroundColor(.gray)
                            Spacer()
                        }
                        ColoredDivider(color: dividerColor, height: 1)
                        
                        HStack {
                            Text("cdbl charge Ac opening (own)")
                                .foregroundColor(Color.black)
                                .bold()
                            Spacer()
                            
                            Text("+500.00")
                                .foregroundColor(Color.green)
                                .bold()
                        }
                        HStack {
                            Text("")
                        }
                        HStack {
                            Text("15-jun-2023")
                                .foregroundColor(.gray)
                            Spacer()
                        }
                        ColoredDivider(color: dividerColor, height: 1)
                        
                        HStack {
                            Text("BUY - ABBANK")
                                .foregroundColor(Color.black)
                                .bold()
                            Spacer()
                            
                            Text("+7,575.00")
                                .foregroundColor(Color.green)
                                .bold()
                        }
                        HStack {
                            Text("")
                        }
                        
                        HStack {
                            Text("SubAPSCL NonConvertIABLE and Fully Redeemable Couphead")
                                .foregroundColor(.gray)
                            Spacer()
                            Text("500 @ 15")
                                .foregroundColor(.gray)
                        }
                        HStack {
                            Text("")
                        }
                        HStack {
                            Text("15-jun-2023")
                                .foregroundColor(.gray)
                            Spacer()
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
                            Text("ABBANK: Weekly NAV")
                                .foregroundColor(Color.black)
                                .bold()
                            Spacer()
                        }
                        HStack {
                            Text("")
                        }
                        HStack {
                            Text("SubAPSCL NonConvertIABLE and Fully Redeemable Couphead SubAPSCL NonConvertIABLE and Fully Redeemable Couphead SubAPSCL NonConvertIABLE and Fully Redeemable Couphead")
                                .foregroundColor(.gray)
                        }
                        HStack {
                            Text("")
                        }
                        HStack {
                            Text("15-jun-2023")
                                .foregroundColor(.gray)
                            Spacer()
                        }
                        ColoredDivider(color: dividerColor, height: 1)
                        HStack {
                            Text("ACI: Dividend Disbursement")
                                .foregroundColor(Color.black)
                                .bold()
                            Spacer()
                        }
                        HStack {
                            Text("")
                        }
                        HStack {
                            Text("SubAPSCL NonConvertIABLE and Fully Redeemable Couphead SubAPSCL NonConvertIABLE and Fully Redeemable Couphead SubAPSCL NonConvertIABLE and Fully Redeemable Couphead")
                                .foregroundColor(.gray)
                        }
                        HStack {
                            Text("")
                        }
                        HStack {
                            Text("15-jun-2023")
                                .foregroundColor(.gray)
                            Spacer()
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
