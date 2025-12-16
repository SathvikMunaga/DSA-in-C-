#include <iostream>
using namespace std;
// written the some patterns using function
// tar cross
void cross(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i || j == n - i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }}
    // hour glass pattern
    /*     * * * *
     * *
     *
     * *
     * * * *
     */
    int hour_glass(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 2 * (n - i) - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = n - 1; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j <= 2 * (n - i); j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
        return n;
    }
    // 01 triangle
    int zero_one(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << (i + j) % 2;
            }
            cout << endl;
        }
        cout << endl;
        return n;
    }
    // butterfly pattern
    int butterfly(int n)
    {
        for (int i = 0; i < n; i++)
        {
            // left stars
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
            // spaces
            for (int j = 0; j < 2 * (n - 1 - i); j++)
            {
                cout << " ";
            }
            // right stars
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
            // the bottom part
        }
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            for (int j = 0; j < (n - i - 1) * 2; j++)
            {
                cout << " ";
            }
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
        return n;
    }

    // Floyd's Triangle
    int floyd(int n)
    {
        int num = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
        cout << endl;
    }

    // number pyramid
    int pyramid(int n)
    {
        for (int i = 1; i < n; i++)
        {
            // leading spaces
            for (int s = 1; s <= n - i; s++)
            {
                cout << " ";
            }

            // numbers with spaces
            for (int j = 1; j <= i; j++)
            {
                cout << i << " ";
            }

            cout << endl;
        }
        cout << endl;
    }
    int main()
    {
        int n = 5;
        for (int i = 0; i < n; i++)
        {

            cout << "*";
        }
        cout << endl;
        int m = 5;
        int num = 1;
        for (int i = 0; i < m; i++)
        {
            cout << num;
            num++;
        }
        cout << endl;
        int l = 5;
        char ch = 'A';
        for (int i = 0; i < l; i++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
        int q = 4;
        for (int i = 0; i < q; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
        ;
        int w = 4;
        for (int i = 0; i < w; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < w - i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        int e = 4;
        for (int i = 0; i < e; i++)
        {
            int num = 1;
            for (int j = 0; j <= i; j++)
            {
                cout << num;
                num++;
            }
            cout << endl;
        }
        int r = 4;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < 4 - (i + 1); j++)
            {
                cout << " ";
            }
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
        int t = 4;
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j < n - i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
        // pyramid
        int y = 4;
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
        // inverted pyramid
        int u = 4;
        for (int i = 0; i < u; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j < n - i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        cout << endl;
        // diamond pattern
        int o = 4;
        for (int i = 0; i < o; i++)
        {
            for (int j = 0; j < o - 1 - i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < i + 1; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        for (int i = 0; i < o - 1; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < o - i - 1; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        cout << endl;
        // again hallow diamond
        int p = 4; // size (half height). change this to scale the diamond
        if (p <= 0)
            return 0;

        // TOP including middle line
        for (int i = 0; i < p; i++)
        {
            // leading spaces
            for (int j = 0; j < p - 1 - i; j++)
                cout << " ";

            // left star
            cout << "*";

            // inside spaces and right star (only when i > 0)
            if (i > 0)
            {
                for (int j = 0; j < 2 * i - 1; j++)
                    cout << " ";
                cout << "*";
            }
            cout << "\n";
        }

        // BOTTOM (mirror of top, skip the middle line)
        for (int i = p - 2; i >= 0; i--)
        {
            // leading spaces
            for (int j = 0; j < p - 1 - i; j++)
                cout << " ";

            // left star
            cout << "*";

            // inside spaces and right star (only when i > 0)
            if (i > 0)
            {
                for (int j = 0; j < 2 * i - 1; j++)
                    cout << " ";
                cout << "*";
            }
            cout << "\n";
        }
        butterfly(4);
        floyd(4);
        pyramid(5);
        zero_one(5);
        hour_glass(4);
        cross(7);
        return 0;
    }