class Solution {
public:
    int romanValue(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        return 1000;
    }
    int romanToInt(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size()) {
                string two = s.substr(i, 2);
                if (two == "IV") {
                    ans += 4;
                    i++;
                }
                else if (two == "IX") {
                    ans += 9;
                    i++;
                }
                else if (two == "XL") {
                    ans += 40;
                    i++;
                }
                else if (two == "XC") {
                    ans += 90;
                    i++;
                }
                else if (two == "CD") {
                    ans += 400;
                    i++;
                }
                else if (two == "CM") {
                    ans += 900;
                    i++;
                }
            else {
                ans += romanValue(s[i]);
            }
        }
        else {
                ans += romanValue(s[i]);
            }
        }
        return ans;
    }
};
