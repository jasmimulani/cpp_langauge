#include<iostream>
using namespace std;
class base{
    public:
   virtual void test()=0;
      
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
    base*ptr;
    derived d;
    
    ptr=&d;
    ptr->test();
}