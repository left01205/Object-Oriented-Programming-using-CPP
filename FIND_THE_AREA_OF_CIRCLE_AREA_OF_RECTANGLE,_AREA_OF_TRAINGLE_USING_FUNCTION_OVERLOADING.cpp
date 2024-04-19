//Using function overloading 
#include <iostream>
using namespace std;

double area(double r)
{
    // for circle 
    return 3.14 * r* r;
}
double area(double len, double wid)
{   // for rectangle
    return len * wid;
}

double area(float hgt,float  bse)
{   // for triangle with given base and height 
    return 0.5*bse*hgt;
}

int main()
{
    int ch;
    cout<<"Enter 1 for area of circle\n 2 for area of rectangle\n 3 for area of Triangle";
    cin>>ch;
    switch(ch)
    {
        case 1:
            double r;
            cout<<"enter radius";
            cin>>r;
            cout<<"Area of circle is = "<<area(r);
            break;
        case 2:
            double l,w;
            cout<<"Enter length and width of rectangle";
            cin>>l>>w;
            cout<<"Area of rectangle is "<< area(l,w);
            break;
        case 3:
            float h,b;
            cout<<"Enter height and base of triangle ";
            cin>>h>>b;
            cout<<"Area of triangle is "<<area(h,b);
            break;
        default:
            cout<<"wrong input";
            
    }
    
}
