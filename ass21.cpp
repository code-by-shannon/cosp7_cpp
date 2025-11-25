#include <iostream>
#include <iomanip>
using namespace std;

double cash_sales_values[7];

string days_of_the_week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

double total = 0;

int main()
{
    for (int i = 0; i < 7; i++){
      cout << "Please enter cash total for " << days_of_the_week[i] << ": " << endl;
      cin >> cash_sales_values[i];
      total += cash_sales_values[i];
    }

    cout << fixed << setprecision(2);
    cout << "Week cash sales total: $" << total << endl;

    return 0;
}



