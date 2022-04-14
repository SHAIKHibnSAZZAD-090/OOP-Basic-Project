#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class atm
{
private:
    int acc_no;
    string user_name;
    int pin;
    double balance;
    string contuct_no;
public:
void setdata(int account,string name,int Pin,double Balanc,string contract)
{
    acc_no=account;
    user_name=name;
    pin=Pin;
    balance=Balanc;
    contuct_no=contract;

}
int getAccountinfo()
{
    return acc_no;
}
string getUsername()
{
return user_name;
}
int getpin()
{
    return pin;
}
double getBalance()
{
    return balance;
}
string getMobilenum()
{
    return contuct_no;
}
void cashwithdraw(int useramount)
{
    if(useramount>0 &&useramount<balance)
    {
        balance=balance-useramount;
        cout<<endl<<"please collect withdral amount!"<<endl;
        cout<<"Available balance now: "<<balance<<endl;
        _getch();
    }
    else
    {
        cout<<endl<<"Invalid amount or insufficient balance"<<endl;
        _getch();

    }
}
void setmobile(string oldno,string newno)
{
    if(oldno==contuct_no)
    {
        contuct_no=newno;
        cout<<"successfully updated your number!";
        _getch();
    }
    else
    {
        cout<<"Provided number is incorrect"<<endl;
        _getch();
    }
}
};

int main()
{
    int choice=0,enterpin;
    int accountnu;
    system("cls");
    atm user1;
    user1.setdata(123450,"Omi",1212,32000.60,"0171370");
    do{
        system("cls");
        cout<<endl<<"   Welcome to ATM   "<<endl;
        cout<<endl<<"Please Provide account number: ";
        cin>>accountnu;
        cout<<endl<<"Enter your Pin: ";
        cin>>enterpin;
   if(accountnu==user1.getAccountinfo()&&enterpin==user1.getpin())
   {
       do{
           int amount=0;
           string oldnum,newnum;
           system("cls");
           cout<<endl<<"Welcome to ATM"<<endl;
           cout<<endl<<"please select a option: ";
           cout<<endl<<"1.Check balance";
           cout<<endl<<"2.Cash Withdraw";
           cout<<endl<<"3.Show user details ";
           cout<<endl<<"4.Update Contact  number ";
           cout<<endl<<"5.Exit"<<endl;
           cin>>choice;
           switch (choice)
           {
           case 1:
           cout<<endl<<"Your account balance : "<<user1.getBalance();
           _getch();
           break;
           case 2:
           cout<<endl<<"Please enter amount :";
           cin>>amount;
           user1.cashwithdraw(amount);
           break;
           case 3:
           cout<<endl<<" user details are provided below :"<<endl;
           cout<<">User name :"<<user1.getUsername()<<endl;
           cout<<"> User account number :"<<user1.getAccountinfo()<<endl;
           cout<<"> Balance : "<<user1.getBalance()<<endl;
           cout<<">Mobile number :"<<user1.getMobilenum()<<endl;
           _getch();
           break;
           case 4:
           cout<<"Enter old mobile number :";
           cin>>oldnum;
           cout<<"Provide new mobile number :";
           cin>>newnum;
           user1.setmobile(oldnum,newnum);
           break;
           case 5:
           exit(0);
        
           default:
               cout<<endl<<"Please provide valid information !";
           }
           }

    while (1);
   
   } 
}while (1);

}

