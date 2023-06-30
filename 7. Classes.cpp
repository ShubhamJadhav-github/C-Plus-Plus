// Program in CPP to demonstarte the usage of classes
#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length,breadth;

    public:
    void setValues()
    {
        cout<<endl<<"Enter values of length and breadth: ";
        cin>>length>>breadth; 
    }
    void calculateArea()
    {
        cout<<"Area = "<<length*breadth;
    }
    void calculatePeri()
    {
        cout<<endl<<"Perimeter = "<<(length+breadth)*2;
    }
};
int main()
{
    Rectangle r1,r2;

    cout<<"\nFor Rectangle 1: ";
    r1.setValues();
    r1.calculateArea();
    r1.calculatePeri();

    cout<<"\n\nFor Rectangle 2: ";
    r2.setValues();
    r2.calculateArea();
    r2.calculatePeri();
    return 0;
}
