//Function Overloading - 1
// #include <iostream>
// using namespace std;

// void print_this(int, int);
// void print_this(int, int, int);
// void add(int a, int b, int c = 0, int d = 0); // two argunents int c and int d with default values 0 //this function will print addition

// int main()
// {
//     int w = 50, x = 10, y = 40, z = 60;

//     print_this(x, y);
//     print_this(x, y, z);

//     add(x, y);
//     add(x, y, z);
//     add(w, x, y, z);
    
//     return 0;
// }

// void print_this(int a, int b)
// {
//     cout << endl
//          << " a = " << a << " b = " << b;
// }

// void print_this(int a, int b, int c)
// {
//     cout << endl
//          << " a = " << a << " b = " << b << " c = " << c;
// }

// void add(int a, int b, int c, int d)
// {
//     cout << endl
//          << "Addition = " << a + b + c + d;
// }


//Function Overloading - 2

#include<iostream>
#include<conio.h>
using namespace std;
int add(int, int);
double add(int, double);
double add(double, int);
double add(double, double);
int main()
{
    int a=32,b=91;
    double x=84.98,y=59.723;
    cout<<add(a,b);
    cout<<add(a,x);
    cout<<add(y,b);
    cout<<add(x,y);
    return 0;
}
int add(int p, int q)
{
    cout<<"You are Inside First Function"<<endl<<"Sum = ";
    return (p+q);
}
double add(int p, double q)
{
    cout<<"\nYou are Inside Second Function"<<endl<<"Sum = ";
    return (p+q);
}
double add(double p, int q)
{
    cout<<"\nYou are Inside Third Function"<<endl<<"Sum = ";
    return (p+q);
}
double add(double p, double q)
{
    cout<<"\nYou are Inside Fourth Function"<<endl<<"Sum = ";
    return (p+q);
}
