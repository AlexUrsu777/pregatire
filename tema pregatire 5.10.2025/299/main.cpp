#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sumsecv.in");
ofstream fout("sum secv.out");

int main() {
    int n, m;
    fin >> n;
    int v[101];
    for (int i = 1; i <= n; i++) {
        fin >> v[i];
    }
    fin >> m;
    for (int k = 1; k <= m; k++) {
        int start, end, sum = 0;
        fin >> start >> end;
        for (int i = start; i <= end; i++) {
            sum += v[i];
        }
        fout << sum;
        if (k < m) {
            fout << " ";
        }
    }
    fout << endl;
    return 0;
}
