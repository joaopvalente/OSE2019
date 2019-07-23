//
//  hello.cpp
//  
//
//  Created by João Paulo Valente on 7/20/19.
//

#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    cout << "Hello user!"; //no std:: prefix is needed!
    cout << "Enter your name: "; // ask user for a number
    char input[100];
    cin >> input; // read number from console and store it in x
    cout << "Hello " << input << ", how are you?  ";
    return 0;
}
