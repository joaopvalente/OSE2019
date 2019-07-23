// #include <iostream>
#include <random>
#include <stdio.h>


//generate random numbers in [0,1]
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  
//!.....uniform distributed [0..1]	
	unsigned seed_unif1 = 3;
	std::default_random_engine generator_unif(seed_unif1);
	std::uniform_real_distribution<double> distribution_unif(0.0,1.0);

	int No_random_numbers = 10000;
	double x;
    double y;
    double z;
	
    float sum = 0.0;
    
//!.....generate No_random_numbers 		
	for(int numbers = 1; numbers <=No_random_numbers; numbers++)
	{
	  x = distribution_unif(generator_unif);
      y = distribution_unif(generator_unif);
      z = pow(x,2) + pow(y,2);
      if (z <= 1)
          sum = sum + 1;
	  //cout << "random number i = "  << numbers << " has value " << x << endl;
      //cout << "random number i = "  << numbers << " has value " << y << endl;
	}
    
    cout << "N = " << No_random_numbers << " has an approx. pi of " << 4*sum/No_random_numbers << endl;
	
  return 0;
}


