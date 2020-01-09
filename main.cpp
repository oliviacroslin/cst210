// By Olivia Croslin
// This is my own work

#include <iostream>
#include <cmath>

using namespace std;

//int main() {
//    int lbs = 0;
//    cout << "Enter a number in pounds: " << endl;
//    cin >> lbs;
//    double kilograms = lbs * 0.454;
//    cout << "The number of pounds entered is " << kilograms << " kilograms." << endl;
//    return 0;
//}
//
//
//{
//    int side = 0;
//    cout << "Enter the value of the side of a hexagon: " << endl;
//    cin >> side;
//
//    double area = (side*side)*((3)*sqrt(3))/(2);
//
//    cout << "The area is " << area;
//    return 0;
//}
int main()
{
    int num1, num2;
    cout << "Enter an integer value: ";
    cin >> num1;
    cout << "Enter another integer value: ";
    cin >> num2;

    if(num1>num2) {
        cout << num1 << " is larger than " << num2;
    }
    else {
        cout << num2 << " is larger than " << num1;
    }
    return 0;
}