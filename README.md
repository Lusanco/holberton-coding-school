# *C - Stacks, Queues - LIFO, FIFO*

### Table of contents

- [Table of contents](#table-of-contents)
- [Description](#description)
- [Files](#files)
- [Resources](#resources)
- [Credits](#credits)

## Description

*Monty 0.98* is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for *Monty ByteCodes* files.

## Files

| Files | Description |
|:-----:|:------------|
|        |                                  |
| `README.md`   | File that contains project description. |
| `monty.h`   | Header file containing function prototypes and struct(s). |
| `add.c`       | Function that adds the top two elements of the stack. |
| `cleanup.c`   | Function that frees memory before exit. |
| `command.c`    | Function that finds and executes the corresponding function. |
| `div_func.c`   | Function that divides the second top element of the stack by the top element of the stack. |
| `free_stack.c`    | Function that frees the stack. |
| `main.c`    | Main function. |
| `mod_func.c`   | Function that returns the rest of the division of the second top element of the stack by the top element of the stack. |
| `mul_func.c`       | Function that multiplies the second top element if the stack with the top element of the stack. |
| `nop.c`   | Function  for opcode nop that does nothing. |
| `pall.c`    | Function that prints all the values on the stack starting from the top of the stack. |
| `pint.c`   | Function that prints value on top of stack. |
| `pop.c`    | Function that removes the top element of the stack. |
| `push.c`    | Function that pushes an element to the stack. |
| `sub.c`    | Function that subtracts the top element of the stack from the second top element from stack. |
| `swap.c`    | Function that swaps the top 2 elements of stack. |


*`main.c` files not included.*
## Resources

- *[Difference between Stack and Queue Data Structures](https://www.geeksforgeeks.org/difference-between-stack-and-queue-data-structures/)*
- *[How do I use extern to share variables between source files in C?](https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files)*

## Credits

- *[Jonathan Pérez](https://github.com/prodjohnper)*
- *[Luis Santiago](https://github.com/Lusanco)*
