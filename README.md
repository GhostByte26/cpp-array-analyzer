📊 Array Analyzer
A simple C++ console program that allows the user to input a series of numbers and automatically calculates:
.Minimum value
.Maximum value
.Sum of all the numbers
.Average

This project helps practice input validation, array handling, loops and basic data analysis logic.

🔧 Features
.User chooses how many numbers they want to enter (1-100)
.Validates all inputs(No letters or symbols allowed)
.Stores the values in an array
.Calculates:
  .Minimum
  .Maximum
  .Sum
  .avarge
.Clear user input format

🧠 What I Learned
.How to validate numeric using std::cin.fall()
.How to collect values safetly into an array
.How to initialized Min and Max using the first element on the array
.How to loop through the array to compute
 .Sum
 .Min
 .Max
.How to design a program using a clear multi-step flow:
 1. Get quantity
 2. Validate
 3. Collect numbers
 4. Process data
 5. Display results

 🗂️ Program Flow
 1. Ask the user how many numbers they want to store.
 2. Validate the quantity (1-100)
 3. Prompt the user for each number
 4. Validate each number individually
 5. Compute Min, Max, sum
 6. Compute the average
 7.  Display the results

 📥 Example Input
 Please enter the amount of numbers you would like to store:
 5
 Please enter the number 1: 12.5
 Please enter the number 2: -3
 Please enter the number 3: 8
 Please enter the number 4: 20
 Please enter the number 5: 4.3

 📤 Example Output
 ---Results---
 Minimum: -3
 Maximum 20
 Sum 41.8
 average: 836

 🛠️ How to Compile
 Using g++
 g++ -std=c++17 -o ArrayAnalzer main.cpp
 ./ArrayAnalzer

 📌 Future Improvements (Optional Enhancements)
 .Count/positive and negative values
 .Count even/Odd values
 .Sort numbers(ascending / descending)
 .Find the Median
 .Allow the user to run the program again
 . Save result to a file


🧑‍💻 Author
Gilberto practicing C++ fundamentals and building SWE problem solving skills.