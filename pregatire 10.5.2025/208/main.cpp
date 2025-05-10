#include <iostream>

using namespace std;

int main()
{
    int n, i, j, m, a[25][25];
    cin >> n >> m;
    for(i = 0; i < n*m; i++){
        int x = 2*i+1;
        cout << x*x << " ";
        if((i+1)%m == 0)
            cout << endl;
    }
    return 0;
}
