#include<iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int alice[n];
    int adam[n];
     int c1=0;
     int c2=0;
    string s = "1 2 3";
vector<int> result;
istringstream iss(s);
for(int n; iss >> n; ) 
    result.push_back(n);
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
          alice.push_back(card[i];
        }
        else{
            adam.push_back(card[i]);
        }
    }
    for(int i =0;i<alice[n];i++)
    {
        c1= i+c1;
    }
    for(int i =0;i<adam[n];i++)
    {
        c2=i+c2;
    }
    if(c1>c2){
        cout<<c1-c2;

    }
    else{
        cout<<c2=c1;
    }
    return 0;

}