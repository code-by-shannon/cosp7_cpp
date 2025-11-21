#include <iostream>
#include <iomanip>
using namespace std;


int speed_limit_range_check(){
    int speed;
    cout << "Please enter the speed limit in question: ";
    cin >> speed;

    while(speed < 20 || speed > 70){
        cout << "Please enter a speed limit between 20 and 70" << endl;
        cin >> speed;
    }

    return speed;
}

int car_speed(){
    int car_speed;
    cout << "Enter speed of checked car" << endl;
    cin >> car_speed;
    return car_speed;
}

int main()
{
    int checked_speed = speed_limit_range_check();
    cout << "This is the speed limit you entered: " << checked_speed << endl;

    int checked_car_speed = car_speed();
    cout << "This was the car speed " << checked_car_speed << endl;
    return 0;
}

