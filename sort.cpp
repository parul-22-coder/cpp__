// #include <iostream.h>
#include <iostream>
using namespace std;

void shift(int arr[], int n)
{
    int st = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            int temp = arr[i];
            arr[i] = arr[st];
            arr[st] = temp;
            st++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Elements in array are " << arr[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter last limit  " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {   
        cout << "Enter elements : " << endl;
        cin >> arr[i];
    }

    shift(arr, n);
    return 0;
}