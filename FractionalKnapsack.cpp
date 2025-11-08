#include <bits/stdc++.h>
using namespace std;

struct Item { 
    double value, weight; 
};

bool cmp(Item a, Item b) {
     double r1=a.value/a.weight;
    double r2=b.value/b.weight;
    return r1>r2;
} 

int main() {
    int n;
    double W, maxValue = 0;
    cout << "Enter number of items: ";
    cin >> n;

    vector<Item> items(n);
    cout << "Enter value and weight of each item:\n";
    for (int i = 0; i < n; i++)
        cin >> items[i].value >> items[i].weight;

    cout << "Enter capacity of knapsack: ";
    cin >> W;

    sort(items.begin(), items.end(), cmp);

    for (auto &it : items) {
        if (it.weight <= W) {  // take whole item
            maxValue += it.value;
            W -= it.weight;
        } else {                // take fraction
            maxValue += it.value * (W / it.weight);
            break;
        }
    }

    cout << "Maximum value in knapsack = " << maxValue;
}
