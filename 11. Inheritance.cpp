// Program in CPP
// TO Demonstrate Inheritance
#include <iostream>
using namespace std;

class SampleBase
{
protected:
    int a = 5;

public:
    // Constructor
    SampleBase()
    {
        cout << "\n\nYou are inside the constructor of SampleBase class";
    }
    void display()
    {
        cout << "\n\nYou are inside Member FUnction of SampleBase class...Value of it's Data Member = " << a;
    }
};

class SampleDerived : public SampleBase
{
private:
    int b = 10;

public:
    // Constructor
    SampleDerived()
    {
        cout << "\n\nYou are inside the constructor of SampleDerived class";
    }
    // Member Function
    void displayDerived()
    {
        cout << "\n\nYou are inside Member function of SampleDerived Class...Value of it's Data Member = " << b;
        cout << "\nI can also access the datamember of base class...Value of Base class's Data Member = " << a;
    }
};
int main()
{
    SampleDerived SD;
    SD.display();
    SD.displayDerived();
    return 0;
}
