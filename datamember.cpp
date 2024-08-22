#include <iostream>
using namespace std;

class abc
{

public:
    int x;
    void display()
    {
        cout << "the value of x is :" << x << endl;
    }
};

int main()
{
    abc obj, *p;
    p = &obj;
    int abc::*ptr = &abc::x;
    obj.*ptr = 10000;
    obj.display();
    p->*ptr = 20000;
    p->display();
    return 0;
}