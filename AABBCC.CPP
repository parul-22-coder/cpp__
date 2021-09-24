#include <iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.length()-1;i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
             //c++
            }
            else{
                break;
            }
            cout<<str[i];
        }
       
       
    }
     cout<<endl;
    return 0;

}