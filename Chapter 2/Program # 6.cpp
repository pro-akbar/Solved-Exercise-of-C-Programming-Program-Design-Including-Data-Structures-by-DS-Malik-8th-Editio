/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  6                                      -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      28/8/20 08:48 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
string name;
double studyHours;

cout<<"Enter your Name: ";
cin>>name;
cout<<"Enter Study Hours: ";
cin>>studyHours;

cout<<"Hello, "<<name<<"! on Saturday, you need to study "<<studyHours<<" hours for the exam."<<endl;
}
