// Program in CPP
// To Demonstrate Destructor....
#include<iostream>
using namespace std;
class destDemo
{
    public:
    destDemo()
    {
        cout<<"\nControl is inside Constructor";
    }
    ~destDemo()
    {
        cout<<"\nControl is inside Destructor";
    }
};
int main()
{
    destDemo d;
    
    return 0;
}