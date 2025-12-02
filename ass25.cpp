#include <iostream>
#include <fstream>
using namespace std;






int main()
{   
    
    int sales_person_id, current_sales_person_id;
    double sales, personal_total = 0, grand_total = 0;

    ifstream infile("sales.txt");

    infile >> current_sales_person_id >> sales;
    personal_total = sales;


    
    
    while (infile >> sales_person_id >> sales) {
        if (current_sales_person_id == sales_person_id){
        personal_total += sales;
    } else {
        cout << "Salesperson " << current_sales_person_id << " total: " << personal_total << endl;
        
        grand_total += personal_total;
        current_sales_person_id = sales_person_id;

        personal_total = sales;
    }}

    cout << "Total sales for this salesperson: " << current_sales_person_id << " total: " << personal_total << endl;
    grand_total += personal_total;

    cout << "Total of all sales: " << grand_total << endl;


    return 0;
}



