#include<iostream>
using namespace std;

/*
1- Calculate size of string and assign an empty string to store the answer.
2- Loop through the string from the end to the beginning.
3- For each character, check if it is a space or not.
4- If it is not a space, add it to the word string.
5- If it is a space, add the word string to the answer string.
6- Return the answer string.
7- We return ans.substr(1) to remove the leading space that was added before the first word.It return string starting from index 1.
Time Complexity: O(n)
Space Complexity: O(1)
*/

string reverseWords(string s) {
    int n = s.size();
    string ans = "";

    for (int i = n - 1; i >= 0; i--) {
        string word = "";

        while (i >= 0 && s[i] != ' ') {
            word = s[i] + word;
            i--;
        }

        if (!word.empty()) {
            ans += " " + word;
        }
    }

    return ans.substr(1); // Remove the leading space
}

int main() {
    string s = "Hello World";

    cout << reverseWords(s);

    return 0;
}