#include <bits/stdc++.h>
using namespace std;

int part(vector<int>& v, int l, int h) {
    int p = v[h], i = l - 1;
    for (int j = l; j <= h - 1; ++j) {
        if (v[j] <= p) {
            ++i;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[h]);
    return i + 1;
}

void qsort(vector<int>& v, int l, int h) {
    if (l < h) {
        int p = part(v, l, h);
        qsort(v, l, p - 1);
        qsort(v, p + 1, h);
    }
}

int main() {
    vector<int> v = {12, 1, 80, 9, 1, 5};
    qsort(v, 0, v.size() - 1);
    for (int x : v) cout << x << " ";
    return 0;
}
