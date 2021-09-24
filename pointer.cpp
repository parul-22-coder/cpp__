#include<iostream>
using namespace std;
int main()
{

  
    int arr[]={10,20,30};
    cout<<*arr<<endl;  //behave almost in a similiar way as pointer
    int *ptr=arr;

    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;//indexing pointer it goes in next index not in next momory location
        
        // arr++; //illegal
    }
    return 0;
}  