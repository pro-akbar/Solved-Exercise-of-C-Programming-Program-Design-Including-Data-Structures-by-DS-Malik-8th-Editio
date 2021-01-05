/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  16                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      29/8/20 05:41 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>
#include <cmath>

using namespace std;

const double CAPACITY_CARTON = 3.78;
const double MILK_PER_LITER = 0.38;
const double PROFIT_PER_CARTON = 0.27;

int main()
{
double milk,cartons,cost,profits;

cout<<"Enter Total amount of milk in liter(s): ";
cin>>milk;
cout<<endl;

cartons = (milk / CAPACITY_CARTON);

cost = milk * MILK_PER_LITER;

profits = cartons * PROFIT_PER_CARTON; // This Formula may be wrong

cout<<round(cartons)<<" carton(s) needed to hold milk."<<endl;
cout<<"Cost: "<<cost<<" $"<<endl;
cout<<"Profits: "<<profits<<" $"<<endl;
}

