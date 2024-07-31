#include <iostream>
#include <string>

int main() {
    // Creating and initializing strings
    std::string str1 = "Hello";
    std::string str2 = "World";

    // Concatenating strings
    std::string combined = str1 + " " + str2;

    // Displaying the combined string
    std::cout << "Combined string: " << combined << std::endl;

    // Finding the length of the string
    std::cout << "Length of combined string: " << combined.length() << std::endl;

    // Accessing individual characters
    std::cout << "First character of combined string: " << combined[0] << std::e
