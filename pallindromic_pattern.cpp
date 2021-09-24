#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the limit :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        for (int j = 2; j <= i ; j++)
        {
            if (i == 1)
            {
                break;
            }
            else
            {
                cout << j;
            }
        }
        cout << "\n";
    }
    // for (int i = n; i >= 1; i--)   
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout <<  j ;
    //     }
    //     cout << "\n";
    // }
    return 0;  
}
