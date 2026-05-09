/*
Given a string s, return the longest palindromic substring in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
 

Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters.
*/

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {

        // Constraints
        if (s.length() < 1 || s.length() > 1000) {
            return "";
        }

        string palind;

        for (int i = 0; i < s.length(); i++) {

            palind = getPalindrome(s, i);

            if (palind != "") {
                return palind;
            }
        }

        return palind;
    }

    // verify if is palindrome
    bool isPalindrome(const string& s, int left, int right) {

        while (left < right) {

            if (s[left] != s[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    // construct substring groups
    string getPalindrome(const string& s, int s_decrease) {

        int size = s.length() - s_decrease;

        for (int i = 0; i <= s.length() - size; i++) {

            int left = i;
            int right = i + size - 1;

            if (isPalindrome(s, left, right)) {
                return s.substr(i, size);
            }
        }

        return "";
    }
};

int main() {

    Solution sol;

    string res = sol.longestPalindrome("avva");

    cout << res << " ";

    return 0;
}