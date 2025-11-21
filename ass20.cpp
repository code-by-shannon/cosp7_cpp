#include <iostream>
#include <iomanip>
using namespace std;


int speed_limit_check(){
    int speed;
    cout << "Please enter the speed limit in question: ";
    cin >> speed;

    while(speed < 20 || speed > 70){
        cout << "Please enter a speed limit between 20 and 70" << endl;
        cin >> speed;
    }

    return speed;
}

int main()
{
    int checked_speed = speed_limit_check();
    cout << "This is the speed limit you entered: " << checked_speed << endl;
    return 0;
}

