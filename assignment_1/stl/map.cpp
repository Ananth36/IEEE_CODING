#include <iostream>
#include <map>
using namespace std;

int main() {
    int q;
    cin >> q;
    map<string, int> m;

    while (q--) {
        int t;
        string n;
        cin >> t >> n;

        if (t == 1) {
            int s;
            cin >> s;
            m[n] += s;
        } else if (t == 2) {
            m.erase(n);
        } else if (t == 3) {
            cout << m[n] << endl;
        }
    }

    return 0;
}
