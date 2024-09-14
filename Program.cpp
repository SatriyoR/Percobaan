#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double height, gravity = 9.8;
    
    cout << "Enter height in meter: ";
    cin >> height;

    double time = sqrt(2 * height / gravity);

    cout << "The time for the ball to land is: " << time << " seconds." << endl;
    return 0;
}