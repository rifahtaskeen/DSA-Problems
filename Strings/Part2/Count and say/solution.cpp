class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        for(int i=2;i<=n;i++){
            string temp =ans;
            ans="";
            int count=0;
            for(int j=0;j<temp.size();){
                char cur=temp[j];
                count=0;
                while(j<temp.size() && temp[j]==cur){
                    count++;
                    j++;
                }
                ans+=to_string(count);
                ans+=cur;
            }
        }
        return ans;
    }
};
