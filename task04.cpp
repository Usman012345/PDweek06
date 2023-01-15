#include<iostream>
using namespace std;
float calculation2(int,char,char);
float calculation(int,char);
main()
{
    char type,time;
    float minutes,regular,primium;
    cout<<"enter the type of service: ";
    cin>>type;
    cout<<"Enter the minutes: ";
    cin>>minutes;
    if(type=='p'||type=='P'||type=='r'||type=='R')
    {
    if(type=='p'||type=='P')
    {
    cout<<"Enter the time (Day'D' or night 'N') ";
    cin>>time;
    }
    if(type=='r'||type=='R')
    {
    regular=calculation(minutes,type);
    cout<<" For " << minutes<<" minutes the customer is due "<<regular<<" dollars";
    }
    else
    {
    primium=calculation2(minutes,type,time);
    cout<<"For "<<minutes<<" the customer is due "<<primium<<" dollars";
    }
    }
    else
    {
        cout<<"Error";
        return 0;
    }
}
float calculation(int minutes,char type)
{
    float amount;
    if((type=='R' || type=='r') && minutes>50)
    {
        minutes=minutes-50;
        amount=10+ (minutes*0.2);
    }
    else
    amount=10;    
    return amount;
}
float calculation2(int minutes,char type,char time)
{
    float amount;
    if((type=='p' || type=='P') && minutes>75 && (time=='d'||time=='D'))
    {
        minutes=minutes-75;
        amount= 25+(minutes*0.1);
    }
    if((type=='p' || type=='P') && minutes>100 && (time=='n'||time=='N'))
    {
        minutes=minutes-100;
        amount= 25+(minutes*0.05);
    }
    else
    amount=25;
    return amount;
}
