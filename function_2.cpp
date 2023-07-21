#include<iostream>
using namespace std;
class hello{
    public:
  void test(int a)
    {
        cout<<"area of cube:"<<a*a*a<<endl;
    }
    void test(int b, int h)
    {
        cout<<"area of prism:"<<b*h<<endl;
    }
   void test(double r, double h)
    {
        cout<<"area os cylinden:"<<3.14*r*r*h<<endl;
    }
   void test(int l, int w, int h)
    {
        cout<<"area of rectangular:"<<l*w*h<<endl;
    }
    
};
 int main(){
   hello h;
   h.test(4);
   h.test(7,4);
   h.test(8.9,6.7);
   h.test(4,8,9);
 }