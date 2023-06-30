// Program in C++ to demonstrate functions with default values of arguments

#include<iostream>
#include<conio.h>
int add(int , int, int n3=0, int n4=0, int n5=0);
using namespace std;
int main()
{
    int sum1,sum2,sum3;
    sum1 = add(10,20);
    sum2 = add(10,30,32);
    sum3 = add(30,23,353,232);

    cout<<sum1<<endl<<sum2<<endl<<sum3;
    getch();
    return 0;
}
int add(int n1,int n2,int n3,int n4,int n5)
{
    return (n1+n2+n3+n4+n5);
}
