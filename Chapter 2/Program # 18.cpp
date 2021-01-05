/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  18                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      29/8/20 06:12 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>
#include <cmath>

using namespace std;

const int TAXS = 14;
const int ACCESSORIES = 10;
const int SCHOOL_ACCESSORIES = 1;
const int SAVING_BONDS = 25;
const double ADDITIONAL_SAVINGS = 0.50;

int main()
{
    int no_hours;
    double rate_per_hour,amount,tax,acc,school_acc,bonds,add_bonds;

    cout<<"Enter Pay rate per hour: ";
    cin>>rate_per_hour;
    cout<<"Enter Worked hour(s) per week: ";
    cin>>no_hours;
    cout<<endl;

    amount = no_hours * rate_per_hour;
    tax = (amount * TAXS) / 100;
    cout<<"Amount before tax is "<<amount<<" & and after tax is "<<(amount-tax)<<" $.\n";
    amount -=tax;

    acc = (amount * ACCESSORIES) / 100;
    amount -=acc;

    school_acc = (amount * SCHOOL_ACCESSORIES) / 100;
    amount -=school_acc;

    bonds = (amount * SAVING_BONDS) / 100;
    amount -=bonds;

    add_bonds = (amount * ADDITIONAL_SAVINGS) / 100;
    amount -= add_bonds;

    cout<<"\nMoney Spend on Clothes and other Accessories:    "<<acc<<" $"<<endl;
    cout<<"Money spend on School supplies:                  "<<school_acc<<" $"<<endl;
    cout<<"Money Spend to buy Savings Bond:                 "<<bonds<<" $"<<endl;
    cout<<"Money Spend to buy additional Savings Bond:      "<<add_bonds<<" $"<<endl;
    //cout<<"Total Spend:                                     "<<(acc+school_acc+bonds+add_bonds)<<" $"<<endl;
    //cout<<"Remaining Amount:                                "<<amount<<" $"<<endl;

}
