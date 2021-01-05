/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  7                                      -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      28/8/20 08:53 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
double no;
cout<<"Enter Decimal Values: ";
cin>>no;
cout<<endl;

cout<<"rounded number to the nearest integer is: "<<round(no)<<endl; // May be this
cout<<"rounded number to the nearest integer is: "<<static_cast <int>(no)<<endl; // or May be this

getchar();
return 0;
}
