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
    cout<< ans<<endl;

    //binary to decimal numnbers
    int binum = 1111;
    int pow2 = 1;
    int rem2;
    int ans2 = 0;
    while(binum > 0){
        rem2 = binum % 2;
        binum = binum / 10;
        ans2 = ans2 + (rem2 * pow2);
        pow2 *= 2;
    }
    cout<< ans2<<endl;
    return 0;
}