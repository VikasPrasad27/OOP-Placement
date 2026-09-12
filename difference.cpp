/*
Infosys Interview Question

Even/odd index products: Find the maximum product of two elements at even indices and the maximum product of two elements at odd indices, then find the difference between those two products.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int even1 = INT_MIN, even2 = INT_MIN, odd1 = INT_MIN, odd2 = INT_MIN;

    for(int i=0;i<arr.size();i++){
        if(arr[i]%2==0){
            if(arr[i]>even1){
                even2 = even1;
                even1 = arr[i];
            } else if(arr[i]>even2){
                even2 = arr[i];
            }
        } else {
            if(arr[i]>odd1){
                odd2 = odd1;
                odd1 = arr[i];
            } else if(arr[i]>odd2){
                odd2 = arr[i];
            }
        }
    }

    int even_product = even1 * even2;
    int odd_product = odd1 * odd2;

    int difference = even_product - odd_product;

    cout << difference << endl;
     return 0;   
}
 
// IF there are negative numbers we need to take 2 postive numbers and 2 negative numbers and take the maximum of those two products.

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

long long getMaxProduct(const vector<int>& nums) {

    int largest1 = INT_MIN;
    int largest2 = INT_MIN;

    int smallest1 = INT_MAX;
    int smallest2 = INT_MAX;

    for (int x : nums) {

        // Largest two
        if (x > largest1) {
            largest2 = largest1;
            largest1 = x;
        }
        else if (x > largest2) {
            largest2 = x;
        }

        // Smallest two
        if (x < smallest1) {
            smallest2 = smallest1;
            smallest1 = x;
        }
        else if (x < smallest2) {
            smallest2 = x;
        }
    }

    long long product1 = 1LL * largest1 * largest2;
    long long product2 = 1LL * smallest1 * smallest2;

    return max(product1, product2);
}

int main() {

    vector<int> arr = {5, 2, 8, 4, 7, 6};

    vector<int> even;
    vector<int> odd;

    for (int i = 0; i < arr.size(); i++) {

        if (i % 2 == 0)
            even.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }

    long long evenProduct = getMaxProduct(even);
    long long oddProduct = getMaxProduct(odd);

    cout << abs(evenProduct - oddProduct) << endl;

    return 0;
}