--- ArgumentCounter.c ---

This program counts strings numbers flags and keyphrases, separates them to an arrays and then prints the arrays.

--- task23.c ---
This program recognizes some flags.

***examples:

input: ./task23.o --greet Alice
output: Greetings, Alice!

input: ./task23.o --add 2 3
output: Sum = 5

input: ./task23.o --add 2
output: Not enough arguments...

--- task31.c ---

This program is capable of summing, substracting, multiplying and dividing.

***examples:

input: ./task31.c 2 + 3
output: Result = 5

input: ./task31.c 2 x 3
output: Result = 6

input: ./task31.c 10 aboba 10
output: Wrong input...

--- task32.c ---

This program calculates sum of all "number" arguments.

***examples:

input: ./task32.o 55 30 1
output: Sum of all number = 86

input: ./task32.o 3 three 3
output: three is not a number!
        Sum of all number = 6

--- task33.c ---

An extension of task3.2. This program also calculates average of all numbers, minimum of all numbers and maximum of all numbers.

***examples:

input: ./task33.o 4 20 three 5
output: three is not a number!
        Sum of all number = 29
        Average = 9
        Minimum = 4
        Maximum = 20

--- task41.c ---

This program counts characters of each word as well as it counts all characters in total.

***examples:

input: ./task41.o word hello
output: 
    word has 4 characters
    hello has 5 characters
    All characters: 9

--- task43.c ---

This program finds word that user entered first in the rest of text.

***examples:

input: ./task43.o cat abobus is a very nice cat I love cat
output: I found 'cat' at 7-th position
        I found 'cat' at 10-th position

--- task51.c ---

This program recognises some key words and flags and also checks if files open correctly.

--- task52.c ---

This program recognises some keywords and flags, its also capable of opening files and can set a number value.

--- task54.c ---

This program can change base values of variables

--- task61.c ---

This program can open and read an existing files by taking their name from an argument.