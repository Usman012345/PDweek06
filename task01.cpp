#include<iostream>
using namespace std;
string activity(string temperature,string humidity);
main()
{
    string temperature,humidity;
    cout<<"Enter the temperature: ";
    cin>>temperature;
    cout<<"Enter the humidity level: ";
    cin>>humidity;
    activity(temperature,humidity);

}
string activity(string temperature,string humidity)
{
    if(temperature=="warm" && humidity=="dry")
    cout<<"play tennis";
    else if(temperature=="warm" && humidity=="humid")
    cout<<"swim";
    else if(temperature=="cold" && humidity=="dry")
    cout<<"play basketball";
    else
    cout<<"watch tv";

}