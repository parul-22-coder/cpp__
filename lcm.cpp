#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int l1 = 1;
    int l2 = 1;
    int l3 = 1;
    int i = 2, j = 2;
    while (n > 1 || m > 1)
    {
        if (n % i == 0 && m % i == 0)
        {
            l1 *= i;
            n = n / i;
            m = m / i;
        }
        else
        {
            if (n % i == 0)
            {
                l2 *= i;
                n /= i;
            }
            else if (m % i == 0)
            {
                l3 *= i;
                m /= i;////////////////////////
            }
            else
            {
                i++;
            }
        }
    }
    cout << "\nLCM is : " << l1 * l2 * l3;
    return 0;
}
