/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/

#include <iostream>
#include <string>

using namespace std;

int askAge()
{
    int a;
    cout << "Enter your age: ";
    cin >> a;
    return a;
}

int askHeight()
{
    int a;
    cout << "Enter your height: ";
    cin >> a;
    return a;
}

int askProperty()
{
    int a;
    cout << "Enter your property: ";
    cin >> a;
    return a;
}

int main()
{
    int age, height;
    string status;
    age = askAge();
    if (age <= 20)
    {
        height = askHeight();
        if (height < 160) status = "UNFRIEND";
        else if (height < 175) status = "FRIEND";
        else status = (askProperty() > 69000000 ? "MARRIED" : "ONE-NIGHT-STAND");
    }
    else if (age < 30)
    {
        status = (askProperty() > 10000000 ? "BEST FRIEND" : "UNFRIEND");
    }
    else status = "UNFRIEND";

    cout << "Your status = " << status;
    return 0;
}