/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  10                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      28/8/20 09:19 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>

using namespace std;

int main()
{
double n1,n2,n3,n4,n5,add;

cout<<"Enter Number 1: ";
cin>>n1;
cout<<"Enter Number 2: ";
cin>>n2;
cout<<"Enter Number 3: ";
cin>>n3;
cout<<"Enter Number 4: ";
cin>>n4;
cout<<"Enter Number 5: ";
cin>>n5;

add = n1+n2+n3+n4+n5;

cout<<"Sum of five numbers is "<<static_cast <int>(add)<<endl;

return 0;
}
