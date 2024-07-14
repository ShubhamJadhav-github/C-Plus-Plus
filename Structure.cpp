// Structures (Similar to classes)

#include<iostream>
using namespace std;

struct Sample
{
    private:
        int d1, d2, d3;
    public:
        Sample(int a, int b, int c)
        {
            d1 = a; d2 = b; d3 = c;
        }
        void display()
        {
            cout<<"Data member 1 = "<<d1<<"\n";
            cout<<"Data member 2 = "<<d2<<"\n";
            cout<<"Data member 3 = "<<d3<<"\n\n";
        }
};
int main()
{
    Sample s1(10,20,30), s2(40,50,60);

    cout<<"Sample S1: \n";
    s1.display();
    cout<<"Sample S2: \n";
    s2.display();
    return 0;
}
