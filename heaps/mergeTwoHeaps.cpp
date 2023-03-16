// https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1


// class Solution{
//     public:
    
//     void heapify(vector<int> &v, int &size, int i){
        
//         int largest =i;
        
//         int l = 2*i +1;
//         int r = 2*i +2;
        
//         if(l<size && v[l] > v[largest]){
//             largest = l;
//         }
//         if(r<size && v[r] > v[largest]){
//             largest = r;
//         }
        
//         if(largest!=i){
            
//             swap(v[i], v[largest]);
//             heapify(v, size, largest);
//         }
        
//     }
//     vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
       
//        vector<int> v;
       
//        for(int i=0; i<n;i++){
//            v.push_back(a[i]);
//        }
//        for(int i=0; i<m;i++){
//            v.push_back(b[i]);
//        }
       
//        int size = v.size();
       
//        for(int i =((size)/2) -1; i>=0; i--){
           
//            heapify(v, size, i);
//        }
       
//        return v;
//     }
// };