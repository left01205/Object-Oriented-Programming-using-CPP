// Adding two numbers
#include<iostream>
using namespace std;
class Simple_intr {
    private :
    float p,r,t,si;
    public:
    void inp(){
        cout <<"Enter principle amount , rate of intrest,time(in years) = ";
        cin >> p >> r>> t;
    }
    void calc(){
        si=(p*r*t)/100;
        
    }
    void out(){
        cout <<"Simple Intrest will be  " << si;
    }   
};
int main(){
    Simple_intr d;
    d.inp();
    d.calc();
    d.out();
    return 0;
}
