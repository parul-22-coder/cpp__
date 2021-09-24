#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout << "Enter the limit :";
    cin >> n;

    for (int i = 1; i <= n; i++)     
    // {
    //     for (int j= 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout <<"*"<<" ";
    //     }
        
        for (int j = 2; j <= i ; j++)
        {
            if (i == 1)
            {
                break;
            }
            else
            {
                cout <<"*"<<" ";
            }
        }
    //     cout << "\n";
    // // }
    //  for (int i = n; i >=1; i--)     
    // {
    //     for (int j= 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout <<"*"<<" ";
    //     }
        
        // for (int j = 2; j <= i ; j++)
        // {
        //     if (i == 1)
        //     {
        //         break;
        //     }
        //     else
        //     {
        //         cout <<"*"<<" ";
        //     }
        // }
        cout << "\n";
    } 
    return 0;
}