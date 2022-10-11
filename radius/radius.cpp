#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float radius, area, PI = 3.14159265;

    // Asks the user to enter a value for radius
    cout << "Enter value for radius: ";
    cin >> radius;

    // Formula for area of circle: A = pi (3.14159265) * r^2

    area = PI * radius * radius;

    cout << "\n" <<"The area of a circle for an input value of radius of " << radius << " is " << fixed << setprecision(3) << area << endl;

    return 0;
}