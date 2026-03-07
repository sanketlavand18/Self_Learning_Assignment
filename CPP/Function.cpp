#include<stdio.h>
#include<iostream>
using namespace std;

class swapNO
{
    public:
   void swap(int &a,int &b)
   {
    int temp=a;
     a=b;
     b=temp;
   }
   
};
int main()
{
    int a=10,b=20;
     cout<<"beforer Swap a & b "<<a<<", "<<b<<endl;
    swap(a,b);
    cout<<"after Swap a & b "<<a<<", "<<b<<endl;
}
