#include<iostream>
using namespace std ;
int main ()
{
    char name[20];
    int roll_no,physics,maths,chemistry,english,total ,average;
    cout<<"enter name";
    gets(name)
    cout<<"enter roll no";
    cin>>roll_no;
    cout<<"enter physics Marks";
    cin>> physics;
    cout<<"enter maths marks";
    cin>> maths;
    cout<<"enter chemistry marks";
    cin>> chemistry;
    cout<<"enter english amrks";
    cin>>english;
    total = physics+maths+chemistry+english;
    average =total/4;
    cout<<"name";
    


}