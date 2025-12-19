#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc,char** argv) {
    double aim_v, n, spec_v, x0;
    double pi = M_PI;
    cout << "please input your equation's pow number : " << endl;
    cin >> n;
    cout << "enter the constant value" << endl;
    cin >> spec_v;
    x0 = pow(spec_v, 1/n);
    for(int i = 0; i < n; i++) {
        double rp = x0*cos(2*pi*i/n);
        double ip = x0*sin(2*pi*i/n);
        cout << "this is No." << i+1 << "\n The value is " << rp << "+" << ip << "i" << endl;
    }
}
