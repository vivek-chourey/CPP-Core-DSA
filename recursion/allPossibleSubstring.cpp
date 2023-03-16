//https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16



// void solve(string str,int index,string output,vector <string>& ans){
//     if(index>=str.length()){
//         if(output.length()!=0){
//             ans.push_back(output);
//         }
        
//         return ;
//     }
    
//     solve(str,index+1,output,ans);    //(1) exclude a character
    
//     char c=str[index];                //(2) include a character
//     output.push_back(c);
//     solve(str,index+1,output,ans);
// }

// vector<string> subsequences(string str){
	
// 	vector <string> ans;
//     string output= "";
//     int index =0;
    
//     solve(str,index,output,ans);
//     return ans;
	
// }
