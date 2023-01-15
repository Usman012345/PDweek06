#include<iostream>
#include<cmath>
using namespace std;
string calculation(int,int,int);
int main()
{   
    int h,x,y;
    while(true)
    {
    cout<<"Enter h: ";
    cin>>h;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    calculation(h,x,y);
    }
}
string calculation(int h,int x,int y)
{
    int base=3*h;
    int height=4*h;
    if((x<(base-h) && x>h)  && y<(height))
    {
        cout<<"The point lies inside the figure";
    }
    else if(x<(base) && y<(h))
        cout<<"The point lies inside the figure";
    else if((x<=(base-h) && x>h) && y==height)
    cout<<"The point lies on the border of the figure";
    else if(x==h && y<=height)
    cout<<"The point lies on the border of the figure";
    else if((x==base-h || x==base-(2*h)) && y<=height)
    cout<<"The point lies on the border of the figure";
    else if(y==0)
    cout<<"The point lies on the border of the figure";
    else if(x==0 && y<=h)
    cout<<"The point lies on the border of the figure";
    else if(x==0 && y>h)
    cout<<"The point lies outside the figure";
    else 
    cout<<"The point lies outside the figure";
}