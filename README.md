Four different sorting algorithms :
 	- Selection sort -> We put the smallest value at the beginning of the list
 	- Bubble sort -> The values are taken two per two and the highest is put at the end of the list
 	- Insertion sort -> We go trought the list in order. We take the first value and we compare it to the second, then with the third and like that until the end of the list.
 	- Merge algorithm -> It divide the the list in two sublist using a recursive method until there is only one element. Then, the singles elements are assemble two per two, in numerical order, then continue unitl, all the elements 				are assemble together, odered in the numerical

What is the Big O notation, and how to evaluate the time complexity of an algorithm :
 	The big O notation is a mathematical notation that can give the approximate size of a function.
 	We can evaluate the time complexity of an algorithm with how many numbers of operation an algorithm performed.

How to select the best sorting algorithm for a given input :
We have to choose the algorithm that need the less operations depending on the input that is given.

What is a stable sorting algorithm :
A stable sorting algorithm is the fact that when we sort a list, we will try to change the less possible to be more efficient and do less operations.


Big O Notation:
O(1) -> If the function only need one execution, operation. It will always be the same run time.

O(n) -> There are n number of operation depending on how many the user put into the input. It's a linear search.

O(log n) -> Like O(n), it's a linear search but we search only on half the input and it keep decreasing on iteration. When we use recursion.

O(n^2) -> Search with a nested loop

O(2^n) -> We put n against himself

O(n log n) -> It's like O(log n) but we multiply n by himself, reducing considerably the operations needed.
 
O(n!) ->


!!Requirements!!

. Allowed editors: vi, vim, emacs
. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
. All your files should end with a new line
. A README.md file, at the root of the folder of the project, is mandatory
. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
. You are not allowed to use global variables
. No more than 5 functions per file
. Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
. The prototypes of all your functions should be included in your header file called sort.h
. Don’t forget to push your header file
. All your header files should be include guarded
. A list/array does not need to be sorted if its size is less than 2.
