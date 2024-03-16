//
//  NewsView.swift
//  iosApp
//
//  Created by LEADS Corporation Limited on 11/3/24.
//  Copyright © 2024 orgName. All rights reserved.
//

import SwiftUI

struct NewsView: View {
    // Define arrays for titles, details, and dates
    let titles = ["ABBANK: Weekly NAV", "ACI: Dividend Disbursement"]
    let details = [
        "SubAPSCL NonConvertible and Fully Redeemable Couphead SubAPSCL NonConvertible and Fully Redeemable Couphead SubAPSCL NonConvertible and Fully Redeemable Couphead",
        "SubAPSCL NonConvertible and Fully Redeemable Couphead SubAPSCL NonConvertible and Fully Redeemable Couphead SubAPSCL NonConvertible and Fully Redeemable Couphead"
    ]
    let dates = ["15-jun-2023", "15-jun-2023"]
    
    var body: some View {
        ScrollView {
            VStack(spacing: 20) {
                // Iterate over the arrays to populate the NewsView
                ForEach(0..<titles.count) { index in
                    VStack {
                        HStack {
                            Text(self.titles[index])
                                .foregroundColor(Color.black)
                                .bold()
                            Spacer()
                        }
                        HStack {
                            Text("")
                        }
                        HStack {
                            Text(self.details[index])
                                .foregroundColor(.gray)
                            Spacer()
                        }
                        HStack {
                            Text("")
                        }
                        HStack {
                            Text(self.dates[index])
                                .foregroundColor(.gray)
                            Spacer()
                        }
                    }
                    .padding()
                    .background(Color.white)
                    .cornerRadius(10)
                    .shadow(radius: 5)
                }
                
                Spacer() // Add space at the bottom
            }
            .padding(.horizontal, 20) // Add 20 space at the right
        }
    }
}

struct NewsView_Previews: PreviewProvider {
    static var previews: some View {
        NewsView()
    }
}
