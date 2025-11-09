#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>& b, int r, int c, int n) {
    for (int i = 0; i < r; i++)
        if (b[i][c] || (c-i+r<n && b[i][c-i+r]) || (c+i-r>=0 && b[i][c+i-r]))
            return false;
    return true;
}

bool solve(vector<vector<int>>& b, int r, int n) {
    if (r == n) return true;
    for (int c = 0; c < n; c++) {
        if (b[r][c]) return solve(b, r+1, n);
        if (isSafe(b, r, c, n)) {
            b[r][c] = 1;
            if (solve(b, r+1, n)) return true;
            b[r][c] = 0;
        }
    }
    return false;
}

int main() {
    int n, r, c;
    cout << "Enter board size: ";
    cin >> n;
    cout << "Enter position of first queen (row col): ";
    cin >> r >> c;

    vector<vector<int>> b(n, vector<int>(n, 0));
    if (r>=n || c>=n || r<0 || c<0) { cout << "Invalid position"; return 0; }
    b[r][c] = 1;

    if (solve(b, 0, n))
        for (auto &row : b) { for (int x : row) cout << x << " "; cout << "\n"; }
    else cout << "No solution";
}
