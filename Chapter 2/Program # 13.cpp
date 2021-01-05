/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  13                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       Code::Blocks 20.03                     -
-                  Date:      29/8/20 10:56 AM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>

using namespace std;

int main()
{
    // This Program is under Development due to markup Percentage Statement

double original_price, selling_price,final_price, sale_tax, tmp_price;
int markup_percent;

cout<<"Enter Original price of item: ";
cin>>original_price;
cout<<"Enter Percentage of marked up price: ";
cin>>markup_percent;
cout<<"Enter Sales Tax: ";
cin>>sale_tax;


tmp_price = ( original_price * markup_percent );
selling_price += tmp_price;

final_price = selling_price + sale_tax;

cout<<"\nOriginal Price:              "<<original_price<<" $"<<endl;
cout<<"Marked up Price Percentage:  "<<markup_percent<<" %"<<endl;
cout<<"Selling Price:               "<<selling_price<<" $"<<endl;
cout<<"Sales Tax Rate:              "<<sale_tax<<" $"<<endl;
cout<<"Final Price:                 "<<final_price<<" $"<<endl;

return 0;
}
