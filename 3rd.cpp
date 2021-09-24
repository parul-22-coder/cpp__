#include <iostream>
using namespace std;

void v_pic(string s, int n)
{
    switch (n)
    {
    case 1:
        if (stoi(s) < 10)
        {
            cout << s;
        }

        else
        {
            int sum = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (i % 2 != 0)
                {
                    if (s[i] >= '0' && s[i] <= '9')
                    {
                        // cout << s[i];
                        sum += (s[i] - '0');
                    }
                }
            }
            v_pic(to_string(sum), n);
            
        }
        break;
    case 2:
        if (stoi(s) < 10)
        {
            cout << s;
        }

        else
        {
            int sum = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (i % 2 == 0)
                {
                    if (s[i] >= '0' && s[i] <= '9')
                    {
                        // cout << s[i];
                        sum += (s[i] - '0');
                    }
                }
            }
            v_pic(to_string(sum), n);
            
        }
        break;
    }
    
}
// }

int main()
{
    string s;
    getline(cin, s);

    int n;
    cout << "For odd press: 1 and even press 2 : ";
    cin >> n;

    v_pic(s, n);
    return 0;
}