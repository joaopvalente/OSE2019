//
//  compute_pi.cpp
//  
//
//  Created by João Paulo Valente on 7/20/19.
//

#include <iostream>
#include <math.h>


using namespace std;
int main () {
    // for loop execution
    float step = 0.00001;
    cout << "Enter delta: ";
    cin >> step;
    
    float sum = 0.0;
    for( float x = 0; x < 1; x += step)
    {
        //cout << "value of x: " << x << endl;
        sum += (step) * (4/(1+pow(x,2)));
    }
    cout << "value of sum: " << sum << endl;
    return 0;
}
