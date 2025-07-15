class Solution {
public:
    void backtrack(string& digits, int index, string& path, vector<string> &result,                unordered_map<char, string>&digitmap ){
        if (index == digits.size()){
            result.push_back(path);
            return;
        }

        for (char c: digitmap[digits[index]]){
            path.push_back(c);
            backtrack(digits, index +1, path, result, digitmap);
            path.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> digitmap = {
            {'2' , "abc"}, {'3' , "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };

        vector<string> result;
        string path;

        if ( digits == ""){
            return {};
        }

        backtrack(digits, 0, path, result, digitmap);
        return result;






    }
};