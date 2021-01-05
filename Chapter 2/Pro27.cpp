/*
======================================================================
====== C++ Programming from Problem Analysis to Problem Design =======
-      -------------------------------------------------------       -
-                  Chapter:   2                                      -
-                  Exercise:  27                                     -
-                  Author:    Ali Akbar                              -
-                  IDE:       CLion 20.02                            -
-                  Date:      01/8/20 06:13 PM (PK)                  -
====================== Thanks for this ===============================
======================================================================
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double door_len, door_wid, wind_len, wind_wid, book_len, book_wid;
    double room_hei, room_wid, room_len;
    double area, paint, room,door, windows, bookshelf, req_paint;

    cout<<"Enter Amount of Paint per Ft^2:  ";
    cin>>paint;
    cout<<"Enter Lenght of Room:            ";
    cin>>room_len;
    cout<<"Enter Width of Room:             ";
    cin>>room_wid;
    cout<<"Enter Heigth of Room:            ";
    cin>>room_hei;
    cout<<"Enter Lenght of Door:            ";
    cin>>door_len;
    cout<<"Enter Width of Door:             ";
    cin>>door_wid;
    cout<<"Enter Lenght of Each Windows:    ";
    cin>>wind_len;
    cout<<"Enter Width of Each Windows:     ";
    cin>>wind_wid;
    cout<<"Enter Lenght of BookShelf:       ";
    cin>>book_len;
    cout<<"Enter Width of BookShelf:        ";
    cin>>book_wid;

    // Calculating Area in feet^2
    room = (2*room_len + 2*room_wid) * room_hei;
    door = door_len * door_wid;
    windows = 2 * wind_len * wind_wid;
    bookshelf = book_len * book_wid;

    // Caculating total area to be painted
    area = room - door - windows - bookshelf;
    req_paint = area / paint;

    cout<<"\n"<<round(req_paint)<<" can(s) of paint needed to paint the walls of the room."<<endl;
}