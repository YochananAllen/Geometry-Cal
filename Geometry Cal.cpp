// Geometry Cal.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Yochanan Allen 
//

#include <iostream>

using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;

    do {
        
        cout << "Geometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle " << endl;
        cout << "2. Calculate the Area of a Rectangle " << endl;
        cout << "3. Calculate the Area of a Triangle " << endl;
        cout << "4. Quit " << endl;
        cout << "Enter your choice (1 through 4): ";
        cin >> choice;

        
        if (choice == 1) {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            double area = PI * radius * radius;
            cout << "The area of the circle is: " << area << endl;
        }
        else if (choice == 2) {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            double area = length * width;
            cout << "The area of the rectangle is: " << area << endl;
        }
        else if (choice == 3) {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            double area = base * height * 0.5;
            cout << "The area of the triangle is: " << area << endl;
        }
        else if (choice == 4) {
            cout << "Exiting the program." << endl;
        }
        else {
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }

        cout << endl; 

    } while (choice != 4); 

   return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
