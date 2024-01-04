//
//  LoginView.swift
//  iosApp
//
//  Created by LEADS Corporation Limited on 4/12/23.
//  Copyright © 2023 orgName. All rights reserved.
//

import SwiftUI

struct LoginView: View {
    @State private var username = ""
    @State private var password = ""
    
    var body: some View {
        if #available(iOS 16.0, *) {
            NavigationStack{
                VStack{
                    //Spacer()
                    //app name
                    Text("Capita")
                        .font(.largeTitle)
                        .fontWeight(.bold)
                        .foregroundColor(Color(red: 0.592156862745098, green: 0.5490196078431373, blue: 0.12941176470588237))
                    //Spacer()
                    //form
                    VStack(spacing:24){
                        inputView(text: $username,
                                  title: "Username",
                                  placeHolder: "Username")
                        .autocapitalization(.none)
                        
                        inputView(text: $password,
                                  title: "Password",
                                  placeHolder: "Password",
                                  isSecureField: true)
                        
                    }
                    .padding(.horizontal)
                    .padding(.top, 12)
                    
                    //remember & forget button
                    
                    HStack{
                        HStack{
                            Text("Remember me")
                                .fontWeight(.light)
                                .font(.system(size: 14))
                        }
                        Spacer()
                        NavigationLink {
                            RegistrationView()
                                .navigationTitle("Password Recovery")
                                
                        } label: {
                            HStack{
                                Text("Forget Password?")
                                    .fontWeight(.medium)
                                    .underline()
                                    .foregroundColor(Color(red: 0.592156862745098, green: 0.5490196078431373, blue: 0.12941176470588237))
                            }
                            .font(.system(size: 14))
                        }
                        .padding(.top,10)
                    }
                    
                    //LOGIN button
                    Button {
                        print("Log user in..")
                        
                    } label: {
                        HStack{
                            Text("Login")
                                .fontWeight(.semibold)
                        }
                        .foregroundColor(.white)
                        .frame(width: UIScreen.main.bounds.width - 32, height: 48)
                    }
                    .background(Color(red: 0.592156862745098, green: 0.5490196078431373, blue: 0.12941176470588237))
                    .cornerRadius(30)
                    .padding(.top,24)
                

                    //Spacer()
                    
                    
                    //SIGN-UP BUTTON
                    NavigationLink {
                        RegistrationView()
                            .navigationTitle("Registration")
                            //.navigationBarTitleDisplayMode(<#T##displayMode: NavigationBarItem.TitleDisplayMode##NavigationBarItem.TitleDisplayMode#>)
                            
                    } label: {
                        HStack{
                            Text("I don't have an account?")
                            Text("Sign Up")
                                .fontWeight(.medium)
                                .underline()
                                .foregroundColor(Color(red: 0.592156862745098, green: 0.5490196078431373, blue: 0.12941176470588237))
                        }
                        .font(.system(size: 14))
                    }
                    .padding(.top,10)

                    
                    
                    //FACE OR TOUCH ID
                    //ADDING FACE OR TOUCHID
                    
                }
                
                
            }
        } else {
            // Fallback on earlier versions
        }
        
        
    }
}

struct LoginView_Previews: PreviewProvider {
    static var previews: some View {
        LoginView()
    }
}
