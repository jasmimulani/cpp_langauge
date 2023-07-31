#include<iostream>
using namespace std;
class result 
{
    int m,s,g,total;
    float per;
    public:
    void setdata()
    {
     cout<<"\tenter maths marks:";
     cin>>m;
     cout<<"\tenter sci marks:";
     cin>>s;
     cout<<"\tenter guj marks:";
     cin>>g;
    }
  void getdata()
  {
    total=m+s+g;
    cout<<"total marks:"<<total<<endl;
    per=total*100%300;
    cout<<"per:"<<per<<endl;
  }
};
  int main()
 {
    result a[3];
    int i;

    for(i=0; i<3; i++)
    {
        cout<<"student"<<i+1<<endl;
        a[i].setdata();
    }
    for(i=0; i<3; i++)
    {
        cout<<"student"<<i+1<<endl;
        a[i].getdata();
    }
 }