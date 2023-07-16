# CodSoft
Virtual Intern at CodSoft:

"The 4-week virtual internship at CodeSoft offers hands-on experience in C++ programming. Interns work on various projects, utilizing the company's C++ based software, gaining valuable skills in software development and virtual interface design."

# Task1: Number Guessig Game:
1.Initialize the random number generator and generate a random number between 1 and 100.
2.Prompt the user to enter a guess and compare it with the random number.
3.Provide feedback to the user if the guess is too high or too low.
4.Repeat steps 2 and 3 until the guess matches the random number, then display the number of attempts it took the user to guess correctly.

# Task2: Simple Calculator:
1. User input:
   - Prompt the user to enter two numbers and an operation.
   - Read the input and store them in `value1`, `value2`, and `operation`.

2. Perform the operation:
   - Declare a variable `output` to store the result.
   - Use a `switch` statement to perform the operation based on the value of `operation`.
   - Add, subtract, multiply, or divide `value1` and `value2` based on the chosen operation.
   - Store the result in `output`.

3. Display the result:
   - Output the result using `cout` if the operation is valid.
   - If the operation is division and the second number is zero, display an error message.

4. End the program:
   - Return 0 to indicate successful program execution.
  
# Task3: Student Grading System:
1. Struct Definition: A struct named `GradeSystem` is defined to store student information. It has two members, a `name` of type `string` to store the student's name, and a `scores` vector of type `int` to store the student's scores.

2. User Input and Storage: The program prompts the user to enter student names and scores. It uses a loop to allow multiple students' information to be entered. Each student's name and scores are stored in an instance of the `GradeSystem` struct, and this instance is added to a vector called `group_students`.

3. Result Display: After all the student information is entered, the program iterates over the `group_students` vector. For each student, it calculates the average, highest, and lowest scores by iterating over the `scores` vector and using appropriate functions such as `max` and `min`. The results, along with the student's name, are displayed to the user.

4. Program Termination: Once all the student information has been displayed, the program terminates.
