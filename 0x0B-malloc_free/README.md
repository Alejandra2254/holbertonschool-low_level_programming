# Malloc and Free

## Automatic allocation

_ When you declare variables or when you use strings within double quotes, the program is taking care of all the memory allocation. You do not have to think about it.

## Dynamic allocation

### Malloc

_ The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.

### Free

_ When you are using malloc, you have to handle the memory yourself. This means that:

_ You need to keep track of all the addresses of the allocated memory (in a variable of type pointer)
_ You have to deallocate every memory space you previously allocated yourself. If you do not do this, then your program can run out of memory. Your operating system could even kill your program while it is running
