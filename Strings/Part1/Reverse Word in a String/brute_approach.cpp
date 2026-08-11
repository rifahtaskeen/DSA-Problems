class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string>ans;
        string word="";
        for(int i=0;i<n;i++){
            if(s[i]!=' ') word+=s[i];
            else{
                if(!word.empty()){
                    ans.push_back(word);
                    word="";
                }
            }
        }
        if(!word.empty()){
            ans.push_back(word);
            word="";
        }
        reverse(ans.begin(),ans.end());
        string fans="";
        for(auto it:ans){
            fans+=(it);
            fans+=' ';
        }
        fans.pop_back();
        return fans;
    }
};
