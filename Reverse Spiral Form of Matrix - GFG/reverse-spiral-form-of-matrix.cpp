//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int m, int n, vector<vector<int>>&matrix)  {
        // code here
        vector<int> ans;
        // int m = matrix.size(), n = matrix[0].size();
        if (m <= 0 || n <= 0)
            return ans;
        int rows = 0, rowsend = m - 1; 
        int cols = 0, colsend = n - 1; 
        
        while(rows <= rowsend && cols <= colsend) 
        {    
            // right 
            for (int i = cols; i <= colsend; i++)
                ans.push_back(matrix[rows][i]);
            rows++;
            
            //  down 
            for (int i = rows; i <= rowsend; i++)
                ans.push_back(matrix[i][colsend]);
            colsend--;
            
            if (rows > rowsend) 
                break;
            //  left 
            for (int i = colsend; i >= cols; i--) 
                ans.push_back(matrix[rowsend][i]);
            rowsend--;
            
            if (cols > colsend)
                break;
            //  up 
            for (int i = rowsend; i >= rows; i--)
                ans.push_back(matrix[i][cols]);
            cols++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends