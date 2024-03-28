//문제2
#include <fstream>  
#include <cmath>  
#include <iostream>
using namespace std;
const float pi = 3.141592;
int main() {
    ofstream penguin("y.txt");
    if (!penguin) {
        cout << " can't open file/n";
        return -1;
    }
    float t, dt, T;
    t = 0.0;
    dt = 1 / 400.;
    //dt = 0.011
    //dt = 0.009

    T = 0.5;
    //T = 0.05;

    for (t = 0; t < T; t = t + dt) {
        penguin << t << " " << sin(200 * pi * t) << " " << endl;
    }
    penguin.close();
    return 1;
    getchar();
}
