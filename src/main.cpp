#include <iostream>
#include <cstdlib> // For system("cls") to clear the screen

using namespace std;

int main() {
    int choice;

    while (true) {
        system("cls"); // Clear the console screen (for Windows, use "clear" for Unix-based systems)
        cout << "Cookie Clicker Menu" << endl;
        cout << "1. Click the cookie" << endl;
        cout << "2. Upgrade cookie production" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Add code to handle clicking the cookie
                cout << "Cookie clicked!" << endl;
                break;
            case 2:
                // Add code to handle upgrading cookie production
                cout << "Production upgraded!" << endl;
                break;
            case 3:
                cout << "Goodbye!" << endl;
                return 0; // Exit the program
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        // Add a delay to give the user time to read the output
        system("pause"); // For Windows
        // For Unix-based systems, you can use cin.get() or a similar approach to wait for user input.
    }

    return 0;
}