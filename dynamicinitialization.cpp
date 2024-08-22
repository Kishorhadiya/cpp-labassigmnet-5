#include <iostream>

using namespace std;

class rectangle
{
    int len, bre;

public:
    rectangle(int l, int b)
    {
        len = l;
        bre = b;
    }

     int area()
    {
        return len * bre;
    }

        // void display(void)
        // {
        //       cout<<area;

        // }
};

int main()
{
    int l, b;

    cout << "enter the length :";
    cin >> l;

    cout << "enter the breadth :";
    cin >> b;

     rectangle r(l, b);

     cout<<"area of rectangle is :"<<r.area()<<endl;

     

   
    return 0;
}