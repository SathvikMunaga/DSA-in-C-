#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {

        cout << "*";
    }
    cout<<endl;
    int m = 5;
    int num = 1;
    for(int i = 0; i < m; i++ ){
        cout<<num;
        num++;
    }
    cout<<endl;
    int l = 5;
    char ch = 'A';
    for(int i = 0; i < l; i++){
        cout<<ch;
        ch++;
    }
    cout<<endl;
    int q = 4;
    for(int i = 0; i < q; i++){
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;;
    int w = 4;
    for(int i = 0; i < w; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int j = 0; j <w - i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    int e = 4;
    for (int i = 0; i < e; i++){
        int num = 1;
        for(int j = 0; j <= i; j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}