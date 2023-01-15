#include<iostream>
using namespace std;
void star(int day,string month);
main()
{
    int day;
    string month;
    cout<<"Enter the day of birth: ";
    cin>>day;
    cout<<"Enter the month: ";
    cin>>month;
    star(day,month);

}
void star(int day, string month)
{
    if((day<=19 && month=="april") ||(day>=21  && month=="march") )
    {
        cout<<"your star is 'ARIES'";
    }
    else if((day>=20 && month=="april") ||(day<=20 && month=="may") )
    {
        cout<<"Your star is 'TAURUS'";
    }
    else if((day>=21 && month=="may") ||(day<=20 && month=="june") )
    {
        cout<<"Your star is 'GEMINI'";
    }
    else if((day>=21 && month=="june") ||(day<=22 && month=="july") )
    {
        cout<<"Your star is 'CANCER'";
    }   
    else if((day>=23 && month=="july") ||(day<=22 && month=="august") )
    {
        cout<<"Your star is 'LEO'";
    }
    else if((day>=23 && month=="august") ||(day<=22 && month=="september") )
    {
        cout<<"Your star is 'VIRGO'";
    }
    else if((day>=23 && month=="september") ||(day<=22 && month=="octuber") )
    {
        cout<<"Your star is 'LIBRA'";
    }
    else if((day>=23 && month=="octuber") ||(day<=21 && month=="november") )
    {
        cout<<"Your star is 'SCORPIO'";
    }
    else if((day>=22 && month=="november") ||(day<=21 && month=="december") )
    {
        cout<<"Your star is 'SAGGITTARIUS'";
    }
    else if((day>=22 && month=="december") ||(day<=19 && month=="january") )
    {
        cout<<"Your star is 'CAPRICORN'";
    }
    else if((day>=20 && month=="january") ||(day<=18 && month=="febuary") )
    {
        cout<<"Your star is 'AQUARIUS'";
    }
    else if((day>=19 && month=="febuary") ||(day<=20 && month=="march") )
    {
        cout<<"Your star is 'PISCES'";
    }
}