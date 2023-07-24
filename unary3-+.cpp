#include<iostream>
using namespace std;
class number{
 int real,img;
 public:
 void setdata (int a, int b)
 {
    real=a,img=b;
 }
 void getdata()
 {
    cout<<"number is:"<<real<<"+"<<img<<"i"<<endl;
 }
 number operator--(int)
 {
    number t;
    t.real=real--;
    t.img=img--;
    return t;
 }
  number operator++(int)
  {
    number j;
    j.real=real++;
    j.img=img++;
    return j;
  }
  number operator++()
  {
    number p;
    p.real=++real;
    p.img=++img;
    return p;
  }
   
   number operator--()
  {
    number k;
    k.real=--real;
    k.img=--img;
    return k;
  }
  
};
 int main()
 {
    number n,m; 
    n.setdata(2,5);
    n.getdata();
    n--;
    m=n;
    m.getdata();

    n++;
    m=n;
    m.getdata();

    m=++n;
    m.getdata();

    m=--n;
    m.getdata();
 }
  