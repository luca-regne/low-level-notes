Some personal notes, codes and random stuff from my journey of learning C again :)

# Main roadmap

See [ROADMAP.md](ROADMAP.md) for the 6-month binary exploitation roadmap focused on becoming strong enough to reproduce N-days and start original mobile-native bug research.

# C warm-up notes

## Warm Up

Source: https://www.learn-c.org/

## Exercise 06

Calculate the factorial (multiplication of all items array[0] to array[9], inclusive), of the variable array.

## Exercise 07 - While loop

The array variable consists of a sequence of ten numbers. Inside the while loop, you must write two if conditions, which change the flow of the loop in the following manner (without changing the printf command):

If the current number which is about to printed is less than 5, don't print it.
If the current number which is about to printed is greater than 10, don't print it and stop the loop.
Notice that if you do not advance the iterator variable i and use the continue derivative, you will get stuck in an infinite loop.

## Exercise 08 - Functions

Write a function called print_big which receives one argument (an integer) and prints the line x is big (where x is the argument) if the argument given to the function is a number bigger than 10.

Important: Don't forget to add a newline character \n at the end of the printf string.

## Exercise 09 - Static

In this exercise, try to find the sum of some numbers by using the static keyword. Do not pass any variable representing the running total to the sum() function.

# Exercise 10 - Pointers

Create a pointer to the local variable n called pointer_to_n, and use it to increase the value of n by one.

# Exercise 11 - Structures

Define a new data structure, named "person", which contains a string (pointer to char) called name, and an integer called age.

# Exercise 12 - Function arguments by reference

Write a function called birthday, which adds one to the age of a person.

# Exercise 13