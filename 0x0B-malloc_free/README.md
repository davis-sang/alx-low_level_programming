# 0x0B. C - malloc, free


* The malloc function is used to allocate a certain amount of memory
 during the execution of a program. It will request a block of
 memory from the heap. 
* If the request is granted, the operating system will reserve 
the requested amount of memory and `malloc will` return a pointer 
to the reserved space.
* When the amount of memory is not needed anymore, you must 
return it to the operating system by calling the function `free`.

## Mandatory Tasks

1. `Task 0 :` - function that creates an array of chars and initializes it 
with a specific char.

2. `Task 1 :` - function that returns a pointer to a newly allocated 
space in memory, which contains a copy of the string given as a parameter.
implementation of `strdup` function.

3. `Task 2 :` - function that concatenates two strings.

4. `Task 3 :` - function that returns a pointer to a 2 dimensional 
array of integers.

5. `Task 4 :` - function that frees a 2 dimensional grid previously created by your `alloc_grid` function.

## Advanced Tasks

6. `Task 5 :` - function that concatenates all the arguments of 
your program.

7. `Task 6 :` - function that splits a string into words.
