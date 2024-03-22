#include <iostream>
#include <string>

int main() {
    // Create an array to store 5 names
    std::string names[5] = {"John", "Alice", "Bob", "Terry", "Eva"};

    // Display all names on the screen
    std::cout << "All names in the array:\n";
    int i = 0;
    while (i < 5) {
        std::cout << names[i] << "\n";
        i++;
    }

    // Search the array for "Terry"
    std::string searchTerm = "Terry";
    bool found = false;
    i = 0;  // Resetting i for search

    while (i < 5) {
        if (names[i] == searchTerm) {
            found = true;
            break;
        }
        i++;
    }

    // Display a notice if "Terry" is found
    if (found) {
        std::cout << "\nNotice: Terry is in the array!\n";
    } else {
        std::cout << "\nNotice: Terry is not in the array.\n";
    }

    return 0;
}


