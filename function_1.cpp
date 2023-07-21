#include<iostream>
using namespace std;
class hello{
    public:
    void test(double j)
    {
        cout<<"area of circle:"<<3.14*j*j<<endl;
    }
    void test(int b, int l)
    {
         cout<<"area of rectangle:"<<l*b<<endl;
    }
    void test (int k)
    {
        cout<<"area of square:"<<k*k<<endl;
    }
     void test(double h, double b)
     {
        cout<<"area of triagle:"<<h*b/2<<endl;
     }

};
 int main()
 {
    hello h;
    h.test(4.1);
    h.test(9,7);
    h.test(8);
    h.test(9.1,8.1);
 }

