#include <iostream>
#include <iomanip>
using namespace std;

int valid_account_numbers[18] = {5658845, 4520125, 7895122, 8777541, 8451277,
1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231,
3852085, 7576651, 7881200, 4581002};




int main()
{   
    int user_number;
    bool found = false;


    
    cout << "Please enter your account number: " << endl;
    cin >> user_number;

    for (int i = 0; i < 18; i++){
        if(valid_account_numbers[i] == user_number){
            found = true;
            cout << "Your account number is valid";
            break;
        } 
    }

    if (!found){
        cout << "Your account number is not valid";
    }
    


    return 0;
}



