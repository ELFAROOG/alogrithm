#include <iostream>
#include <cmath>
#include <iomanip> // áÅÙåÇÑ ÇáÃÑŞÇã ÇáÚÔÑíÉ ÈÏŞÉ

using namespace std;

int main() {
    double a, b, Area;
    const double PI = 3.141592653589793;

    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;


    if ((2 * a + b) == 0) {
        cout << "Error: Division by zero!" << endl;
    } else {

        Area = PI * (a * a / 4.0) * ((2 * a - b) / (2 * a + b));

        cout << fixed << setprecision(2);
        cout << "Circle Area: " << Area << endl;
        cout << "Floor of Area: " << floor(Area) << endl;
    }

    return 0;
}
