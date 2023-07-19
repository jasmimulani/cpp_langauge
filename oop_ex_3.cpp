#include<iostream>
using namespace std;
class TEST
{
    private:
    int testcode,nocandidate,centerreqd;
    char description[100];
    int CALCNTR()
    {
        return (nocandidate/100+1);
    }
    public:
    int SCHEDULE()
    {
        cout<<"enter test code:";
        cin>>testcode;
        cout<<"enter description:";
        cin>>description;
        cout<<"enter nocandidate:";
        cin>>nocandidate;

        centerreqd=CALCNTR();
    }
     int DISPTEST()
     {
        cout<<"testcode\t"<<"description\t"<<"nocandidate\t"<<"centerreqd\t"<<endl;
        cout<<testcode<<"\t\t"<<description<<"\t\t"<<nocandidate<<"\t\t"<<centerreqd<<endl;
     }

};
     int main()
     {
        TEST t;
        t.SCHEDULE();
        t.DISPTEST();
     }