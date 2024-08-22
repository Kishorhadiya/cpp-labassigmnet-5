
// /* s22.cpp The program  of
// initializing reference members in a C++ class
// using a member initializer list. */

// #include <iostream>
// #include <conio.h>
// using namespace std;

// class Rectangle
// {
//     int &length;
//     int &width;

// public:
//     // Constructor using Member Initializer List
//     Rectangle(int &l, int &w) : length(l), width(w)
//     {

//     }

//     int area()
//     {
//         return length * width;
//     }

//     void displayDimensions()
//     {
//         cout << "Length: " << length << ", Width: " << width << endl;
//     }
// };

// int main()
// {
//     // clrscr();
//     int l = 5;
//     int w = 3;
//     Rectangle rect(l, w); // Pass references of l and w to the object

//     rect.displayDimensions();
//     cout << "Area: " << rect.area() << endl;

//     l = 7; // Changing the value of l
//     w = 4; // Changing the value of w
//     rect.displayDimensions();
//     cout << "Updated Area: " << rect.area() << endl;

//     getch();
//     return 0;
// }

#include <iostream>
using namespace std;

class rectangle
{

    int &length;
    int &width;

public:
    rectangle(int &l, int &w) : length(l), width(w) {}

    int area()
    {
        return length * width;
    }

    void display()
    {
        cout << "length " << length << "width" << width << endl;
    }
};

int main()
{
    int l = 7;
    int w = 8;
    rectangle abc(l,w);
    abc.display();
    cout<<"the area of :"<<abc.area()<<endl;

    l=9;
    w=8;
      abc.display();
      cout<<"uopadte area is :"<<abc.area()<<endl;

  return 0;
  
}