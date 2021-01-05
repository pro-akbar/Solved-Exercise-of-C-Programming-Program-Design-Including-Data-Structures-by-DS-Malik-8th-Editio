/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  11                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      29/8/20 10:38 AM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>

using namespace std;

int main()
{
    double fuel_gallons = 0,miles_per_gallon = 0;

    cout<<"Enter capacity of automobile fuel tank in gallons: ";
    cin>>fuel_gallons;

    cout<<"Enter Miles the automobile can be driven per gallons: ";
    cin>>miles_per_gallon;

    cout<<"An Automobile can drive "<<fuel_gallons * miles_per_gallon<<" miles without refueling..."<<endl;
}
