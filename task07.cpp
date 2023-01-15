#include<iostream>
#include<cmath>
using namespace std;
void early(int,int);
void late(int,int);
int main()
{   
    int hours_exam,minutes_exam,hours,minutes,for_early,for_late,test,arrival;
    cout<<"Enter the starting time of exam(hours): ";
    cin>>hours_exam;
    hours_exam=hours_exam*60;
    cout<<"Enter the stating time of exam(minutes) in two characters: ";
    cin>>minutes_exam;
    cout<<"Enter the arrival time(hours): ";
    cin>>hours;
    hours=hours*60;
    cout<<"Enter the time of arrival(minutes)in two characters: ";
    cin>>minutes;
    test=hours_exam+minutes_exam;
    arrival=hours+minutes;
    if(test>=arrival)
    early(arrival,test);
    else if(test<arrival)
    late(arrival,test);   
}
void early(int arrival,int test)
{
    int remaining,remaining_hours,remaining_minutes;
    remaining=test-arrival;
    if((arrival<test) && remaining>30)
    {
        remaining_hours=remaining/60;
        remaining_minutes=(remaining)%60;
        cout<<"You have arrived early by "<<remaining_hours <<" hours and "<<remaining_minutes <<" minutes"; 
    }
    else
    {
    remaining_minutes=(remaining)%60;
    cout<<"You have arrived on time by "<<remaining_minutes <<" minutes";
    }
}
void late(int arrival,int test)
{
    int remaining,remaining_hours,remaining_minutes;
    remaining=arrival-test;
    remaining_hours=remaining/60;
    remaining_minutes=(remaining)%(60);
    cout<<"You have arrived late by "<<remaining_hours <<" hours and "<<remaining_minutes <<" minutes"<<endl;

}
