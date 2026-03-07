#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int min,max;
    int a=50;
    int b=60;
    int c=30;

    // AND Op
    if (a>b && a>c)
    {
        max=a;
    }
     else if (b>c)
    {
        max=b;
    }
    else 
    {
        max=c;
    }
    cout<<"AND op"<<endl;
    cout<<max<<endl;

    // OR Op
    cout<<"OR op"<<endl;
    if (a<b || a<c)
    {
        cout<<"Or Operator is true"<<endl;
    }
    else
    {
        cout<<"not or operator is not executed"<<endl;
    }

    // NOT op

    int age=25;
    cout<<"NOT op"<<endl;

    if (!(age>20))
    {
       cout<<"not valid"<<endl;
    }
    else
    {
        cout<<"valid"<<endl;
    }

    cout<<"Unary op"<<endl;

    int u=10;
    u++;++u;
    u--;--u;
    
    cout<<u;


    cout<<"Ternary op"<<endl;

    cout << (age > 18 ? "valid" : "not valid");

    cout<<"Assignment op";
    int z=20;
    if(z%2==0)
    {
        cout<<"== assignment op "<<z <<" = even no"<<endl;
    }
    cout<<"Assignment op +=,*=,-=,/=";
    z=+3;
    cout<<"+= assignmentt op "<<z;
    z*=3;
    cout<<"*= assignmentt op "<<z;
    z/=2;
    cout<<"/= assignmentt op "<<z;
    z=-3;
    cout<<"-+= assignmentt op "<<z;
    
}