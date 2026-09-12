/*
Given an array and an initial divisor, check each element. If the element is divisible by the current divisor, count it and update the divisor to the sum of the digits of that element.

Example

Array = [12, 15, 30, 7, 21]
Output = 4

Time: O(n × digits)
Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int digitSum(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    vector<int> arr = {12, 15, 30, 7, 21};

    int divisor = 3;
    int count = 0;

    for (int x : arr) {

        if (x % divisor == 0) {
            count++;

            divisor = digitSum(x);
        }
    }

    cout << "Count = " << count << endl;

    return 0;
}
