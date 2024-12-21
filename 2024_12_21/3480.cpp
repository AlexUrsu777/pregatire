#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    auto ifile = ifstream("9lan.in");
    auto ofile = ofstream("9lan.out");
    ifile >> n;
    if(n%2==0)
        ofile << "1"<< endl;
    if (n%2!=0)
        ofile << "9"<< endl;
    return 0;
}