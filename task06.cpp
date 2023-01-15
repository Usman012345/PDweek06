#include<iostream>
using namespace std;
float price(int,string,string);
main()
{
    float days,bill;
    string month,type;
    cout<<"Enter the month";
    cin>>month;
    cout<<"Enter the number of days: ";
    cin>>days;
    bill=price(days,month,type);
    cout<<"Your bill is: "<<bill;



}
float price(int days,string month,string type)
{
    float price1;
    if(month=="may" || month=="octuber")
    {
        if(type=="studio" && days>7)
        {
            price1=50*days-((50*days)*5/100);
        }
        else if(type=="studio" && days>14)
        {
            price1=50*days-((50*days)*30/100);
        }
        else if(days>14)
        {
            price1=65*days-((65*days)*10/100);
        }
        else
        price1=65*days;
    }
    if(month=="june" || month=="september")
    {
         if(type=="studio" && days>14)
        {
            price1=75.2*days-((75.2*days)*20/100);
        }
        else if(days>14)
        {
            price1=68.7*days-((68.7*days)*10/100);
        }
        else
        price1=68.7*days;

    }
    if(month=="july" || month==" august")
    {
        if(type=="studio")
        {
            price1=76*days;
        }
        else if(days>14)
        {
            price1=77*days-((77*days)*10/100);
        }
        else
        price1=77*days;
    }
    return price1;
}