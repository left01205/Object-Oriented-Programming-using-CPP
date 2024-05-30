#include <iostream>

class Counter {
private:
    static int count; // static variable for counting

public:
    Counter() {
        count++; 
        std::cout << "Object created. Total objects: " << count << std::endl;
    }

    ~Counter() {
        count--; 
        std::cout << "Object destroyed. Total objects: " << count << std::endl;
    }

    static int getCount() {
        return count;
    }
};

int Counter::count = 0; 
int main() {
    Counter obj1;
    Counter obj2;
    Counter obj3;

    std::cout << "Total objects: " << Counter::getCount() << std::endl;

    return 0;
}
