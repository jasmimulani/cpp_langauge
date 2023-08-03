#include<iostream>
using namespace std;
class base
{
   public:
   int a;
   void number()
   {
     cout<<"enter a number:"<<endl;
     cin>>a;
   }
};
class derived1: public base

{
   public:
   int product;
   void calc()
   {
      
    for(int i=1; i<=10; i++){
     product=a*i;
     cout<<a<<" * "<<i<<" = "<<product<<endl;
    }
   }
};
class derived2: public base
{
    protected:
     int x;
    public:
    void reverse()
    {
        int i;
        for(i=0; a!=0; i++)
        {
            x=a%10;
            a=a/10;
            cout<<x;
        }
    }
};
int main()
{
    derived1 d;
    d.number();
    d.calc();


     derived2 z;
     z.number();
     z. reverse();
}
