#include <iostream>
using namespace std;

long long int wholeSqtr(int n){
    int s=0,e=n;
    long long int mid = s + (e-s)/2;
    long long int ans =-1;
    while(s<=e){
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        else if(square < n){
            ans= mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double addPrecision(int n,int precision,int wholeAns){
    double factor =1;
    double ans = wholeAns;

    for (int i = 0; i<precision; i++){
        factor= factor/10;
        for(double j=ans; j*j < n; j+=factor){
            ans = j;
        }
    }
    return ans;
}


int main()
{

    int num,precision;
    cout<<"Enter number and precision"<<endl;
    cin>>num>>precision;
    if(num>=0){
        int wholeAns = wholeSqtr(num);
        cout<<"Square root is "<< addPrecision(num , precision, wholeAns)<<endl;

    }
        
    else{

        cout<<"imaginary"<<endl;
    }    

    


}