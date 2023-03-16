//https://leetcode.com/problems/count-primes/submissions/

// class Solution {
// public:
//     int countPrimes(int n) {        //counts number of primes before n using sieve of eratosthenes 
        
//         vector <bool> prime(n+1,true);
//         prime[0]=prime[1]=false;
//         int count=0;
        
//         for(int i=2;i<n;i++){
            
//             if(prime[i]){       //if prime[i]=1 then count increases 
//                 count++;
            
            
//                 for(int j=2*i;j<n;j=j+i){    // marking all multiples of i as false(non prime)
//                     prime[j]=0;
//                 }
//             }
//         }
//         return count;
//     }
// };