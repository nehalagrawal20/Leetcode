//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int fillingBucket(int n) {
        // code here
        int m=100000000;
        if(n==1)
        return 1;
        int x=1;
        int y=1;
        for(int i=1;i<n;i++)
        {
            int c=(x%m+y%m)%m;
            y=x;
            x=c;
        }
        return x%m;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends