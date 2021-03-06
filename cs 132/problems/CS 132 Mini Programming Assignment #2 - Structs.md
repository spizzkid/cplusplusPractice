 ### Part 1)  Write a program that stores the following data about a football/soccer player in a structure.

Player's Name - string
Players Jersey Number - int 
Number of goals scored this season - int
 ### Part 2)

The program should then create an array of 5 of those structs with the following data.

- The names are
  - Pele number 5 with 16 goals
  - Lionel number 53 with 14 goals
  - Diego number 25 with 25 goals
  - Johan number 12 with 2 goals
  - Zinedine number 88 with 32 goals
### Part 3)

Then create a function that will take an individual Player struct and output the data for the player in an organized way.   Something like:
```diff
+ Player Name :  Franz 
+ Number : 12
+ Number of goals this season : 14
```
### Part 4)

Then create a function that accepts the array of structs, and finds/returns the sum of the for the season and the main program prints it out.
```diff
+ The number of goals for the team is : 102
```
Summary)

You main program should

- Create the struct
- Create the array of structs
- Fill the array
- Use a loop to print all the members of the team using the first created function.
- Print out the total number of goals using the second created function.
