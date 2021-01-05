/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  24                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       CLion 20.02                            -
-                  Date:      01/9/20 05:22 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/
#include <iostream>

using namespace std;

int main()
{
    // wl for wire length, fl for frame length and fw for frame width.
    double wl, fl, fw;
    cout<<"Enter Length of Wire: ";
    cin>>wl;

//    wl = 2*fl + 2*fw
//    fl = 1.5*fw
//    wl = 2*(1.5*fw) + 2*fw
//    wl = 5fw
//    fw = wl / 5
//            This is Frame width Formula

    fw = wl / 5;
    fl = 1.5*fw;

    cout<<endl;
    cout<<"Length:      "<<fl<<endl;
    cout<<"Width:       "<<fw<<endl;

}