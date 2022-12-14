//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:

    void solve(int value , int n , int m , int &count)
    {
        //base case
        if(value > m)return;
        
        if(n<=value && value<=m)count++;
        
        int back = value%10;
        
        if(back != 0)solve(value*10 + (back-1) , n , m , count);
        if(back != 9)solve(value*10 + (back+1) , n , m , count);
        
    }

    int steppingNumbers(int n, int m)
    {
        int count =0;
        
        if(n==0)count++;
        
        for(int i=1;i<=9;i++)
        {
            solve(i,n,m,count);
        }
        
        return count;
    }
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}


// } Driver Code Ends