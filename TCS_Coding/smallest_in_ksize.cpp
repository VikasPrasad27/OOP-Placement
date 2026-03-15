#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<=n-k;i++){
        int mn = arr[i];

        for(int j=i;j<i+k;j++){
            mn = min(mn,arr[j]);
        }

        cout << mn << " ";
    }

    return 0;
}