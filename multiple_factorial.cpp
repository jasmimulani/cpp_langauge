#include<iostream>
using namespace std;
class base1{
 public:
  int a;
  void setA()
  {
     cout<<"enter a number";
     cin>>a;
  }   
};
class base2
{
 public:
  int b;
  void setB()
  {
    cout<<"enter b number";
    cin>>b;
  }
        
};    
class derived: public base1, public base2
{
    public:
    int fact=1,i;
    void  product()
    {
        for(int i=b; i>=a; i--)
        { fact*=i;

        }
        cout<<fact<<"\t";

    }
    };   
 int main()
{
    derived d;
    d.setA();
    d.setB();
    d.product();
}   
