#include<iostream>
using namespace std;
class Rect
{
    int l,b;
    friend Rect add(Rect,Rect,Rect);
    public:
    void setdata(int x, int y)
    {
        l=x, b=y;
    }
    void getdata()
    {
        cout<<"area is:"<<l*b<<endl;
    }
};
  Rect add( Rect x, Rect y, Rect z)
  {
    Rect t;
    t.l= x.l + y.l + z.l;
    t.b= x.b + y.b + z.b;
    return t;
  }
  int main()
  {
    Rect a,b,c,d;
    a.setdata(2,3);
    a.getdata();
    b.setdata(4,5);
    b.getdata();
    d.setdata(3,3);
    d.getdata();

    c=add(a,b,d);
    c.getdata();
  }