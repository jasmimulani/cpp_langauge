#include<iostream>
using namespace std;
class test{
    public:
    static int a;
    test()
    {
        cout<<"test class called..."<<endl;
        a++;
    }
  static int hello()
  {
    return a;
  }
};
  int test::a=11;
  int main(){
    cout<<"initial stage:"<<test::hello()<<endl;
    test a,t,s,d,f;
    cout<<"final stage:"<<test::hello()<<endl;
  }