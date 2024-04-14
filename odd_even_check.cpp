#include <iostream>
using namespace std;
class odd_even
{
    private:
    int n,c;
    public:
    void inp()
    {
        cout<<"Enter number = ";
        cin>>n;
    }
    void check()
    {
        if (n%2==0)
        c=1;
        else
        c=0;
    }
    void out()
    {
        if (c==1)
        cout<<n<<" is even number";
        else
        cout<<n<<" is odd number";
    }
};
int main()
{
    odd_even oe;
    oe.inp();
    oe.check();
    oe.out();
    return 0;
}
