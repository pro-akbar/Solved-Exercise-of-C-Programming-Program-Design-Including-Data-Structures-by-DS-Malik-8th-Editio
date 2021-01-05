/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  17                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      29/8/20 05:58 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>
#include <cmath>

using namespace std;

const double CAPACITY_CARTON = 3.78;

int main()
{
double milk, cartons, cost, profits, cost_per_liter,profits_per_liter;

cout<<"Enter Total amount of milk in liter(s): ";
cin>>milk;
cout<<endl;
cout<<"Enter Cost of Milk per liter: ";
cin>>cost_per_liter;
cout<<"Enter Profit per carton: ";
cin>>profits_per_liter;

cartons = (milk / CAPACITY_CARTON);

cost = milk * cost_per_liter;

profits = cartons * profits_per_liter; // This Formula may be wrong

cout<<round(cartons)<<" carton(s) needed to hold milk."<<endl;
cout<<"Cost: "<<cost<<" $"<<endl;
cout<<"Profits: "<<profits<<" $"<<endl;
}


