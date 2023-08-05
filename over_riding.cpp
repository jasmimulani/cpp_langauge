#include<iostream>
using namespace std;
class base{
    public:
   virtual void test(){
        cout<<"base class called....."<<endl;
    }
};
class derived: public base{
    public:
    void test()
    {
        cout<<"derived class called..."<<endl;
    }
};
int main()
{
    base*ptr,b;
    derived d;
    ptr=&b;
    ptr->test();

    ptr=&d;
    ptr->test();
}