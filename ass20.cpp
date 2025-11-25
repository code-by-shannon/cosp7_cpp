#include <iostream>
#include <iomanip>
using namespace std;


int speed_limit_range_check(){
    int speed;
    cout << "Please enter the speed limit in question: ";
    cin >> speed;

    while(speed < 20 || speed > 70){
        cout << "Please enter a speed limit between 20mph and 70mph" << endl;
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
    cout << "This is the speed limit you entered: " << checked_speed << " mph" << endl;

    int checked_car_speed = car_speed();
    cout << "This was the car speed " << checked_car_speed << " mph" << endl;

    if(checked_car_speed > checked_speed){
        int mph_over_speed_limit = (checked_car_speed - checked_speed);
        cout << "You were driving " << mph_over_speed_limit << "mph over the speed limit!" << endl;
    }
    return 0;
}

