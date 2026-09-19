/*
Ask: Given start and finish times of activities, select the maximum number of non-overlapping activities.

Why greedy works: If you always pick the activity that finishes earliest among the remaining valid options, you leave the most room for future activities. This is provable by an exchange argument — any optimal solution can be transformed to include the earliest-finishing activity without reducing the count

ex:
{1,2},{3,4},{0,6},{5,7},{8,9},{5,9} = 4

Tc - O(n log n) for sorting + O(n) for the selection process = O(n log n)
Sc - O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int maxActivities(vector<pair<int,int>>& activities) {
    // Sort by finish time
    sort(activities.begin(), activities.end(), 
         [](auto& a, auto& b) { return a.second < b.second; });

    int count = 1; // first activity (earliest finish) is always picked
    int lastFinish = activities[0].second;

    for (int i = 1; i < (int)activities.size(); i++) {
        if (activities[i].first >= lastFinish) { // starts after (or when) last one finished
            count++;
            lastFinish = activities[i].second;
        }
    }
    return count;
}

int main() {
    // {start, finish}
    vector<pair<int,int>> activities = {{1,2},{3,4},{0,6},{5,7},{8,9},{5,9}};
    cout << "Max activities: " << maxActivities(activities) << endl;
    return 0;
}