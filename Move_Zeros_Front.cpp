/*
MOVE ZEROS AT FRONT
arr=[1,0,3,2,4,0,0,2]
0 0 0 1 3 2 4 2
*/
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,0,3,2,4,0,0,2};
    int n = 8;

    int j = n - 1;

    // Move non-zero elements to end
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j--;
        }
    }

    // Fill remaining places with 0
    while(j >= 0) {
        arr[j] = 0;
        j--;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}