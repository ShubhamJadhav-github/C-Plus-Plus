// Complex Class

#include<iostream>
using namespace std;


class Complex
{
    private:
        float real, img;
    public:
        Complex()
        {

        }
        Complex(float r, float i)
        {
            real = r;
            img = i;
        }
        void diaplay()
        {
            cout<<"Complex("<<real<<", "<<img<<")\n\n";
        }
        void addComplex(Complex c1, Complex c2)
        {
            real = c1.real + c2.real;
            img = c1.img + c2.img;
        }
        Complex addComplex(Complex c)
        {
            Complex t;
            t.real = real + c.real;
            t.img = img + c.img;
            return t;
        }
        Complex operator +(Complex c)
        {
            Complex t;
            t.real = c.real + real;
            t.img = c.img + img;
            return t;
        }
};
int main()
{

    Complex obj1(1.3f, 7.9f), obj2(4.5f, 3.2f), obj3, obj4, obj5;

    obj3.addComplex(obj1, obj2);
    obj4 = obj1.addComplex(obj2);
    obj5 = obj1 + obj2;

    cout<<"\nObject 1 = ";
    obj1.diaplay();
    cout<<"Object 2 = ";
    obj2.diaplay();
    cout<<"Object 3 = ";
    obj3.diaplay();
    cout<<"Object 4 = ";
    obj4.diaplay();
    cout<<"Object 5 = ";
    obj5.diaplay();

    return 0;
}
