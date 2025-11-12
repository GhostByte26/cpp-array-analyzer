#include <iostream>

int main()
{
    // Array initialization and size restriction
    int max_size = 100;
    double nums[max_size];

    // Containers initialization
    double sum = 0;
    double avg = 0;

    // Input container
    int count = 0;

    // validation loop
    while (true)
    {

        std::cout << "Please enter the amount of numbers you would like to store: \n";
        std::cin >> count;
        // Clears the buffer
        std::cin.ignore();

        if (count > 0 && count <= max_size)
        {
            break;
        }
        else
        {
            std::cout << "Invalid range! Please enter a different amount:\n";
        }
    }
}