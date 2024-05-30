#include <iostream>
using namespace std;

class Complex {
  private:
    int real, imag;
  public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    Complex operator + (Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    
    int getReal(){
        return real;
    }
    
    int getImag(){
        return imag;
    }
};

int main() {
    Complex c1(4, 7);
    Complex c2(3, 5);
    Complex res;
    res = c1 + c2;

    cout << "Result: " << res.getReal() << " + " << res.getImag() << "i" << endl;

    return 0;
}
