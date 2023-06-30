// #include <iostream>
// using namespace std;
// struct exams
// {
//     int math, science, history;
// };
// exams exam[3], aggregate, average;
// exams operator+(exams, exams);
// int main()
// {
//     cout << "Enter Marks of exam 1: \nMath:";
//     cin >> exam[0].math;
//     cout << "Science: ";
//     cin >> exam[0].science;
//     cout << "History: ";
//     cin >> exam[0].history;

//     cout << "Enter Marks of exam 2: \nMath:";
//     cin >> exam[1].math;
//     cout << "Science: ";
//     cin >> exam[1].science;
//     cout << "History: ";
//     cin >> exam[1].history;

//     cout << "Enter Marks of exam 3: \nMath:";
//     cin >> exam[2].math;
//     cout << "Science: ";
//     cin >> exam[2].science;
//     cout << "History: ";
//     cin >> exam[2].history;

//     aggregate = exam[0] + exam[1] + exam[2];
    
//     cout << "\tExam No.\tScienceMarks\tMathMarks\tHistoryMarks\n\n";
//     for (int i = 0; i <= 2; i++)
//     {
//         cout << "\tExam " << i + 1 << "\t\t" << exam[i].science << "\t\t" << exam[i].math << "\t\t" << exam[i].history << endl;
//     }
//     cout << "\tAggregate"
//          << "\t" << aggregate.science << "\t\t" << aggregate.math << "\t\t" << aggregate.history;
//     return 0;
// }

// exams operator+(exams x, exams y)
// {
//     exams temp;
//     temp.history = x.history + y.history;
//     temp.math = x.math + y.math;
//     temp.science = x.science + y.science;
//     return temp;
// }

#include<iostream>
#include<conio.h>
using namespace std;

struct complex
{
    double first_part,second_part;
};

complex a,b,c,d;

complex setValues(double,double);
void display(complex);
complex operator+(complex,complex);
complex operator-(complex,complex);

int main()
{
    a = setValues(29.72,94.15);
    cout<<"\nValues of complex no. A: ";
    display(a);

    b = setValues(10.56,33.62);
    cout<<"\nValues of complex no. B: ";
    display(b);

    c = a+b;
    cout<<"\nValues of complex no. A+B: ";
    display(c);

    d = a-b;
    cout<<"\nValues of complex no. A-B: ";
    display(d);

    return 0;
}

complex setValues(double first, double second)
{
    complex temp;
    temp.first_part = first;
    temp.second_part = second;
    return temp;
}

void display(complex c)
{
    cout<<"( "<<c.first_part<<" , "<<c.second_part<<" )"<<endl;
}

complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.first_part = c1.first_part + c2.first_part;
    temp.second_part = c1.second_part + c2.second_part;
    return temp;
}

complex operator-(complex c1, complex c2)
{
    complex temp;
    temp.first_part = c1.first_part - c2.first_part;
    temp.second_part = c1.second_part - c2.second_part;
    return temp;
}
