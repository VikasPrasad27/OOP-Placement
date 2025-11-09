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

/*
🧠 Step-by-Step Explanation
1️⃣ #include <bits/stdc++.h>

Includes all C++ standard libraries (like <iostream>, <vector>, <algorithm>) — helps keep code short.

2️⃣ Structure of the program

There are three main parts:

isSafe() → Checks if placing a queen is safe.

solve() → Uses backtracking to place queens row by row.

main() → Takes input and starts solving.

3️⃣ isSafe() Function
bool isSafe(vector<vector<int>>& b, int r, int c, int n)


Checks if we can safely place a queen at position (r, c).

How it checks:

For each previous row i:

b[i][c] → Checks same column

b[i][c-i+r] → Checks upper-left diagonal

b[i][c+i-r] → Checks upper-right diagonal

If any of these already has a queen (1), return false.

Otherwise, it’s safe to place, so return true.

✅ This ensures no two queens attack each other.

4️⃣ solve() Function (Backtracking)
bool solve(vector<vector<int>>& b, int r, int n)


Places queens row by row.

Steps:

Base condition:
If r == n, all queens are placed → return true.

For each column in current row:

If the cell already has a queen (from user input), skip to next row.

Else, check if placing a queen here is safe.

If safe → place it (b[r][c] = 1) and call solve() for next row.

If placing doesn’t lead to a solution → remove it (backtrack).

If no column works in this row → return false (backtrack to previous row).

5️⃣ main() Function
int main() {
    int n, r, c;
    cout << "Enter board size: ";
    cin >> n;
    cout << "Enter position of first queen (row col): ";
    cin >> r >> c;


Takes board size n

Takes the position (r, c) of the first queen

Then:

vector<vector<int>> b(n, vector<int>(n, 0));


Creates an n x n board filled with 0s.
(0 → empty cell, 1 → queen)

b[r][c] = 1;


Places the first queen at the given position.

if (solve(b, 0, n))


Starts solving from row 0.

Finally, it prints the solution matrix — 1 means a queen is placed, 0 means empty.

🧮 Example Run

Input:

Enter board size: 4
Enter position of first queen (row col): 0 1


Output:

0 1 0 0 
0 0 0 1 
1 0 0 0 
0 0 1 0 


✅ Each row and column has exactly one queen,
and none attack each other (no same row, column, or diagonal).

🧩 Key Concepts Used
Concept	Explanation
Backtracking	Tries placing queens row by row and backtracks if conflict occurs
Recursion	Function calls itself to handle next rows
Safety Check	Ensures no two queens threaten each other
Matrix Representation	0 = empty, 1 = queen placed

*/