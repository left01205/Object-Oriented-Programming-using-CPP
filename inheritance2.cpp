#include <iostream>
using namespace std;

// Single Inheritance
class Base {
public:
    void func() {
        cout << "Base class function." << endl;
    }
};

class DerivedSingle : public Base { };

// Multiple Inheritance
class DerivedMultiple : public DerivedSingle, public Base { };

// Multilevel Inheritance
class DerivedMultiLevel1 : public Base { };

class DerivedMultiLevel2 : public DerivedMultiLevel1 { };

// Hierarchical Inheritance
class DerivedHierarchical1 : public Base { };

class DerivedHierarchical2 : public Base { };

int main() {
    DerivedSingle ds;
    ds.func();

    DerivedMultiple dm;
    dm.func();

    DerivedMultiLevel2 dml;
    dml.func();

    DerivedHierarchical1 dh1;
    dh1.func();

    DerivedHierarchical2 dh2;
    dh2.func();

    return 0;
}