class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();

        if(m>n) return -1;

        long long base=26;
        long long mod=1000000007;

        long long needleHash=0;
        long long windowHash=0;

        long long power=1;

        for(int i=0;i<m-1;i++){
            power=(power*base)%mod;
        }

        for(int i=0;i<m;i++){
            needleHash = (needleHash * base + (needle[i] - 'a' + 1)) % mod;
            windowHash = (windowHash * base + (haystack[i] - 'a' + 1)) % mod;
        }

        for(int i=0;i<=n-m;i++){
            bool match=true;
            if(needleHash==windowHash){
            for(int j=0;j<m;j++){
                if(haystack[i+j]!=needle[j]){
                    match=false;
                    break;
                }
            }
            if(match){
                return i;
            }
        }
            if (i < n - m) {
                windowHash =(windowHash - (haystack[i] - 'a' + 1) * power) % mod;
                if (windowHash < 0)
                    windowHash += mod;
                }    windowHash =(windowHash * base +(haystack[i + m] - 'a' + 1)) %mod;
            }
        return -1;
    }
};
