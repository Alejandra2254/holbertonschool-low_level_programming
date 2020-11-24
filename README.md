# Titulo del proyecto

`simple_shell` is a project that consists of building a simple Unix shell replica, in order to obtain a deeper appreciation of how it works.

our `simple shell` will have the ability to:
1. Initialize: when executing our program, it remains in an infinite loop that prints a prompt and is always ready to take any command.
2. Interpret: which means we are going to read the command, find the executable file and run it, it is not about building every command. A simpler way to see it is with these three steps
    - Read: reads the command from standard input
    - Parse: Separate the command into a program and arguments.
    - Execute: executes the analyzed command.
3. Terminate - After your commands run, `simple_shell` executes shutdown commands, frees memory, and terminates.
