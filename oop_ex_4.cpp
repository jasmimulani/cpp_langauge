#include<iostream>
using namespace std;
class flight
{
    private:
    int flight_number;
    char destination[20];
    float distance,fuel;

    void calfuel()
    {
        if(distance<=100)
        {
            fuel=500;
        }
        else if(distance>=1000&&distance<=2000)
        {
            fuel=1100;
        }
        else
        {
            fuel=2200;
        }
    }
    public:
    int feesinf()
    {
        cout<<"enter flight number:";
        cin>>flight_number;
        cout<<"enter destination:";
        cin>>destination;
        cout<<"enter distance:";
        cin>>distance;

        calfuel();
    }
    int showinf()
    {
        cout<<"\n"<<"flight_number:\t"<<"destination\t"<<"distance\t"<<"fuel\t"<<endl;
      cout<<"\n"<<flight_number<<"\t\t"<<destination<<"\t\t"<<distance<<"\t\t"<<fuel<<"\t\t"<<endl;
    }
};
 int main()
 {
    flight f;
    f.feesinf();
    f.showinf();
 }