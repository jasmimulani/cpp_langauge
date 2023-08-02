#include<iostream>
using namespace std;
class base1{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"enter A:";
        cin>>a;
    }
};
class base2{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"enter B:";
        cin>>b;
    }
};
class derived: public base1,protected base2
{
    public:
    void product()
    {
        base2::setB();
        cout<<"product of A and B is:"<<a*b<<endl;
    }        
};
int main()
{
    derived d;
    d.setA();
    d.product();
}
