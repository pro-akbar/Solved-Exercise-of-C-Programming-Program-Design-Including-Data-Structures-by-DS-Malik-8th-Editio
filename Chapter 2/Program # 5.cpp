/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  5                                      -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      28/8/20 08:43 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>
#include <stdio.h>

using namespace std;

const double PI = 3.1415;
int main()
{
double radius;
double area;
double circumference;

cout<<"Enter the radius: ";
cin>>radius;
cout<<endl;

area = PI * radius * radius;
circumference = 2 * PI * radius;

cout<<"Area = "<<area<<endl;
cout<<"Circumference = "<<circumference<<endl;

getchar();

return 0;
}
