// #include <iostream>
// #include <omp.h>
// using namespace std;

// int main() {
//     int n = 5;
//     int arr[] = {1, 2, 3, 4, 5};

//     int minv = arr[0], maxv = arr[0], sum = 0;

//     #pragma omp parallel for reduction(min:minv) reduction(max:maxv) reduction(+:sum)
//     for (int i = 0; i < n; i++) {
//         if (arr[i] < minv) minv = arr[i];
//         if (arr[i] > maxv) maxv = arr[i];
//         sum += arr[i];
//     }

//     double avg = (double)sum / n;

//     cout << "Min: " << minv << endl;
//     cout << "Max: " << maxv << endl;
//     cout << "Sum: " << sum << endl;
//     cout << "Avg: " << avg << endl;

//     return 0;
// }


#include <iostream>
#include <omp.h>
using namespace std;

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    int minv = arr[0], maxv = arr[0], sum = 0;

    #pragma omp parallel for reduction(max:maxv)
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxv) {
            maxv = arr[i];
        }
    }
    #pragma omp parallel for reduction(min:minv)
    for (int i = 0; i < n; i++) {
        if (arr[i] < minv) {
            minv = arr[i];
        }    
    }
    #pragma omp parallel for reduction(+:sum)
    for (int i = 0; i < n; i++) {
            sum += arr[i];
    }

    double avg = (double)sum / n;

    cout << "Min: " << minv << endl;
    cout << "Max: " << maxv << endl;
    cout << "Sum: " << sum << endl;
    cout << "Avg: " << avg << endl;

    return 0;
}

