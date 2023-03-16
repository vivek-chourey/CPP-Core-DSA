#include <bits/stdc++.h>
// #include<math.h>
using namespace std;

int fib(int n) {

        // if(n==0)return 0;       //Approach 1->using recursion  t.c O(n^2) / s.c O(n)
        // if(n==1)return 1;
        
        // return fib(n-1) + fib(n-2);  
        
        
    	// if(n < 2)            //Approach 2->by storing last two numbers  O(n)/O(1)
    	// return n;
    	// int a = 0, b = 1, c = 0;
    	// for(int i = 1; i < n; i++)
    	// {
    	// c = a + b;
    	// a = b;
    	// b = c;
    	// }
    	// return c;
        
        
        double phi = (sqrt(5) + 1) / 2;     //Approach 3->binet's nth term formula O(1)/O(1)
        return round(pow(phi, n) / sqrt(5));
    }

int main(){
    cout<<fib(12);
}