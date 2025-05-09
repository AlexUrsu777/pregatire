#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int v[1001];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int lmax = 0;
    for (int j = 0; j < n; j++) {
        int k = 0, l = 0;
        for (int x = j; x < n; x++) {
            if (v[x] == 0) {
                k++;
            }
            if (k > k) {
                break;
            }
            l++;
        }
        lmax = max(lmax, l);
    }
    cout << lmax << endl;
    return 0;
}
