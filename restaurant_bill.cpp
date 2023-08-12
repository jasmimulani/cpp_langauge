#include<iostream>
using namespace std;
class restaurant
{
    public:
    int  moblie_number,kajucarry=250,paneer_bhurjee=350,paneer_butter_masala=200,
    paneer_kofta=150,cheese_butter_masala=100,qty;
    double total_bill=0;
    string cname;
    string a[10];
    int discount,gst,cgst,sgst;
    int totalbill[10];
   int b[10],c[10];
   
         
    
     void iteam()
   {
      cout<<"\t              "<<endl;
      cout<<"\t  HOTEL AMIRAS ";
      cout<<"\t              \n"<<endl;

      cout<<"         -:main manu:-                     \t\t"<<endl;
      cout<<"______________________________________________________________________\n"<<endl;
      cout<<"|no.|      iteam              |        "<<"prise"<<endl;                
      cout<<"|   |                         |                 "<<endl;                        
      cout<<"|1. |   kajucarry             |        : "<<kajucarry<<endl;           
      cout<<"|2. |   paneer_bhurjee        |        : "<<paneer_bhurjee<<endl;      
      cout<<"|3. |   paneer_butter_masala  |        : "<<paneer_butter_masala<<endl;
      cout<<"|4. |   paneer_kofta          |        : "<<paneer_kofta<<endl;        
      cout<<"|5. |   cheese_butter_masala  |        : "<<cheese_butter_masala<<endl;
      cout<<"|6. |   exit                  |          "<<endl;                      
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
          int ch;
         do
   {
         cout<<"your order sir:";
         cin>>ch;

            switch(ch)
   {
               case 1:
         cout<<"enter qty:";
         cin>>qty;
         totalbill[0]=kajucarry*qty;
         cout<<"kajucarry\t"<<kajucarry<<"\t"<<qty<<"\t"<<totalbill[0]<<endl;

           total_bill+=totalbill[0];
           a[0]="kajucarry";
           b[0]=qty;
           c[0]=kajucarry;
            break;

               case 2:
         cout<<"enter qty:";
         cin>>qty;
         totalbill[1]=paneer_bhurjee*qty;
         cout<<"paneer_bhurjee\t"<<paneer_bhurjee<<"\t"<<qty<<"\t"<<totalbill[1]<<endl;

         total_bill+=totalbill[1];
         a[1]="paneer_bhurjee";
         b[1]=qty;
         c[1]=paneer_bhurjee;
            break;

               case 3:
         cout<<"enter qty:";
         cin>>qty;
         totalbill[2]=paneer_butter_masala*qty;
         cout<<"paneer_butter_masala"<<paneer_butter_masala<<qty<<totalbill[2]<<endl;

          total_bill+=totalbill[2];
          a[2]="paneer_butter_masala";
          b[2]=qty;
          c[2]=paneer_butter_masala;
            break;

               case 4:
         cout<<"enter qty:";
         cin>>qty;
         totalbill[3]=paneer_kofta*qty;
         cout<<"paneer_kofta\t"<<paneer_kofta<<"\t"<<qty<<"\t\t"<<totalbill[3]<<endl;

          total_bill+=totalbill[3];
          a[3]="paneer_kofta";
          b[3]=qty;
          c[3]=paneer_kofta;
            break;

               case 5:
         cout<<"enter qty:";
         cin>>qty;
         totalbill[4]=cheese_butter_masala*qty;
         cout<<"cheese_butter_masala"<<cheese_butter_masala<<qty<<totalbill[4]<<endl;

          total_bill+=totalbill[4];
          a[4]="cheese_butter_masala";
          b[4]=qty;
          c[4]=cheese_butter_masala;
          break;

               case 6:
            break;
   
         default:
          cout<<"sorry! this iteam is not avelabel"<<endl;
          break;  

      }
      }        while(ch!=6);
   }

        void bill()
        {

        cout<<"===========grandtotal==========="<<endl;
        cout<<"iteam\t\t\t\tprise\tqty\ttotal"<<endl;
              
           for(int i=0; i<6; i++)
           {
            if(!a[i].empty())

            cout<<a[i]<<":\t\t\t"<<c[i]<<"\t"<<b[i]<<"\t"<<totalbill[i]<<endl;
           }

        }   
            
          void net_bill()
          {
          
        discount=total_bill*10/100;
        cout<<"discount is(10%)  :\t\t\t\t"<<discount<<endl;

        cgst=total_bill*2.5/100;
        cout<<"cgst(2.5%)        :\t\t\t\t"<<cgst<<endl;

        sgst=total_bill*2.5/100;
        cout<<"sgst(2.5%)        :\t\t\t\t"<<sgst<<endl;

        total_bill-=discount;
        gst=cgst+sgst;
        total_bill+=gst;
        cout<<"----------------------------------- \n"<<endl;
        cout<<"                 TOTAL BILL:\t\t"<<total_bill<<endl;
        cout<<"                                   "<<endl;

        cout<<"        THANKYOU FOR COMING      ";

   }

};
       int main()
   {
     restaurant r;
     r.iteam();
     r.customer();
     r.order();
     r.bill();
     r.net_bill();
   
   }