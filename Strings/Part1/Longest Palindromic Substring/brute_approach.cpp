class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int l=0;
        string fans;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string s1=s.substr(i,j-i+1);
                string s2=s1;
                reverse(s2.begin(),s2.end());
                if(s1==s2){
                    if(l<s1.size()){
                        l=s1.size();
                        fans=s1;
                    }
                }
            }
        }
        return fans;      
    }
};
