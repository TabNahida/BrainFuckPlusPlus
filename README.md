# BrainFuckPlusPlus
A C++ BrainFuck compiler and some additional function to form BrainFuck++
## Introduction

### About Brain Fuck

**Brainfuck** is an **esoteric programming language** created in 1993 by Urban Müller¹. It is notable for its extreme minimalism, consisting of only eight simple commands, a data pointer, and an instruction pointer¹. The language is fully Turing complete, but it is not intended for practical use. Instead, it is designed to challenge and amuse programmers¹. 

The language's name is a reference to the slang term "brain fuck," which refers to things so complicated or unusual that they exceed the limits of one's understanding¹. Brainfuck requires one to break commands into microscopic steps¹. 

The language consists of eight commands. A brainfuck program is a sequence of these commands, possibly interspersed with other characters (which are ignored)¹. The commands are executed sequentially, with some exceptions: an instruction pointer begins at the first command, and each command it points to is executed, after which it normally moves forward to the next command¹. The program terminates when the instruction pointer moves past the last command¹.

Here are the eight commands in Brainfuck:

| **Command** | **Description** |
|-------------|-----------------|
| `>`         | Move the data pointer to the right |
| `<`         | Move the data pointer to the left |
| `+`         | Increment the value at the data pointer |
| `-`         | Decrement the value at the data pointer |
| `.`         | Output the value at the data pointer |
| `,`         | Input a value and store it at the data pointer |
| `[`         | Jump past the matching `]` if the value at the data pointer is zero |
| `]`         | Jump back to the matching `[` if the value at the data pointer is nonzero |

Brainfuck is not a commonly used programming language, but it is an interesting example of a Turing-complete language that can be used to explore the fundamentals of computer programmin.

### About This Brain Fuck Plus Plus

**Brain Fuck Plus Plus (BF++)** is a project that aims to improve the **Brainfuck** language by adding new features such as functions, working threads, and a virtual machine. The project also includes a binary execution compiler and support for multi-symbol strings. These features make the language more practical and useful for real-world development.

## Document

BF++ 01

| **Command** | **Description** |
|-------------|-----------------|
| `>`         | Move the data pointer to the right |
| `<`         | Move the data pointer to the left |
| `+`         | Increment the value at the data pointer |
| `-`         | Decrement the value at the data pointer |
| `.`         | Output the value at the data pointer |
| `,`         | Input a value and store it at the data pointer |
| `[`         | Jump past the matching `]` if the value at the data pointer is zero |
| `]`         | Jump back to the matching `[` if the value at the data pointer is nonzero |
| `{`         | Move the code poniter to left for the value at the data pointer step |
| `}`         | Move the code poniter to right for the value at the data pointer step |

## Dependence

C++ 17 or higher


