#include<iostream>
using namespace std;
class base{
    int a;
    protected:
    int l;
    public:
    void hello()
    {
        cout<<"hello worle...."<<endl;
    }
};
 class test: public base
 {
    public:
    void get()
    {
        base :: l=101;
        cout<<"test class called...."<<endl;
        cout<<"value of lis:"<<l<<endl;
    }
 };
    int main()
    {
        test t;
        t.hello();
        t.get();

    }
