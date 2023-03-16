#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        
        int j = 1;
        
        while(j<=(n-i+1)){
            cout<< j;
            j++;

        }

        int star = i - 1;
        if(star!=0){
            for(int k=0;k<star;k++){

                cout<< '*'<<'*';
            
            }
        }

        
        int last = n - i + 1;

        while(last>=1){
            cout<< last;
            last--;

        }
        

       

        cout<<endl; 
        i++;
    }
    return 0;
}