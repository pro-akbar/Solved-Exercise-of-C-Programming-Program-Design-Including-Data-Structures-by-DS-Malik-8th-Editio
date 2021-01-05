/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  8                                      -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      28/8/20 09:00 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>
#include <string>

using namespace std;

const int SECRET = 11;
const double RATE = 12.50;

int main()
{
int num1, num2, newNum;
string name;
double hoursWiorked,wages;

cout<<"Enter two numbers separated by space: ";
cin>>num1>>num2;
cout<<endl;

cout<<"The value of num1 = "<<num1<<" and the value of num2 = "<<num2<<endl;

newNum = 2 * num1 + num2;

cout<<"The value of newNum is "<<newNum<<endl;

cout<<"Enter Your Last Name: ";
cin>>name;
cout<<"Enter Decimal number between 0 and 70: ";
cin>>hoursWiorked;

wages = hoursWiorked * RATE;

cout<<"Name: "<<name<<endl;
cout<<"Pay Rate: "<<RATE<<"$"<<endl;
cout<<"Salary: "<<wages<<"$"<<endl;

return 0;
}
