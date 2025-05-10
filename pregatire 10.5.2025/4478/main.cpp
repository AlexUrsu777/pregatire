#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int v[1001];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int lmax = -1;
    for (int j = 0; j < n; j++) {
        int z = 0, l = 0;
        for (int x = j; x < n; x++) {
            if (v[x] == 0) {
                z++;
            }
            if (z > k) {
                break;
            }
            l++;
        }
        lmax = max(lmax, l);
    }
    cout << lmax << endl;
    return 0;
}
