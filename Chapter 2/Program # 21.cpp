/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  21                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      30/8/20 02:30 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>
#include <cmath>

using namespace std;

const long double K = 6.67E-8;

int main()
{
double M1,M2,d;
long double F;

cout<<"Enter the Masses of Bodies (Separate by Space): ";
cin>>M1>>M2;
cout<<"Enter Distance between bodies: ";
cin>>d;
cout<<"\n";

F = K *((M1 * M2) / (d * d));

cout<<"Force between two bodies is: "<<F<<endl;

}

