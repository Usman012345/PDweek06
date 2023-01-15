#include<iostream>
using namespace std;
float percentage2(float total);
string calculation();
float e,m,c,s,b;
float total;
void print(string student,float percentage1,string grade);
main()
{
    string student;
    cout<<"Enter the student name: ";
    cin>>student;
    cout<<"Enter the english marks of student: ";
    cin>>e;
    cout<<"Enter the math marks of student: ";
    cin>>m;
    cout<<"Enter the chemistry marks of student: ";
    cin>>c;
    cout<<"Enter the social studies marks of student: ";
    cin>>s;
    cout<<"Enter the biology marks of student: ";
    cin>>b;
    total=e+c+m+b+s;
    float percentage1=percentage2(total);
    string grade=calculation();
    cout<<percentage1<<"percentage ";
    print(student,percentage1,grade);
}
float percentage2(float total)
{
    float percentage0;
        percentage0=(total/500.00)*100.00;
        return percentage0;
}
string calculation()
{
    float percentage=percentage2(total);
    string grade; 
    if(percentage>=90 && percentage<=100)
    grade="A+";
    else if(percentage>=80 && percentage<90)
    grade="A";
    else if(percentage>=70 && percentage<80)
    grade="B+";
    else if(percentage>=60 && percentage<70)
    grade="B";
    else if(percentage>=50 && percentage<60)
    grade="C";
    else if(percentage>40 && percentage<50)
    grade="D";
    else if(percentage<40)
    grade="F";
    return grade;
}
void print(string student,float percentage1,string grade)
{
    cout<<"The student: "<<student<<endl<<" total marks: "<<total<<endl<<"percentage: "<<percentage1<<endl<<"grade: "<<grade<<endl;
}