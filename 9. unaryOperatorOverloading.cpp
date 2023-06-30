// Program in CPP
// To demonstrate unary operator's overloading

#include<iostream>
using namespace std;
class Sample
{
    private:
    int SampleMember;

    public:
    Sample()
    {
        //Nothing
    }
    Sample(int SM)
    {
        SampleMember = SM;
    }

    void displayData()
    {
        cout<<" = "<<SampleMember;
    }

    // Overloading post-increment operator
    // Argument int is not actually an argument.
    // It is used to just distinguish the overloading in between post and pre increment operators
    Sample operator++(int)
    {
        Sample temp = (SampleMember);   //Calls Parameterized Constructor
        SampleMember++;
        return temp;
    }

    //Overloading pre-increment operator
    Sample operator++()
    {
        SampleMember++;
        return *this;
    }

};
int main()
{
    Sample s1(100),s2,s3;

    cout<<endl<<"S1 Value";
    s1.displayData();

    s2 = s1++;
    cout<<endl<<"S2 Value";
    s2.displayData();

    s3 = ++s1;
    cout<<endl<<"S3 Value";
    s3.displayData();

    return 0;
}
