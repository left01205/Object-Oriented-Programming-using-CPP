#include <iostream>
#include <string>
using namespace std;

class Student {
  private:
    string name;
    int age;
    string course;
  public:
    Student(string n, int a, string c) {
        name = n;
        age = a;
        course = c;
    }
    void displayBioData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s1("John Doe", 22, "Computer Science");
    Student s2("Jane Smith", 20, "Electrical Engineering");

    s1.displayBioData();
    cout << endl;
    s2.displayBioData();

    return 0;
}
