# 0x12. C - Singly linked lists

## Mandatory Tasks

1. `Task 0` - function that prints all the elements of a `list_t` list.

	* Prototype: `size_t print_list(const list_t *h);`
	* Return: the number of nodes.
	* If `str` is `NULL`, print `[0] (nil)`.

2. `Task 1` - function that returns the number of elements in a linked `list_t` list.
	
	* Prototype : `size_t list_len(const list_t *h);`.

3. `Task 2` -  a function that adds a new node at the beginning of a `list_t` list.

	* Prototype: `list_t *add_node(list_t **head, const char *str);`
	* Return: the address of the new element, or `NULL` if it failed
	* You are allowed to use `strdup`.
4. `Task 3` - function that adds a new node at end of a `list_t` list.

	* Prototype: `list_t *add_node_end(list_t **head, const char *str);`

5. `Task 4` - a function that frees a `list_t` list.
	
	* Prototype: `oid free_list(list_t *head);`

## Advanced Tasks

6. `Task 100` - function that prints `You're beat! and yet, you must allow,\nI
bore my house upon my back!\n` before the `main` function is executed.
	* You are allowed to use the `printf` function

7. `Task 101` - 64-bit program in assembly that prints `Hello, Holberton` , followed by a new line.

	* You are only allowed to use the `printf` function
	* You are not allowed to use interrupts
	* Your program will be compiled using `nasm` and `gcc:`
