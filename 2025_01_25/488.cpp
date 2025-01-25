#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i;
    cin >> n;
    int v[n+1];
    for(i=1; i<=n;i++){
        cin >> v[i];
    }
    for(i=1; i<=n;i++)
        if(i%2==0)
        cout << v[i] << " ";
    cout << endl;
    for(i=n; i>=1;i--){
        if(i%2!=0)
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
