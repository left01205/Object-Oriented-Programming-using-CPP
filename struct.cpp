#include <iostream>
#include <cstring>
using namespace std;

struct details
{
    int roll_no;
    float marks;
    char name[25];
};

int main() {
    struct details *p;
    p = new details;

    p->roll_no = 10;
    p->marks = 500.00;
    strcpy(p->name, "Harry Norton"); 
    delete p;

    return 0;
}
