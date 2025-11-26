#include <iostream>
#include <iomanip>
using namespace std;

double users_random_numbers[20];

string enter_number_prompt[20] = {"Number 1: ", 
                              "Number 2:", 
                              "Number 3:", 
                              "Number 4:", 
                              "Number 5:", 
                              "Number 6: ", 
                              "Number 7:", 
                              "Number 8:", 
                              "Number 9:", 
                              "Number 10:", 
                              "Number 11: ", 
                              "Number 12:", 
                              "Number 13:", 
                              "Number 14:", 
                              "Number 15:", 
                              "Number 16: ", 
                              "Number 17:", 
                              "Number 18:", 
                              "Number 19:", 
                              "Number 20:"
                            };
                           

double total = 0;


int main()
{
    for (int i = 0; i < 20; i++){
      cout << "Please enter a random number: " << enter_number_prompt[i] << endl;
      cin >> users_random_numbers[i];
      total += users_random_numbers[i];
    }

    double lowest = users_random_numbers[0];
    for (int i = 1; i < 20; i++){
        if (users_random_numbers[i] < lowest){
            lowest = users_random_numbers[i];
        } ;
    }

     double highest = users_random_numbers[0];
    for (int i = 1; i < 20; i++){
        if (users_random_numbers[i] > highest){
            highest = users_random_numbers[i];
        } ;
    }

    cout << fixed << setprecision(2);
    cout << "Total value of added numbers: " << total << endl;
    cout << "Average of added numbers: " << total/20 << endl;
    cout << "Lowest value the user entered is: " << lowest << endl;
    cout << "Highest value the user entered is: " << highest << endl;

    return 0;
}



