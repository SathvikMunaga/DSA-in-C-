#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != n - 2)
        {
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    // printing butterfly pattern using starts(*)
    int m = 4;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < (m - i - 1) * 2; j++)
        {
            cout << " ";
        }

        // right stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    //bottom half
    for (int i = m-1; i >= 0; i--)
    {
        for(int j = 0; j<=i ; j++){
            cout<<"*";
        }
        for(int j = 0 ; j < (m - i - 1)*2; j++){
            cout<<" ";
        }
        for(int j = 0 ; j<= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
