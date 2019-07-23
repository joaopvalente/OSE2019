//
//  solve_eq.cpp
//  
//
//  Created by João Paulo Valente on 7/20/19.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    using namespace std;
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    cout << " x1: " << (- b + sqrt(pow(b,2) - 4*a*c)) / (2*a) << endl;
    cout << " x2: " << (- b - sqrt(pow(b,2) - 4*a*c)) / (2*a) << endl;
    return 0;
}
