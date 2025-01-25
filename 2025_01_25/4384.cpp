#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i;
    cin >> n;
    int v[n];
    for(i=0; i<=n-1;i++){
        cin >> v[i];
    }
    for(i=n-1; i>=0;i--){
        bool prim=true;
        for(int d=2; d<v[i]; d++)
            if(v[i]%d==0){
                prim = false;
                break;
            }
        if(prim){
            v[i] = 0;
            break;
        }
    }
    for(i=0; i<=n-1;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
