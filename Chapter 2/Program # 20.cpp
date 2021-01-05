/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  20                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      30/8/20 02:10 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int fixed_comm,per_of_comm,price,max_price,min_price,comm;

cout<<"Enter the salesperson\'s fixed commission: ";
cin>>fixed_comm;
cout<<"Enter Percentage of commission: ";
cin>>per_of_comm;
cout<<"Enter Price of Car: ";
cin>>price;
cout<<"Enter the maximum and minimum selling price of car. (Separated by space): ";
cin>>max_price>>min_price;
cout<<endl;

comm = ((price * per_of_comm) / 100) + fixed_comm;

price += comm;

max_price += price;
min_price += price;


cout<<"Maximum Price of Car: "<<max_price<<" $\n";
cout<<"Minimum Price of Car: "<<min_price<<" $\n";
cout<<"Commission Range:     "<<comm<<" $\n";  // This statement may be wrong in output
}

