/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        
        int k = 0;
        bool finished = false
        while (!finished) {
            vector<string> prefixes;

            for (int i = 0; i < strs.size(); i++) {
                string temp(1, strs[i][k]);
                prefixes.push_back(temp);
            }

            unordered_map<string, int> seen;
            vector<string> newStrs;
            for (int i = 0; i < prefixes.size(); i++) {
                string j = prefixes[i];

                if (seen.find(j) != seen.end()) {
                    cout << "Duplicata encontrada: " << j << endl;
                    cout << "Primeira ocorrência no índice: " << seen[j] << endl;
                    cout << "Duplicata no índice: " << i << endl;

                    
                    newStrs.push_back(strs[i]);
                } else {
                    seen[j] = i;
                }
            }
            
            strs = newStrs;

        k++;
    }

        
        return res;
    }
};

int main() {
    Solution sol;

    vector<string> test = {"pao", "padaria", "padeiro", "pedra", "pedrao"};

    string res = sol.longestCommonPrefix(test);
    cout << "Resultado: " << res << endl;

    return 0;
}
