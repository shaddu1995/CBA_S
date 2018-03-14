#include <iostream>
#include<fstream>
#include<string>

using namespace std;

class car
{
public:
    bool engineStatus = true;
    char signalColor;
    float speed;
    bool leftIndicator = false;
    bool rightIndicator = false

    void trafficSignal()
    {
        cout << "\nEnter traffic Signal\n r for Red, o for Orange, g for Green: \n";
        cin >> signalColor;
        if(signalColor == 'r')
        {
            speed = 0;
            engineStatus = false;
            cout << "Car stopped!!!";
        }
        else if(signalColor == 'o')
        {
            engineStatus = true;
            speed = 0;
            cout << "Car started!!!";
        }
        else if(signalColor == 'g')
        {
            engineStatus = true;
            speed = 20;
            cout << "Car speed is 20";
        }
        else
        {
            cout << "Invalid option!!!";
        }
    }
    void leftTurn()
    {
        leftIndicator = true;
        cout << "Turning Left";
    }
    void rightTurn()
    {
        rightIndicator = true;
        cout << "Turning Right";
    }
    void schoolAhead()
    {
        if(speed == 40 || speed > 40)
        {
            speed == 39;
            cout << "Speed is in control!!!";
        }
    }
    void hospitalAhead()
    {
        if(speed == 40 || speed > 40)
        {
            speed == 39;
            cout << "Speed is in control!!!";
        }
    }
    void speedLimit()
    {
        cout << "Enter speed: ";
        cin >>
    }
    void hump();

};

int main()
{
    car c;
    string signal;
    ifstream read;
    read.open("trafficSignal.txt");
    while(read >> signal)
    {
        if(signal == "trafficSignal")
            c.trafficSignal();
    }

    return 0;
}