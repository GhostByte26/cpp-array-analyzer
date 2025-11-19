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

    // 1️⃣ Quantity Validation Loop
    while (true)
    {
        std::cout << "Please enter the amount of numbers you would like to store: \n";
        std::cin >> count;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Please enter numeric values only.\n";
            continue;
        }

        if (count > 0 && count <= max_size)
        {
            break;
        }
        else
        {
            std::cout << "Invalid range! Please enter a number between 1 and " << max_size << ":\n";
        }
    }

    // 2️⃣ Data Acquisition Loop (collect numbers)
    for (int i = 0; i < count; i++)
    {
        while (true) // validation for each number
        {
            std::cout << "Please enter number " << i + 1 << ": ";
            std::cin >> nums[i];

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "Invalid input. Please enter a valid number.\n";
            }
            else
            {
                break; // number is valid
            }
        }
    }

    // 3️⃣ Min/Max Initialization
    double min = nums[0];
    double max = nums[0];

    // 4️⃣ Calculations Loop (sum, min, max)
    for (int i = 0; i < count; i++)
    {
        sum += nums[i];

        if (nums[i] < min)
        {
            min = nums[i];
        }

        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

    // 5️⃣ Compute average
    avg = sum / count;

    // 6️⃣ Display results
    std::cout << "\n--- Results ---\n";
    std::cout << "Minimum: " << min << "\n";
    std::cout << "Maximum: " << max << "\n";
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Average: " << avg << "\n";

    return 0;
}
