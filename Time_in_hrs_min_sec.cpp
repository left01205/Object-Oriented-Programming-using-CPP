#include <iostream>
using namespace std;
class hourglass
{
    public:
    int seconds, hours, minutes, remainingSeconds;
    void inp()
    {
        cout << "Enter the time in seconds: ";
        cin >> seconds;
    }
    void calc()
    {
        hours = seconds / 3600;
        seconds %= 3600;
        minutes = seconds / 60;
        remainingSeconds = seconds % 60;
    }
    void out()
    {
        cout << "Time is: " << hours << " hours, " << minutes << " minutes, and " << remainingSeconds << " seconds.";
    }
};

int main() 
{
    hourglass h;
    h.inp();
    h.calc();
    h.out();
}
