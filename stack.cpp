#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

class stack{
    int stk[5];
    int top;

    public:

    stack(){
        top=-1;
    }
    void push(char x){
        if(top>=4){
            cout<<"stack overflow";
        }

        top++;
        stk[top]=x;
        cout<<"inserted"<<x;   
    }
     void pop(){
        if(top<0){
            cout<<"stack is underflow";
            return;
        }
        cout<<"delete"<<stk[top--];
     }
     void peep(){
        int i;
        cout<<"enter position:";
        cin>>i;
        if(top<0){
            cout<<"stack is empty";
            return;
        }
        cout<<stk[top-i+1] =item;
        cout<<"element inserted";
     }
     void display(){
        if(top<0){
            cout<<"stack empty";
           
        }
        for(int i=top; i>=0; i--){
            cout<<stk[i]<<" ";
        }
     }
    
};
void main(){
    // clrscr();
    int ch;
    char chh;
    stack st;
    while(1){
        cout<<"\n1.push \n 2.pop \n 3.peep \n 4.update \n 6.exit \n enter your choice:";
          cin>>ch;
          cout<<'...............................\n';

          switch(ch){
            case 1:
             cout<<'enter elemnet:';
             cin>>chh;
             st.push(chh);
             breack;
             case 2:
             st.pop();
             breack;
             case 3:
             st.peep();
             breack;
             case 4:
             st.update();
             breack;

             case 5:
             st.display();
             breack;

             case 6:
             exit(0);
          }
    }
    // getch();
}