#include<iostream>
using namespace std;
class batsman
{
    private:
    char bname[20];
    int bcode,innings, notout,runs;
    float batavg;
    int calcavg()
    {
        return runs/(innings-notout);
    }
    public:
    float readdata()
    {
        cout<<"enter a bcode:";
        cin>>bcode;
        cout<<"enter a bname:";
        cin>>bname;
        cout<<"enter innings:";
        cin>>innings;
        cout<<"enter notout:";
        cin>>notout;
        cout<<"enter runs:";
        cin>>runs;

        batavg=calcavg();
    }
     int  displaydata()
     {
        cout<<"\n"<<"code\t"<<"name\t"<<"innings\t"<<"notout\t"<<"runs\t"<<"batavg"<<endl;
        cout<<"\n"<<bcode<<"\t"<<bname<<"\t"<<innings<<"\t"<<notout<<"\t"<<runs<<"\t"<<batavg<<"\t"<<endl;
     }
};
        
      int main()
      { 
        batsman run;
        run.readdata();
        run.displaydata();

      }
       
