#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    if (n % 2 == 0)
    { for (int i = 0; i < n / 2 ; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << " ";
            }
            for (int j = 0; j <= n / 2 - i - 1; j++)
            {
                cout << "*";
            }
            for (int j = 0; j < n / 2 - i - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < n / 2 + 1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j <= n / 2 - i; j++)
            {
                cout << "*";
            }
            for (int j = 0; j < n / 2 - i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}