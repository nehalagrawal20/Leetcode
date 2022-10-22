class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(int i=0;i<t.size();i++)mp[t[i]]++;
        int i=0,j=0,n=s.size(),cnt=mp.size(),mini=INT_MAX;
        string ans;
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0)cnt--;
            }
            while(cnt==0){
                if(mini>j-i+1){
                    mini=min(mini,j-i+1);
                    ans=s.substr(i,j-i+1);
                }   
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]>0)cnt++;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};