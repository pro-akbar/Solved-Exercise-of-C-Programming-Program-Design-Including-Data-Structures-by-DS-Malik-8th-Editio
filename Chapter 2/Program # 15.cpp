/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  15                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      29/8/20 05:27 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>

using namespace std;

const double PI = 3.141593;

int main()
{
    // Where the PI will used I don't know and i solved this problem from my
    // point view. If you found its wrong then feedback me at this email:
    // paksoft402@gmail.com
    // thanks for your feedback (^_^)

double radius,price,price_per_sq;

cout<<"Enter Radius in inch(es): ";
cin>>radius;
cout<<"\n";

cout<<"Enter Price of Pizza: ";
cin>>price;
cout<<endl;

price_per_sq = (radius *radius) / price;

cout<<"Price of Pizza per square inch(es) is: "<<price_per_sq<<endl;
}
