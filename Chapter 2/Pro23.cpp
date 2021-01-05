/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  23                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       CLion 20.02                            -
-                  Date:      31/8/20 08:51 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double SERVICE_CHARGE = 1.5;
int main()
{

    int no_of_shares;
    double price_shares, selling_price, firm_charges_b, firm_charges_s;

    cout<<"Enter Nuumber of Shares Sold:            ";
    cin>>no_of_shares;
    cout<<"Enter Purchase Price of Each Share:      ";
    cin>>price_shares;
    cout<<"Enter Selling Price of Each Share:       ";
    cin>>selling_price;

    firm_charges_b = (SERVICE_CHARGE * no_of_shares * price_shares) / 100;
    firm_charges_s = (SERVICE_CHARGE * no_of_shares * selling_price) / 100;

    cout<<endl;

    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Total Amount Invested:                               "<<(firm_charges_b + (no_of_shares * price_shares))<<" $"<<endl;
    cout<<"Total Service Charges:                               "<<(firm_charges_b + firm_charges_s)<<" $"<<endl;
    cout<<"Total Amount (Postive Gained ; Nagative Lost):       "<<((firm_charges_b + (no_of_shares * price_shares)) - (firm_charges_s + (no_of_shares * selling_price)))<<" $"<<endl;
    cout<<"Total Amount Received:                               "<<(firm_charges_s + (no_of_shares * selling_price))<<" $"<<endl;
}