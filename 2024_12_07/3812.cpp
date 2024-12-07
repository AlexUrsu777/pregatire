#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c;
    float x;
    int ca, cb, cc;
    cin >> a>>b>>c; 
    ca = a;
    cb = b;
    cc = c;
    if(ca>cb)
    {
        swap(ca,cb);
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    if(ca>cc)
    {
        swap(ca,cc);
    }
    if(cb>cc)
    {
        swap(cb,cc);
    }    
    if(ca+cb<=cc)
    {
        cout<<"Imposibil";
        return 0;
    }
    cout << fixed << setprecision(2);

    x = b*b+a*a-c*c;
    x = x/(2*b);
    cout << sqrt(a*a-x*x)<< " ";
    x = c*c+b*b-a*a;
    x = x/(2*c);
    cout << sqrt(b*b-x*x)<< " ";
    x = a*a+b*b-c*c;
    x = x/(2*a);
    cout << sqrt(b*b-x*x)<< endl;
    return 0;
}