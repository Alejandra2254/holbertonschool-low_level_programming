# 0x1C. C - Makefiles

## General 

### What are make, Makefiles

make is a Linux command, is a tool to help in order to compile, simplifying a lot this. That helps to compile the programs when there are a lot of file (.c or .h) distributed in diferent directories, we use to don't write long lines to compilation and commands and maybe forget someone. 
how works? has implicit rules that indicate how to get the excecutable, the rules are in make.rules file saved on operative system directory

Makefile is to do make more smart writing rules in a file, in specific with the objetive, instructions and some comments

### When, why and how to use Makefiles

* when the instructions are a lot to do in a environment variable
* The compilation is done using a single command
* Only the files that must be compiled are compiled
* Allows managing large programs with a lot of dependencies

How? 
1. comments, as in each code or program the comments are important to reflect the use
2. Objetive : depends , Is the name of the rule : These files are the depends of the rule
3. <tab> Instructions, Here the action defined by rule area will be taken only if files
file1 and file2 are available
4. Specials, as all or clean objetives without depends

```
#
 #Makefile for the geometry program
 #
 area.o: area.h area.c
 gcc -c area.c
 perimeter.o: perimeter.h perimeter.c
 gcc -c perimeter.c
 formatting.o: formatting.h formatting.c
 gcc -c formatting.c
 geometry: area.o perimeter.o formatting.o geometry.c
 gcc -o geometry area.o perimeter.o formatting.o geometry.c
```

### What are rules and how to set and use them

A rule appears in the makefile and says when and how to remake certain files, called the rule’s targets (most often only one per rule). It lists the other files that are the prerequisites of the target, and the recipe to use to create or update the target.

Here a rule example
```
foo.o : foo.c defs.h       # module for twiddling the frobs
        cc -c -g foo.c
```

### What are explicit and implicit rules
### What are the most common / useful rules
### What are variables and how to set and use them