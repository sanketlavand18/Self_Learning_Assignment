// 3. Write a program to implement inner class in C++

#include <iostream>
using namespace std;

class Outer {
public:
    int a=10;
void Print()
{
    cout<<"function of outer"<<endl;
}
public:
    class Inner {
    public:

        void display(Outer o) {
            
            cout<<o.a;
            o.Print();
            cout << "Inner class function\n";
        }
    };
};

int main() {
    Outer obj1;
    Outer::Inner obj;
    cout<<obj1.a<<endl;
    obj.display(obj1);
}