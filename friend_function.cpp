#include <iostream>
using namespace std;

// Forward declaration of ClassB
class ClassB;

// Class A
class ClassA {
private:
    int numA;

public:
    ClassA() : numA(12) {}

    // Declare friend function
    friend int add(ClassA, ClassB);
};

// Class B
class ClassB {
private:
    int numB;

public:
    ClassB() : numB(1) {}

    // Declare friend function
    friend int add(ClassA, ClassB);
};

// Definition of friend function
int add(ClassA objA, ClassB objB) {
    return (objA.numA + objB.numB);
}

int main() {
    ClassA objA;
    ClassB objB;

    cout << "Sum: " << add(objA, objB);

    return 0;
}
