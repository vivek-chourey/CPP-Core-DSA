#include<iostream>
#include<math.h>

using namespace std;

int main(){
int n;
cin >> n;
int ans = 0;
int i = 0;
    while (n != 0) {
        int bit = n & 1;
        ans = (bit * pow(10, i) ) + ans; // formula to display bits in reverse order(req to display correct binary number )
        // ans = (ans * 10) + bit;   formula to display bits in normal order
        n = n >> 1;
        i++;
    }   
    cout<<" Answer is " << ans << endl;


}