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
};
 int test::a=51;
 int main()
 {
    cout<<"initsl stage:"<<test::a<<endl;
    test t,a,s,d,f;
    cout<<"final stage:"<<test::a<<endl;
 }