# C Programming Journey

A structured journey through **C programming**, from writing my first `Hello, World!` program to working with pointers, files, structures, and dynamic memory.

This repository contains my code, experiments, exercises, and small projects as I learn C step by step.

> **Goal:** Understand the fundamentals of C by actually writing programs, breaking things, fixing them, and gradually building more complex projects.

---

## 📚 What I'm Learning

This journey is organized into numbered sections so that each topic builds on the previous one.

```text
C Programming
│
├── 01. Basics
├── 02. Mini Projects
├── 03. Conditionals
├── 04. Functions
├── 05. Loops
├── 06. Randomness & Games
├── 07. Larger Projects
├── 08. Arrays & Strings
├── 09. Advanced Language Features
├── 10. Pointers
├── 11. File Handling
├── 12. Dynamic Memory
└── 13. Final Projects
```

---

# 01 — Basics

The foundation of C programming.

### Topics

* Your first C program
* Variables
* Format specifiers
* Arithmetic operators
* User input

### What I'll learn

This section covers the basic syntax of C and how a simple C program communicates with the user.

I'll learn how to:

* Create and run a C program
* Declare and use variables
* Work with different data types
* Display information using `printf`
* Read input using `scanf`
* Perform basic mathematical operations

---

# 02 — Mini Projects

Instead of only learning concepts, I'll use them to build small programs.

### Projects

* 🛒 Shopping Cart
* 📖 Mad Libs Game
* ⚪ Circle Calculator
* 💰 Compound Interest Calculator
* 🏋 Weight Converter
* 🌡 Temperature Converter

### What I'll learn

These projects combine the fundamentals into complete, interactive programs.

The goal is to move from:

```text
"I know what a variable is"
```

to:

```text
"I can actually use variables to build something."
```

---

# 03 — Conditionals

Learning how programs make decisions.

### Topics

* `if` statements
* `switch` statements
* Nested `if` statements
* Logical operators

### What I'll learn

Programs aren't useful if they can only execute the same instructions every time.

This section teaches how to create logic such as:

```text
IF this happens
    do this

ELSE
    do something else
```

I'll also learn how to combine multiple conditions using logical operators such as:

* `&&`
* `||`
* `!`

---

# 04 — Functions

Learning how to break large programs into smaller, reusable pieces.

### Topics

* Functions
* Return values
* Variable scope
* Function prototypes

### What I'll learn

Functions allow me to organize code instead of putting everything inside `main()`.

I'll learn:

* How to create functions
* How to pass information to functions
* How functions return values
* Local vs global scope
* Function declarations and prototypes

---

# 05 — Loops

Learning how to repeat code efficiently.

### Topics

* `while` loops
* `for` loops
* `break`
* `continue`
* Nested loops

### What I'll learn

Loops allow programs to repeat instructions without manually writing the same code over and over.

I'll learn when to use:

```c
while
```

```c
for
```

and how to control loops using:

```c
break
continue
```

Nested loops will also introduce more complex repetition patterns.

---

# 06 — Randomness & Games

Using randomness and everything learned so far to create interactive programs.

### Topics

* Random numbers

### Projects

* ↕ Number Guessing Game
* 🗿📄✂ Rock Paper Scissors

### What I'll learn

I'll learn how to generate random numbers and use them together with:

* Conditionals
* Loops
* Functions
* User input

This section turns the concepts I've learned into actual games.

---

# 07 — Larger Projects

### Project

* 💵 Banking Program

The banking program combines many previously learned concepts into one larger application.

It introduces the idea of managing multiple operations inside a single program rather than solving one small problem at a time.

---

# 08 — Arrays & Strings

Learning how to store and work with collections of data.

### Topics

* Arrays
* Arrays and user input
* 2D arrays
* Arrays of strings

### Project

* 💯 Quiz Game

### What I'll learn

Instead of storing one value at a time, arrays allow multiple values to be stored together.

I'll learn how to work with:

