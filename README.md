# Titulo del proyecto

`Simple_shell` is a project that consists of building a simple Unix shell replica, in order to obtain a deeper appreciation of how it works. Also, as specific objectives `simple_shell` is programmed in c language, based on everything learned so far and applying linux concepts as well.

Our `simple_shell` will have the ability to:
1. Initialize: When executing our program, it remains in an infinite loop that prints a prompt and is always ready to take any command.
2. Interpret: Which means we are going to read the command, find the executable file and run it, it is not about building every command. A simpler way to see it is with these three steps
    - Read: reads the command from standard input
    - Parse: Separate the command into a program and arguments.
    - Execute: executes the analyzed command.
3. Terminate - After your commands run, `simple_shell` executes shutdown commands, frees memory, and terminates.

## File Contents
The repository contains the following files:

|   **File**   |   **Description**   |
| -------------- | --------------------- |
|[AUTHORS](./AUTHORS) | Contains info about authors of the project |
|[man_1_simple_shell](./man_1_simple_shell) | Man page for the created shell |
|[shell.h](./shell.h)| Header file containing all function prototypes and struct declarations |
|[main.c](./main.c) | The main function |
|[functions.c](./functions.c) | `_strdup` function, `call_strtok` function, `execute` function,  `find_path` function and `str_concat` function |
|[functions1.c](./functions1.c)| `_getenv` function, `_getposition` function, `_cexit` function,  `_atoi` function and `delspace` function |
|[functions2.c](./functions2.c)| `message_exit` function, `built_in` function, `_cenv` function,  `free_stuff` function and `argset` function |
|[functions3.c](./functions3.c)| `_unsetenv` function, `argunset` function and `handle_sigint` function |

