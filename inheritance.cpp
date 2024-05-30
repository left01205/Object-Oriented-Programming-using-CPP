#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        cout << "The animal makes a sound." << endl;
    }
};

// Derived class from Animal
class Dog : 
public Animal {
public:
    // Override the makeSound function
    void makeSound() {
        cout << "The dog barks." << endl;
    }
};

// Derived class from Animal
class Cat : public Animal {
public:
    // Override the makeSound function 
    void makeSound() {
        cout << "The cat meows." << endl;
    }
};

// Multiple inheritance example
// Base class 1
class Printable {
public:
    // Virtual function 
    virtual void print() {
        cout << "Printing the object..." << endl;
    }
};

// Base class 2
class Drawable {
public:
    // Virtual function to draw the object
    virtual void draw() {
        cout << "Drawing the object..." << endl;
    }
};

// Derived class from Printable and Drawable
class Shape : public Printable, public Drawable {
public:
    // Override the print and draw functions
    void print() {
        cout << "Printing the shape..." << endl;
    }

    void draw() {
        cout << "Drawing the shape..." << endl;
    }
};

int main() {
    // Single inheritance 
    Dog dog;
    Cat cat;
    Animal* animal1 = &dog;
    Animal* animal2 = &cat;

    animal1->makeSound(); 
    animal2->makeSound(); 

    // Multiple inheritance 
    Shape shape;
    Printable* printable = &shape;
    Drawable* drawable = &shape;

    printable->print(); 
    drawable->draw(); 

    return 0;
}
