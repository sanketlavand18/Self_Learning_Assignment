// 4. Design a hierarchy of computer printers. Use multiple inheritance in your hierarchy.
//  Also use friend functions and classes in your program.


#include<iostream>
using namespace std;

// Base class 1
class Printer {
protected:
    string brand = "Power";
};

// Base class 2
class Scanner {
protected:
    int dpi = 300;
};


class Tech;

// Derived class
class AllInOne : public Printer, public Scanner {
private:
    int pages = 150;

public:
    void show() {
        cout << "Brand: " << brand << endl;
        cout << "DPI: " << dpi << endl;
    }

    // friend function
    friend void displayPages(AllInOne);

    // friend class
    friend class Tech;
};

// Friend function
void displayPages(AllInOne obj) {
    cout << "Pages: " << obj.pages << endl;
}

// Friend class
class Tech {
public:
    void access(AllInOne obj) {
        cout << "Tech Access Pages: " << obj.pages << endl;
    }
};

int main() {
    AllInOne a;

      // normal function
    a.show();    
    // friend function        
    displayPages(a);      

    Tech t;
     // friend class
    t.access(a);         

    return 0;
}