#include <iostream>
#include <vector>
using namespace std;

void mergeArrays(vector<int>& a, int m, vector<int>& b, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (a[i] > b[j]) {
            a[k] = a[i];
            i--;
        } else {
            a[k] = b[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        a[k] = b[j];
        j--;
        k--;
    }
}

int main() {
    vector<int> a = {1, 2, 3, 0, 0, 0};
    vector<int> b = {2, 5, 6};

    int m = 3;
    int n = 3;

    mergeArrays(a, m, b, n);

    for (int x : a) {
        cout << x << " ";
    }

    return 0;
}