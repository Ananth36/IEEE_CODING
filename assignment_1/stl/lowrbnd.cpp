#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int& x : a) {
        cin >> x;
    }

    sort(a.begin(), a.end());

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;
        auto it = lower_bound(a.begin(), a.end(), x);
        int idx = distance(a.begin(), it) + 1;

        if (it != a.end() && *it == x) {
            cout << "Yes " << idx << endl;
        } else {
            cout << "No " << idx << endl;
        }
    }

    return 0;
}
