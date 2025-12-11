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
    int r = 4;
    for(int i = 0; i<r; i++) {
        for(int j = 0; j< 4-(i+1); j++){
            cout<<" ";
        }
        for(int j = 0; j< i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    int t = 4; 
    for(int i = 0; i < t; i++){
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        for(int j = 1; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //pyramid
    int y = 4;
    for(int i = 0; i < y; i++){
        for(int j = 0; j < n-1-i; j++){
            cout<<" ";
        }
        for(int j = 0; j < 2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //inverted pyramid
    int u = 4;
    for (int i = 0; i<u; i++){
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        for(int j = 1; j < n - i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    //diamond pattern
    int o = 4;
    for(int i = 0; i < o; i++){
        for(int j = 0; j < o - 1 - i; j++){
            cout<<" ";
        }
        for(int j = 0; j < i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 0; i < o-1; i++){
        for (int j = 0; j < i+1; j++){
            cout<<" ";
        }
        for(int j = 0; j< o - i -1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    //again hallow diamond
    int p = 4;
    for(int i =0; i < p; i++){
        for(int j = 0; j < p-i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int j = 0; j< 2*i-1; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}