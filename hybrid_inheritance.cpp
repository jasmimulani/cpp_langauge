#include<iostream>
using namespace std;
class base
{
    protected:
    int M;
    public:
    void setM(int a)
    {
        M=a;
    }
};
  class test
{
    protected:
    int N;
    public:
    void setN(int z)
    {
        N=z;
    }
};
  class derived: public base
  {
    protected:
    int p;
    public:
    void setP(int z)
    {
        p=z;
    }
  };
  class abc: public test, public derived
  {
    public:
    void add()
    {
        cout<<"addition of m,n and p is"<<M+N+p<<endl;
    }
  };
  int main()
  {
    abc a;
    a.setP(10);
    a.setM(20);
    a.setN(50);
    a.add();
  }