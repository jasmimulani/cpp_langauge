#include<iostream>
using namespace std;
class largest
{
        int a,b;
       friend void add(largest);
        public:
         void setdata()
        {
            cout<<"enter a:";
            cin>>a;

            cout<<"enter b:";
            cin>>b;
        }
};        
     void add( largest x){
     if(x.a > x.b)
     {
        cout<<x.a<<"is largest";
     }
     else
     {
        cout<<x.b<<"is largest";
     }
}
    
 int main()
 {
    largest x;
    x.setdata();
    add(x);
    
 }     

         