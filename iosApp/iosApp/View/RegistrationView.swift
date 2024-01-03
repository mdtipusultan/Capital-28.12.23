//
//  RegistrationView.swift
//  iosApp
//
//  Created by LEADS Corporation Limited on 5/12/23.
//  Copyright © 2023 orgName. All rights reserved.
//

import SwiftUI

struct RegistrationView: View {
    @State private var Username = ""
    @State private var FirstName = ""
    @State private var LastName = ""
    @State private var Email = ""
    @State private var MobileNumber = ""
    @State private var AccountCode = ""
    @State private var Password = ""
    @State private var ConfirmPassword = ""
    
    var body: some View {
        VStack{
            inputView(text: $Username,
                      title: "Username",
                      placeHolder: "Username")
            
            inputView(text: $FirstName,
                      title: "FirstName",
                      placeHolder: "FirstName")
            
            
            inputView(text: $LastName,
                      title: "LastName",
                      placeHolder: "LastName")
            
            
            inputView(text: $Email,
                      title: "Email",
                      placeHolder: "Email")
            .autocapitalization(.none)
            
            inputView(text: $MobileNumber,
                      title: "MobileNumber",
                      placeHolder: "MobileNumber")
            
            
            inputView(text: $AccountCode,
                      title: "AccountCode",
                      placeHolder: "AccountCode")
            
            
            inputView(text: $Password,
                      title: "Password",
                      placeHolder: "Password",
                      isSecureField: true)
            
            inputView(text: $ConfirmPassword,
                      title: "ConfirmPassword",
                      placeHolder: "ConfirmPassword",
                      isSecureField: true)
            
        }
        .padding(.horizontal)
        .padding(.top, 10)
        
        //SIGN-UP BUTTON
        Button {
            print("SIGN user in..")
        } label: {
            HStack{
                Text("Sign Up")
                    .fontWeight(.semibold)
            }
            .foregroundColor(.white)
            .frame(width: UIScreen.main.bounds.width - 32, height: 48)
        }
        .background(Color(red: 0.592156862745098, green: 0.5490196078431373, blue: 0.12941176470588237))
        .cornerRadius(30)
        //.padding(.top,24)
    }
    
    
}

struct RegistrationView_Previews: PreviewProvider {
    static var previews: some View {
        RegistrationView()
    }
}
