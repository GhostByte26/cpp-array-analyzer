#include <iostream>

int main()
{
    // Array initialization and size restriction
    int max_size = 100;
    double nums[max_size];

    // Containers initialization
    double sum = 0;
    double avg = 0;
    bool itsValid = true;

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
    while (!itsValid)
    {
        // Data acquisition loop

        std::cout << "Please enter the number you would like to store: \n";

        for (int i = 0; i < count; i++)
        {
            std::cin >> nums[i];
            if (std::cin.fail())
            {
                // Clears the buffer
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "Invalid input. Please enter valid numbers: \n";
            }
            else
            {
                itsValid = true;
            }
            // Numbers calculations

            double min = nums[0];
            double max = nums[0];

            for (int i = 1; i < count; i++)
            {
                if (nums[i] < min)
                {
                    min = nums[i];
                }

                if (nums[i] > max)
                {
                    max = nums[i];
                }
            }
        }
    }
}