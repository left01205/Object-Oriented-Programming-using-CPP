#include <iostream>
using namespace std;

class Num {
private:
    int val;

public:
    Num(int num) : val(num) {}

    friend int add(Num n1, Num n2);
};

int add(Num n1, Num n2) {
    return n1.val + n2.val;
}

int main() {
    Num num1(5);
    Num num2(10);

    int sum = add(num1, num2);

    cout << "Sum: " << sum << endl;

    return 0;
}
