#include<iostream>
using namespace std;
class takedata{
    private:
     int adminno;
     char name[20];
     float eng,maths,sci,total;
    float ctotal()
    {
        
        return eng+maths+sci;
    } 
     public:
     takedata()
     { 
        cout<<"enter a adminno:";
        cin>>adminno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter eng marks:";
        cin>>eng;
        cout<<"enter maths marks:";
        cin>>maths;
        cout<<"enter sci marks:";
        cin>>sci;
        total=ctotal();
        
     }   
      int showdata()
      {
         cout<<"adminno\t"<<"name\t"<<"eng\t"<<"maths\t"<<"sci\t"<<"total"<<endl;
         cout<<adminno<<"\t"<<name<<"\t"<<eng<<"\t"<<maths<<"\t"<<sci<<"\t"<<total;
      }
};
  int main(){
     takedata test;
    test.showdata();
  }

 