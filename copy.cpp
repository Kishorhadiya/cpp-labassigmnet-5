#include <iostream>
using namespace std;


   class abc
   {
       int val;

       public:
         
            abc(int val)
           {
               this->val=val;
           }

            abc(int &val)
            {
                  this->val=val;
            }

             void display()
             {
                  cout<<val<<endl;
                  cout<<"copy constructor "<<endl;
             }
   };

    int main()
    {
          abc  a(100);
          a.display();
          abc b(a);
          b.display();
    }