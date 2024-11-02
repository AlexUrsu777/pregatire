#include <iostream>
#include <cmath>
using namespace std; 
int main(int argc, char const *argv[])
{
    int r1,g1,b1,r2,g2,b2,n,i;
    double xr,pr,xg,pg,xb,pb;
    cin>>r1>>g1>>b1>>r2>>g2>>b2>>n;
    xr=r2-r1;
    pr=xr/(n-1);
    xg=g2-g1;
    pg=xg/(n-1);
    xb=b2-b1;
    pb=xb/(n-1);
    for(i=0; i<n-1; i++)
        cout<<r1+floor(pr*i)<<", "<<g1+floor(pg*i)<<", "<<b1+floor(pb*i)<<endl;
    cout<<r2<<", "<<g2<<", "<<b2<<endl;
    return 0;
}