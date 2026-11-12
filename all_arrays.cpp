#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++) {
        int currsum = 0;

        for(int j = i; j < n; j++) {
            currsum += arr[j];

            if(currsum > maxSum) {
                maxSum = currsum;
            }
        }
    }

    cout << "Maximum Sum = " << maxSum;

    return 0;
}