/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  9                                      -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      28/8/20 09:14 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>

using namespace std;

int main()
{
    double ts1,ts2,ts3,ts4,ts5,average;
    cout<<"Enter Test Scores 1: ";
    cin>>ts1;
    cout<<"Enter Test Scores 2: ";
    cin>>ts2;
    cout<<"Enter Test Scores 3: ";
    cin>>ts3;
    cout<<"Enter Test Scores 4: ";
    cin>>ts4;
    cout<<"Enter Test Scores 5: ";
    cin>>ts5;

    average = (ts1+ts2+ts3+ts4+ts5) / 5;

    cout<<"Average of test Score 5 is "<<average<<endl;

    return 0;
}
