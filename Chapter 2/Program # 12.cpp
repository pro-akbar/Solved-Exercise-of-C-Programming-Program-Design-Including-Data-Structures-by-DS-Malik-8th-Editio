/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  12                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      29/8/20 10:44 AM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>

using namespace std;

const int SECS_IN_HOURS = 3600;
const int SECS_IN_MINUTES = 60;
int main()
{
    int secs_in_escape,hours,minutes,seconds;

    cout<<"Enter Escape time in Second(s): ";
    cin>>secs_in_escape;
    cout<<"\n";

    seconds = secs_in_escape;

    hours = secs_in_escape / SECS_IN_HOURS;
    secs_in_escape %= SECS_IN_HOURS;

    minutes = secs_in_escape / SECS_IN_MINUTES;
    secs_in_escape %= SECS_IN_MINUTES;



    cout<<seconds<<" Seconds in time "<<hours<<":"<<minutes<<":"<<secs_in_escape<<endl;
}

