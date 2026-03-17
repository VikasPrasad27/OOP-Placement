#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int L;

    cin >> s;
    cin >> L;

    int maxCount = 0;

    for (int i = 0; i < s.length(); i += L) {
        int countA = 0;

        // Process each chunk of size L
        for (int j = i; j < i + L && j < s.length(); j++) {
            if (s[j] == 'a') {
                countA++;
            }
        }

        maxCount = max(maxCount, countA);
    }

    cout << maxCount;
    return 0;
}