/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  14                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      29/8/20 11:20 AM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>

using namespace std;

const int KBS_IN_BYTES = 1024;
const int MBS_IN_KBS = 1024;
const int GBS_IN_MBS = 1024;

// Manufacturer Muses Units
const int BYTES = 1000;
const int KBS = 1000;
const int MBS = 1000;

int main()
{
double storage_capc, approx_capc;

cout<<"Enter Storage Capacity in GBs: ";
cin>>storage_capc;

storage_capc = storage_capc * MBS * KBS * BYTES;

approx_capc = storage_capc / (GBS_IN_MBS * KBS_IN_BYTES * MBS_IN_KBS);


cout<<"\nApproximate Capacity is: "<<approx_capc<<" GB(s)"<<endl;

}
