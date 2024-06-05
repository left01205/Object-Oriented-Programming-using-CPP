#include <iostream>
#include <string>

class Person {
  private:
    std::string name;
    double height;
    double weight;

  public:
    Person(const std::string& n, double h, double w) : name(n), height(h), weight(w) {}

    double calculateBMI() {
        return weight / (height * height);
    }

    void printBMI() {
        std::cout << "The BMI of " << name << " is: " << calculateBMI() << std::endl;
    }
};

int main() {
    Person p1("Rohan", 1.8, 75.0);
    p1.printBMI();
    return 0;
}