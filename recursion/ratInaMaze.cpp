//https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

// class Solution{
//     private:
//     bool isPossible(vector<vector<int>> m,int x,int y,int n,vector<vector<int>> visited){
//         if(x>=0 && x<n && y>=0 && y<n && visited[x][y]==0 && m[x][y]==1) return true;
//         else return false;
//     }
    
//     private:
//     void solve(vector<vector<int>> m,int ix,int iy,int n,vector<vector<int>> visited,vector<string>& ans,string path){
//         if(ix==n-1 && iy==n-1){
//             ans.push_back(path);
//             return;
//         }
//         visited[ix][iy]=1;
        
//         int new_x =ix+1;
//         int new_y =iy;
//         if(isPossible(m,new_x,new_y,n,visited)){        //for going down
//             path.push_back('D');
//             solve(m,new_x,new_y,n,visited,ans,path);
//             path.pop_back();
//         }
        
//         new_x =ix-1;
//         new_y =iy;
//         if(isPossible(m,new_x,new_y,n,visited)){        //for going up
//             path.push_back('U');
//             solve(m,new_x,new_y,n,visited,ans,path);
//             path.pop_back();
//         }
        
//         new_x =ix;
//         new_y =iy-1;
//         if(isPossible(m,new_x,new_y,n,visited)){        //for going left
//             path.push_back('L');
//             solve(m,new_x,new_y,n,visited,ans,path);
//             path.pop_back();
//         }
        
//         new_x =ix;
//         new_y =iy+1;
//         if(isPossible(m,new_x,new_y,n,visited)){        //for going right
//             path.push_back('R');
//             solve(m,new_x,new_y,n,visited,ans,path);
//             path.pop_back();
//         }
        
//         visited[ix][iy]=0;
//     }
    
//     public:
//     vector<string> findPath(vector<vector<int>> &m, int n) {
        
//         vector<string> ans;
//         vector<vector<int>> visited= m;
//         string path="";
        
//         for(int i=0;i<n;i++) {
//             for(int j=0;j<n;j++){
//                 visited[i][j]=0;
//             }
//         }
        
//         int ix=0;
//         int iy=0;
        
        
//         if(m[ix][iy]==0) return ans;
        
//         solve(m,ix,iy,n,visited,ans,path);
//         sort(ans.begin(),ans.end());
        
//         return ans;
        
        
        
        
//     }
// };