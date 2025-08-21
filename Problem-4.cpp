#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,8,9,12,46,76,82,15,20,30};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i <= 9; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] % i == 0) {
                count++;
            }
        }
        cout << i << ": " << count << endl;
    }

    return 0;
}
