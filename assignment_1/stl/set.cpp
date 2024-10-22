#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    set<int> st;
    while (q--) {
        int cmd, val;
        cin >> cmd >> val;
        if (cmd == 1) {
            st.insert(val);
        }
        else if (cmd == 2) {
            st.erase(val);
        }
        else if (cmd == 3) {
            cout << (st.count(val) ? "Yes" : "No") << endl;
        }
    }
    return 0;
}
