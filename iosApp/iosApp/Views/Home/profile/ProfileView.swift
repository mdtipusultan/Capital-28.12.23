//
//  ProfileView.swift
//  iosApp
//
//  Created by LEADS Corporation Limited on 25/12/23.
//  Copyright © 2023 orgName. All rights reserved.
//

import SwiftUI

struct ProfileView: View {
    let options = ["Option 1", "Option 2", "Option 3", "Option 4"]

    var body: some View {
        List {
            // First Row
            HStack {
                Image(systemName: "person.circle")
                    .resizable()
                    .frame(width: 50, height: 50)
                VStack(alignment: .leading) {
                    Text("Your Name")
                        .font(.headline)
                    Text("Your ID")
                        .font(.subheadline)
                }
                Spacer()
            }
            
            // Other Rows
            ForEach(options, id: \.self) { option in
                Text(option)
            }
        }
        .listStyle(GroupedListStyle()) // Optional: Apply a specific list style
        .navigationBarTitle("Profile")
    }
}

struct ProfileView_Previews: PreviewProvider {
    static var previews: some View {
        ProfileView()
    }
}

