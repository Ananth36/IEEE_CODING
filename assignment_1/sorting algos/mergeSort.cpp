#include <bits/stdc++.h>
using namespace std;

void mrg(vector<int>& a, int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; ++i) L[i] = a[l + i];
    for (int j = 0; j < n2; ++j) R[j] = a[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) a[k++] = L[i++];
        else a[k++] = R[j++];
    }

    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];
}

void mrgSort(vector<int>& a, int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mrgSort(a, l, m);
    mrgSort(a, m + 1, r);
    mrg(a, l, m, r);
}

void printVec(const vector<int>& a) {
    for (int x : a) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> a = {20, 1, 30, 5, 6, 7};
    cout << "Given vector is \n";
    printVec(a);
    mrgSort(a, 0, a.size() - 1);
    cout << "\nSorted vector is \n";
    printVec(a);
    return 0;
}
