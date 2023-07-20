#include<iostream>
using namespace std;
class solid{
    public:
    solid(int a)
    {
        cout<<"area of cube:"<<a*a*a<<endl;
    }
    solid(int b, int h)
    {
        cout<<"area of prism:"<<b*h<<endl;
    }
    solid(double r, double h)
    {
        cout<<"area os cylinden:"<<3.14*r*r*h<<endl;
    }
    solid(int l, int w, int h)
    {
        cout<<"area of rectangular:"<<l*w*h<<endl;
    }
    
};
 int main(){
  solid cube(4), prism(7,4), cylinden(8.9,6.7),rectangle(4,8,9);
 }