```text
1D arrays
2D arrays
strings
arrays of strings
```

I'll then apply these concepts by creating a quiz game.

---

# 09 — Advanced Language Features

Moving beyond the basic C syntax.

### Topics

* Ternary operator
* `typedef`
* Enums
* Structures
* Arrays of structures

### What I'll learn

This section introduces more powerful ways to represent and organize data.

I'll learn how to:

* Write shorter conditional expressions
* Create aliases for data types
* Create enumerated values
* Group different pieces of data using `struct`
* Store multiple structures inside arrays

For example, instead of managing separate variables for a person:

```text
name
age
email
```

I can combine them into one structure.

---

# 10 — Pointers

### Topic

* Pointers

Pointers are one of the most important concepts in C.

I'll learn about:

* Memory addresses
* The address-of operator `&`
* The dereference operator `*`
* Storing addresses
* Accessing data through pointers

This section is an important step toward understanding how C interacts directly with memory.

---

# 11 — File Handling

Learning how programs can interact with files.

### Topics

* Writing files
* Reading files

### What I'll learn

Until this point, most programs only keep information while they're running.

File handling allows programs to save information and retrieve it later.

I'll learn how to:

* Open files
* Write data
* Read data
* Work with file streams
* Close files properly

---

# 12 — Dynamic Memory

Learning how to allocate and manage memory while a program is running.

### Topics

* `malloc`
* `calloc`
* `realloc`

### What I'll learn

I'll learn how programs can request memory dynamically instead of always deciding the required amount beforehand.

This section builds on the pointer knowledge from the previous section.

I'll explore:

```c
malloc()
calloc()
realloc()
```

and understand how dynamically allocated memory can be managed.

---

# 13 — Final Projects

The final stage is about combining everything together.

### Project

* ⌚ Digital Clock

The digital clock brings together multiple concepts from the journey and serves as a larger practical project.

The goal isn't just to finish the project.

The goal is to understand **why the code works** and which concepts from the previous sections are being used.

---

# 🗺️ Learning Roadmap

```text
01  Basics
 ↓
02  Mini Projects
 ↓
03  Conditionals
 ↓
04  Functions
 ↓
05  Loops
 ↓
06  Randomness & Games
 ↓
07  Larger Projects
 ↓
08  Arrays & Strings
 ↓
09  Advanced Language Features
 ↓
10  Pointers
 ↓
11  File Handling
 ↓
12  Dynamic Memory
 ↓
13  Final Projects
```

---

# 📁 Repository Philosophy

Every topic is separated into its own numbered directory.

For example:

```text
04-functions/
├── 01-functions/
├── 02-return-values/
├── 03-variable-scope/
└── 04-function-prototypes/
```

This makes the repository:

* Easy to navigate
* Easy to follow chronologically
* Easy to revisit later
* Easy to expand with new topics
* Useful as a personal reference

Each project should contain its own source code and, when useful, a small explanation of what the program does and which concepts it demonstrates.

---

# 🎯 Goal

The purpose of this repository isn't to create the world's most perfect C code.

It's to document the process of learning C.

From:

```c
printf("Hello, World!");
```

to:

```text
Pointers
Structures
Files
Dynamic Memory
Larger Projects
```

One concept at a time.

---

## 🚧 Progress

* [ ] 01 — Basics
* [ ] 02 — Mini Projects
* [ ] 03 — Conditionals
* [ ] 04 — Functions
* [ ] 05 — Loops
* [ ] 06 — Randomness & Games
* [ ] 07 — Larger Projects
* [ ] 08 — Arrays & Strings
* [ ] 09 — Advanced Language Features
* [ ] 10 — Pointers
* [ ] 11 — File Handling
* [ ] 12 — Dynamic Memory
* [ ] 13 — Final Projects

---

## 🧠 End Goal

By the end of this journey, I want to be comfortable reading, writing, debugging, and understanding C programs — including programs that work directly with memory and files.

**Learn → Build → Break → Debug → Understand → Repeat.**
