#include<iostream>
using namespace std;
class bank{
    int bal;
    string name;
    string type;

public:
void setdata(int bal, string name, string type)
{
    this->bal=bal;
    this->name=name;
    this->type=type;
} 
void getdata()
{
    cout<<"account holder name is:"<<name<<endl;
    cout<<"account type is:"<<type<<endl;
    cout<<"account balance is:"<<bal<<endl;
}

};
int main()
{
    bank b;
    b.setdata(1000,"hello","saving");
    b.getdata();
}