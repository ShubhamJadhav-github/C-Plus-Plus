// Program in CPP
// TO Demonstrate the use of static data member within a class...
#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    string name;
    int age;
    int marks;
    static int count;

    public:
    //Constructor
    Student()
    {
        cout<<"\nEnter the Name of Student: ";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
        cout<<"Enter the Total Marks: ";
        cin>>marks;
    }

    //Member Function [Non-Static]
    void display()
    {
        count++;
        cout<<"\n\n"<<count<<".\nName: "<<name<<"\nAge: "<<age<<"\nMarks: "<<marks;
    }

    //Member Functionn [Static]
    static void iAmStatic()
    {
        cout<<"\n\nI am Static Function...\nI can access static data members \"only\"...";
    }
    //Destructor
    ~Student()
    {
        cout<<"\n\n\\_/\\_/\\_/\\_/\\_/\\_/\\_/\\_/\\_/\\_/\n\tThank You "<<name<<"\n\\_/\\_/\\_/\\_/\\_/\\_/\\_/\\_/\\_/\\_/\n";
    }
};

int Student::count = 0;

int main()
{
    Student s1,s2,s3;
    //Calling non-static FUnctions
    s1.display();
    s2.display();
    s3.display();

    //calling static function
    Student::iAmStatic();

    return 0;
}
