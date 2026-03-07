#include<stdio.h>
#include<iostream>
using namespace std;

class student
{
    public:
   void add(int *n)
   {    
        cout<<"in function using poiner*n = "<<*n<<endl;
         *n=*n*10;
   } 
};
int main()
{
    student s;
    int n=10;
    cout<<" value of n = "<<n<<endl;
    cout<<"address of n = "<<&n<<endl;

    s.add(&n);
    
    cout<<"value after using pointer n= "<<n;
    return 0;

}
