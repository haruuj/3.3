#include <iostream>
#include <cmath>

using namespace std;

double calculateFunction(double x, double R1, double R2) {
    double y;

    if (x < -2 * R1) {
        
        y = x + 3 * R1;
    }
    else if (x >= -2 * R1 && x <= 0) {
        
        y = -sqrt(R1 * R1 - pow(x + R1, 2));
    }
    else if (x > 0 && x <= 2 * R2) {
        
        y = sqrt(R2 * R2 - pow(x - R2, 2));
    }
    else if (x > 2 * R2 && x <= 6) {
        
        y = -R2;
    }
    else {
        
        y = -R2;
    }

    return y;
}

int main() {
    double R1, R2, x;
    cout << "R1= ";
    cin >> R1;
    cout << " R2= ";
    cin >> R2;
    cout << " x= ";
    cin >> x;
    double y = calculateFunction(x, R1, R2);
    cout << " x = " << x << "  y = " << y << endl;

    return 0;
}