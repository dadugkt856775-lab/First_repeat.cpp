#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        bool repeated = false;

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                repeated = true;
                break;
            }
        }

        if (repeated) {
            cout << "First repeated element = " << a[i];
            return 0;
        }
    }

    cout << "No repeated element found.";

    return 0;
}
