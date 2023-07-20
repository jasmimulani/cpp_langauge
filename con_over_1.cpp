#include<iostream>
using namespace std;
class shape{
    public:
    shape(double j)
    {
      cout<<"area of circle:"<<3.14*j*j<<endl;
    }
    shape(int b, int l)
    {
        cout<<"area of rectangle:"<<l*b<<endl;
    }
    shape(int k)
    {
        cout<<"area of square:"<<k*k<<endl;
    }
    shape(double h, double b)
    {
        cout<<"area of triangle:"<<h*b/2<<endl;
    }
    

};
int main(){
    shape circle(4.1), rectangle(8,9),square(2),triangle(8.1,7.1);

}