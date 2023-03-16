// https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4



// vector<int>reverse(vector<int>v){
//     int s= 0;
//     int e = v.size()-1;
    
//     while(s<=e){
//         swap(v[s++],v[e--]);
//     }
//     return v;
// }

// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// 	// Write your code here.
//     int i=n-1;
//     int j=m-1;
//     vector<int>ans;
//     int carry=0;
//     while(i>=0 && j>=0){
//         int val1=a[i];
//         int val2=b[j];
        
//         int sum=val1+val2+carry;
        
//         carry=sum/10;
//         sum=sum%10;
//         ans.push_back(sum);
//         i--;
//         j--;
        
//     }
//     while(i>=0){            //first case first array is bigger
//         int sum=a[i]+carry;
//         carry=sum/10;
//         sum=sum%10;
//         ans.push_back(sum);
//         i--;
//     }
    
//     while(j>=0){            //second case second array is bigger
//         int sum=b[j]+carry;
//         carry=sum/10;
//         sum=sum%10;
//         ans.push_back(sum);
//         j--;
//     }
    
//     while(carry!=0){           // we have a carry
//         int sum=carry;
//         carry=sum/10;
//         sum=sum%10;
//         ans.push_back(sum);
        
//     }
    
//     return reverse(ans);
// }