#include<iostream>
using namespace std;
class bank
{
    public:
    int acno;
    float deposit, withdrow, display;
    float balance=1000;
    string name;

    void account()
    {
        cout<<"press key now...\n\n";
        cout<<"plzz givme your account number:";
        cin>>acno;

        cout<<"enter account holder name:";
        cin>>name;
        cout<<"...........................";
    }
     void deposit_a()
     {
        cout<<"\t enter diposit amount:"; 
        cin>>deposit;
        {
            balance+=deposit;
            cout<<"\n\t show my balance:"<<balance<<endl;
        }  
        cout<<"\n...........................";
     } 

     void withdrow_a()
     {
        cout<<"\t enter  withdrow amount:";
        cin>>withdrow;

        if(balance>=withdrow)
        {
            balance-=withdrow;
            cout<<"\n\t your balance is:"<<balance<<endl;
        }
        else
        {
            cout<<"\n\t your balance is less:";
        }
          cout<<"......................";
     }

      void display_a()
      {
        cout<<"\n\t your accound balance:"<<balance<<endl;

        cout<<"\n.......................";
      }   
};
 int main()
 {
    bank b;
    b.account();
    int ch;
    cout<<"\n1. deposit amount..";
    cout<<"\n2. withdrow amount..";
    cout<<"\n3. display amount..";
    cout<<"\n4. exit.....";

    do
    {
        cout<<"\n\t enter your choice your number 1 to 4:";
        cin>>ch;

        switch(ch)
        {
            case 1:
            b.deposit_a();
            break;

            case 2:
            b.withdrow_a();
            break;

            case 3:
            b.display_a();
            break;

            case 4:
            break;

            default:
            cout<<"\n your number is wrong choice...";

            cout<<"\n.......................................";
            break;
        }
    }
      while(ch!=4);
 }