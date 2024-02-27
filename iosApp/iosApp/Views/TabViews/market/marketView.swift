//
//  marketView.swift
//  iosApp
//
//  Created by LEADS Corporation Limited on 10/1/24.
//  Copyright © 2024 orgName. All rights reserved.
//

import SwiftUI

struct marketView: View {
    @State private var showAlert = false
    
    var body: some View {
        Text("market")
            .navigationBarTitle("Market", displayMode: .inline)
            .background(Color.green)
            .navigationBarItems(
                leading: Button(action: {
                    // Action for the first button
                }) {
                    Text("Button 1")
                },
                trailing: HStack {
                    Button(action: {
                        // Action for the second button
                        self.showAlert.toggle()
                    }) {
                        Image(systemName: "gear")
                    }
                    Button(action: {
                        // Action for another button
                    }) {
                        Image(systemName: "plus")
                    }
                }
            )
    }
}


#Preview {
    marketView()
}
