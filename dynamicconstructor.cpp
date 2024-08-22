#include <iostream>
using namespace std;

class dynamic
{
    int *arr;
    int size;

public:
    dynamic(int a)
    {
        size = a;
        arr = new int[size]; // allocated dynamic memory

        for (int i = 0; i < size; i++)
        {
            arr[i] = i + 100;
        }
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << " ";
    }
};

int main()
{
    int size;
    cout << "enter the size of array :";
    cin >> size;

    dynamic s1(size);
    s1.display();
    return 0;
}