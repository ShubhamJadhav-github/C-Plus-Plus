// Program in cpp
// For dynamic allocation of build in and user defined data types

#include<iostream>
using namespace std;

class Sample
{
    private:
    int S;

    public:
    // Constructor
    Sample()
    {
        cout<<"\n\nCAlled Constructor...\t";
        cout<<"Initialize Sample: ";
        cin>>S;
    }

    // Member Function
    void display()
    {
        cout<<"\nSample= "<<S;
    }

    // Destructor
    ~Sample()
    {
        cout<<"\tCalled the Destructor...";
    }
};

int main()
{

    //*************Dynamic Memory Allocation of InBuild data types*************
    int *a = new int;
    float *b = new float;
    char *c = new char;

    *a = 2;
    *b = 6.2002f;
    *c = '&';

    cout<<"\nInt a = "<<*a;
    cout<<"\nFloat b = "<<*b;
    cout<<"\nChar c = "<<*c;
    
    int n;
    cout<<"\n\nEnter the size of an array: ";
    cin>>n;
    //*************Dynamic Memory Allocation of An Array*************
    int *arr = new int[n];

    //Accepting Array Elements From the user...
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter Element no. "<<i<<" : ";
        cin>>arr[i];
    }

    //*************Displaying Values of Array Elements*************
    cout<<"\nArray Elements: ";
    for(int i=0;i<n;i++)
        cout<<"\narr["<<i<<"] = "<<arr[i];

    //*************Dynamic Memory Allocation of User Defined Data Structure class*************
    Sample *s1 = new Sample();
    s1->display();
    delete s1;

    return 0;
}