#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int half = n / 2;
    for (int i = 0; i < half; i++) {
        cout << arr[i] << " " << arr[i + half] << " ";
    }
    if (n % 2 != 0) cout << arr[n - 1];
    return 0;
}
