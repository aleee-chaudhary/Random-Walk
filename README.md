# C-Task
Random Walk in C 
Write a program that generates a “random walk” across 10x10 array. The array will contain characters (all '.' initially). The program must randomly “walk” from element to element, always going up, down, left, right by one element. The elements visited by the program will be labelled with letters A through Z, in the order visited. 
A . . . . T U V . .
B . . . . S . W . .
C . . P Q R . X Y Z
D E N O . . . . . .
. F M L K . . . . .
. G H I J . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
Hint: Use srand and rand to generate random numbers. After generating a number, look at its remainder when divided by 4. There are four possible values for remainder –0,1,2,3 indicating the direction of the next move, Before performing a move, check that (a) it won’t go outside the array, and (b) it doesn’t take us to an element that already has a letter assigned. If either condition is violated, try moving in another direction. If all possible directions are blocked, the program must terminate. See an example of premature termination:
A B . . . . . . . .
F C . . . . . . . .
E D . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
