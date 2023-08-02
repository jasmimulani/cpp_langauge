#include<iostream>
using namespace std;
class fectorial{
 public:
  int j;
  void number()
  {
     cout<<"enter a number";
     cin>>j;
  }   
};
class fact: public fectorial
{
    public:
    int fact=1,i;
    void fectorial()
    {
         for(i=1; i<=j; i++)
         {
            fact*=i;
         }
         cout<<fact<<"\t";
    }
        
};        
 int main()
{
    fact f;
    f.number();
    f.fectorial();
}