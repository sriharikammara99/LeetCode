#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        if(digits.empty()) return {};
        
        map<char, string> mp = {
            {'2',"abc"}, {'3',"def"}, {'4',"ghi"},
            {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"},
            {'8',"tuv"}, {'9',"wxyz"}
        };
        
        vector<string> result;
        backtrack(digits, 0, "", mp, result);
        return result;
    }
    
    void backtrack(string digits, int index, string current,
                   map<char,string>& mp, vector<string>& result) {
        
        if(index == digits.size()) {
            result.push_back(current);
            return;
        }
        
        string letters = mp[digits[index]];
        
        for(char c : letters) {
            backtrack(digits, index+1, current + c, mp, result);
        }
    }
};