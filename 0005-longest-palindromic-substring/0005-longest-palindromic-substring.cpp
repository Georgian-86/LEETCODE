class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, maxLen = 1;
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            expand(s, i, i, start, maxLen);
            expand(s, i, i + 1, start, maxLen);
        }

        return s.substr(start, maxLen);
    }

private:
    void expand(string& s, int left, int right, int& start, int& maxLen) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }
};