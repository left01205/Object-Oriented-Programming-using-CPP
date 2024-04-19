
#include <iostream>
using namespace std;
class swap_no
{
    private:
    int a,b;
    public:
    void inp()
    {
        cout<<"Enter number 'a' and 'b'= ";
        cin>>a>>b;
        cout<<"Numbers before swapping are "<<"a="<<a<<"b="<<b;
    }
    void swap()
    {
        int temp=a;
        a=b;
        b=temp;
    }
    void out()
    {
        cout<<"Numbers after swapping are "<<"a="<<a<<"b="<<b;
    }
};
int main()
{
    swap_no sn;
    sn.inp();
    sn.swap();
    sn.out();
    return 0;
}
