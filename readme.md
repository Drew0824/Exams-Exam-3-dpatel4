# Step 1

In main.cpp, add statements to output the following welcome message to the console:

    Input numbers to square. Input -1 to stop.

After the welcome message, create a loop that takes a user's input, displays the square of that number, and repeats indefinitely until the user inputs -1.
_Example input/output:_
```
5
Square is 25

2
Square is 4

8
Square is 64

-1
```

# Step 2

Modify the loop so it counts how many squares get calculated from the user's inputs. Also modify the loop so it will add up the sum of all the squares.

When the loop finishes, output the number of inputs squared and the sum of all the squares. Output for the example in Step 2 would be:
```
You entered 3 numbers.
The sum of all the squares is 93
```

# Step 3

If the value of the sum of the squares is less than the value of the constant MIN_VALUE defined towards the top of the program, have the program output the following message:
```
Warning: The sum of the squares is less than the minimum value.
```
Additionally, if the value of the sum of the squares is greater than the value of the constant MAX_VALUE defined towards the top of the program, have the program output the following message:
```
Warning: The sum of the squares is greater than the maximum value.
```

**Sample run for inputs 5, 2, 8, and -1:**
```
Input numbers to square. Input -1 to stop.
5
Square is 25

2
Square is 4

8
Square is 64

-1

You entered 3 numbers.
The sum of all the squares is 93 .
Warning: The sum of the squares is greater than the maximum value.
```

**After submitting the lab here, don't forget to copy the URL and paste it when submitting the assignment in Canvas.**