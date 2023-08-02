#include<iostream>
using namespace std;
class base{
    public:
    int n,i;
    void number()
    {
        cout<<"enter a number:";
        cin>>n;
    }
};
class num: public base
{
    public:
    void get()
    {
        int sum;
        for(i=1; i<=n; i++)
        {
            sum= i*i;
            cout<<sum<<"\t";
        }
    }
};
 int main()
{
    num n;
    n.number();
    n.get();
}