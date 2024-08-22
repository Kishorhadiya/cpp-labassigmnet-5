#include<iostream>

  using namespace std;

   int count=0;
   class myclass
   {
       
        public:
           
             myclass()
             {
                 count++;
                 cout<<"this is constructor :"<<count<<endl;               
             }

             ~myclass()
             {
                  cout<<"this is deconstructor :"<<count<<endl;
                  count--;
             }

               void display()
               {
                  cout<<count<<endl;
               }
   };
     
      int main()
      {
           myclass s1,s2,s3;

          s1.display();
          s2.display();
          s3.display();

           cout<<"re-enter the functiion"<<endl;
      }