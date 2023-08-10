#include<iostream>
using namespace std;
class restaurant
{
    public:
    int  moblie_number,kajucarry=250,paneer_bhurjee=350,paneer_butter_masala=200,
    paneer_kofta=150,cheese_butter_masala=100,qty,totalbill;
    string cname;
     void iteam()
   {
      cout<<"\t              "<<endl;
      cout<<"\t |HOTEL AMIRAS| ";
      cout<<"\t              \n"<<endl;

      cout<<"         -:main manu:-                     \t\t"<<endl;
      cout<<"______________________________________________________________________\n"<<endl;
      cout<<"no.|      iteam              |       "<<"prise"<<endl;                
      cout<<"   |                         |        "<<endl;                        
      cout<<"1. |   kajucarry             |        : "<<kajucarry<<endl;           
      cout<<"2. |   paneer_bhurjee        |        : "<<paneer_bhurjee<<endl;      
      cout<<"3. |   paneer_butter_masala  |        : "<<paneer_butter_masala<<endl;
      cout<<"4. |   paneer_kofta          |        : "<<paneer_kofta<<endl;        
      cout<<"5. |   cheese_butter_masala  |        : "<<cheese_butter_masala<<endl;
      cout<<"6. |   exit                  |          "<<endl;                      
      cout<<"_______________________________________________________________________\n"<<endl;
      }

        void customer()
   {
      cout<<"your name sir:";
      cin>>cname;

      cout<<"sir your moblie number:";
      cin>>moblie_number;
      } 
         void order()
   {
          int qty,ch,totalbill=0,gst;
          double cgst,sgst,discount,grand_total=0;
         
         do
   {
         cout<<"your order sir:";
         cin>>ch;

            switch(ch)
   {
               case 1:
         cout<<"enter qty:";
         cin>>qty;
         totalbill=kajucarry*qty;
         cout<<"kajucarry\t"<<kajucarry<<"\t"<<qty<<"\t"<<totalbill<<endl;

         grand_total+=totalbill;
            break;

               case 2:
         cout<<"enter qty:";
         cin>>qty;
         totalbill=paneer_bhurjee*qty;
         cout<<"paneer_bhurjee\t"<<paneer_bhurjee<<"\t"<<qty<<"\t"<<totalbill<<endl;

         grand_total+=totalbill;
            break;

               case 3:
         cout<<"enter qty:";
         cin>>qty;
         totalbill=paneer_butter_masala*qty;
         cout<<"paneer_butter_masala\t"<<paneer_butter_masala<<"\t"<<qty<<"\t"<<totalbill<<endl;

         grand_total+=totalbill;
            break;

               case 4:
         cout<<"enter qty:";
         cin>>qty;
         totalbill=paneer_kofta*qty;
         cout<<"paneer_kofta\t"<<paneer_kofta<<"\t"<<qty<<"\t"<<totalbill<<endl;

         grand_total+=totalbill;
            break;

               case 5:
         cout<<"enter qty:";
         cin>>qty;
         totalbill=cheese_butter_masala*qty;
         cout<<"cheese_butter_masala\t"<<cheese_butter_masala<<"\t"<<qty<<"\t"<<totalbill<<endl;
         grand_total+=totalbill;
            break;

               case 6:
            break;

         default:
          cout<<"sorry! this iteam is not avelabel"<<endl;
          break;  

      }
      }        while(ch!=6);

        cout<<"===========grandtotal==========="<<endl;
        cout<<"your bill: \t\t\t"<<grand_total<<endl;

        discount=grand_total*10/100;
        cout<<"discount is :\t\t\t"<<discount<<endl;

        cgst=grand_total*2.5/100;
        cout<<"cgst        :\t\t\t"<<cgst<<endl;

        sgst=grand_total*2.5/100;
        cout<<"sgst        :\t\t\t"<<sgst<<endl;

        grand_total-=discount;
        gst=cgst+sgst;
        grand_total+=gst;
        cout<<"----------------------------------- \n"<<endl;
        cout<<"        TOTAL BILL:\t\t"<<grand_total<<endl;

        cout<<"     thank you for coming      ";

   }

};
       int main()
   {
     restaurant r;
     r.iteam();
     r.customer();
     r.order();
   
   }