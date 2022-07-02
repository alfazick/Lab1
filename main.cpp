


#include<cstdio>
#include <iostream>

/*IMPORTANT:
 * IF YOU WANT TO RUN YOUR MAIN.CPP PROGRAM
 * GO TO  CMakeLists.txt and make necessary changes
 * In one moment at a time you Can Run Either Tests or Main Program
 *
 * By default, it will run TESTS ONLY
*/

using namespace std;

int main()
{

// uncomment this only, when you ready to run the tests, testing will happen against input.txt fila
// Below is C/C++ code for input/output
 #ifndef ONLINE_JUDGE

     // For getting input from input.txt file
     freopen("../test/input.txt", "r", stdin);


     // Printing the Output to output.txt file
     freopen("../test/output.txt", "w", stdout);

 #endif

    cout << "Type month" << endl;
    int month;
    cin >> month;

    cout << "Type day" << endl;
    int day;
    cin >> day;

    cout << "Type year" << endl;
    int year;
    cin >> year;

    cout << "Your magic num is: " << (day + month + year) << endl;

    return 0;
}

