# Holberton - Simple Shell

### Table of Contents

- [Description](#description)
- [Files](#files)
- [Commands](#commands)
- [Use](#use)
- [Examples](#examples)
- [Resources](#resources)
- [Credits](#credits)

## Description

This is a simple recreation of a Unix command interpreter, capable of running basic commands. It mirrors a `sh` in a straightforward manner.

## Files

- `README.md` - Contains a description of the project.
- `header.h` - Header file with function prototypes and external variable declaration.
- `main.c` - Main program file with the implementation of the shell.
- `create_tokens.c` - File containing the function to tokenize input strings.
- `fork_exe.c` - File containing the function to fork a child process and execute a command.
- `free_iterator.c` - File containing the function to free memory allocated for arrays.
- `no_command.c` - File containing the function to print an error message when a command is not found.
- `no_line.c` - File containing the function to remove newline characters from strings.
- `paths.c` - File containing the function to search for a command in predefined paths and execute it.
- `some_space.c` - File containing the function to handle white spaces in the input.

## Commands

### Some of the commands our shell can run:

- cat - prints a file's content
- chmod - change a file's properties (read, write, or execute permissions)
- cp - copy a file from one location to another
- echo - prints to stdin or sends text to a file
- ls (-a, -l, -r, and others) - list files in the current directory
- mv - move or rename a file
- pwd - prints the current working directory
- rm (-r) - delete files
- touch - create a file

## Use 

In the terminal interactive mode:

```bash
./hsh
/bin/ls
ls
```

In the terminal non-interactively (runs commands from outside our shell):

```bash
echo "ls" | ./hsh
echo "pwd" | ./hsh
```


## Examples

```bash
$ /bin/ls
get_path.c  main.h    README.md         simple_shell    stest
hsh         my_exe.c  remove_newline.c  simple_shell.c  tokens_to_args.c
$ exit
```

```bash
$ pwd
/home/user/holbertonschool-simple_shell
$ ./hsh
$ pwd
/home/user/holbertonschool-simple_shell
$ exit
```

```bash
$ pwd
/home/user/holbertonschool-simple_shell
$ echo "pwd" | ./hsh
/home/user/holbertonschool-simple_shell
```

## Resources

- [Everything you need to know to start coding your own shell](https://intranet.hbtn.io/concepts/900)
- [Ken Thompson](https://en.wikipedia.org/wiki/Ken_Thompson)
- [Thompson Shell](https://en.wikipedia.org/wiki/Thompson_shell)
- [Unix shell](https://en.wikipedia.org/wiki/Unix_shell)


## Credits

- [Luis A. Santiago Cosme](https://github.com/lusanco)
