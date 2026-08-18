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
            int curr = romanValue(s[i]);
            if (i + 1 < s.size() &&
                curr < romanValue(s[i + 1])) {
                ans -= curr;
            }
            else {
                ans += curr;
            }
        }
        return ans;
    }
};
