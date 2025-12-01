#include <iostream>
#include <fstream>
using namespace std;






int main()
{   
    ifstream infile("numbers.dat");

    int num;
    int total = 0;

    while (infile >> num) {
        total += num;
    }

    cout << "Total of all values in numbers file: " << total << endl;


    return 0;
}



