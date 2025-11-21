#include <iostream>
#include <iomanip>
using namespace std;


int speed_limit_check(){
    int speed;
    cout << "Please enter the speed at which vehicle was traveling: ";
    cin >> speed;

    while(speed < 20 || speed > 70){
        cout << "Please enter a speed between 20 and 70";
        cin >> speed;
    }

    return speed;
}

int main()
{
    int checked_speed = speed_limit_check();
    cout << "This was the speed you entered and it was in range: " << checked_speed;
    return 0;
}

nothing burger