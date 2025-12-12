#include<iostream>
using namespace std;
int main(){
    //converting decimal umbers into binary numbers using code
    int decnum = 18;
    int pow = 1;
    int ans = 0;
    int rem;
    while(decnum>0){
        rem = decnum % 2;
        decnum = decnum / 2;
        ans = ans + (rem*pow);
        pow = pow*10;
    }
    cout<<ans;
    return 0;
}