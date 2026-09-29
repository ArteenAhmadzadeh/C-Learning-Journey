<p align="center">
  <img src="./assets/cute_ass_banner.png" alt="C Learning Journey" width="100%">
</p>

<p align="center">
  <i>A little journey through C — one concept at a time. 🌱</i>
</p>

---
# 🌱 C Programming Journey

Welcome! 👋

This is my **C programming learning journey** — from writing my first `Hello, World!` to working with pointers, files, structures, dynamic memory, and complete little projects.

I made this repository while learning C myself, so it's not meant to be a perfect textbook or a collection of flawless code.

Instead, think of it as a **trail of breadcrumbs** 🥖

You can follow the same path, experiment with the code, break things, fix them, and hopefully understand a little more with every step.

> **The goal isn't to memorize C.**
>
> **The goal is to understand it by actually using it.**

---

## 🗺️ The Journey

Everything is organized in the order I learned it:

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

Each section builds on the ones before it, so **don't worry about knowing everything at once**.

One concept at a time. 🌱

---

# 01 — Basics 🧱

Every journey has to start somewhere.

This is where I started learning the basic building blocks of C.

### Topics

* Your first C program
* Variables
* Format specifiers
* Arithmetic operators
* User input

### What you'll learn

You'll get comfortable with things like:

```c
printf()
scanf()
```

You'll also learn how variables work, how different data types behave, and how to perform basic calculations.

Nothing fancy yet.

Just getting the foundation right. 🧱

---

# 02 — Mini Projects 🛠️

Now we stop *just* learning concepts and start using them.

### Projects

* 🛒 Shopping Cart
* 📖 Mad Libs Game
* ⚪ Circle Calculator
* 💰 Compound Interest Calculator
* 🏋️ Weight Converter
* 🌡️ Temperature Converter

These projects take the things learned in the first section and turn them into actual programs.

The idea is to go from:

```text
"I know what a variable is."
```

to:

```text
"Oh... I can actually build something with it."
```

And that's where things start getting fun. 😄

---

# 03 — Conditionals 🔀

Programs need to make decisions.

### Topics

* `if` statements
* `switch` statements
* Nested `if` statements
* Logical operators

You'll learn how to make your programs think in terms of:

```text
IF this happens
    do this

ELSE
    do something else
```

And you'll start combining conditions with:

```c
&&
||
!
```

This is where programs start feeling a little more alive.

---

# 04 — Functions 🧩

Things can get messy when everything lives inside `main()`.

Functions help fix that.

### Topics

* Functions
* Return values
* Variable scope
* Function prototypes

You'll learn how to split a program into smaller pieces that each have a job.

You'll also learn about:

* Passing information to functions
* Returning values
* Local vs global scope
* Function declarations and prototypes

Think of functions as little helpers you can call whenever you need them. 🤝

---

# 05 — Loops 🔁

Doing the same thing 100 times by hand?

Yeah... no thanks. 😂

### Topics

* `while` loops
* `for` loops
* `break`
* `continue`
* Nested loops

You'll learn how to repeat code efficiently and how to control when loops stop or continue.

```c
while
```

```c
for
```

and:

```c
break
continue
```

Nested loops will also introduce more interesting repetition patterns.

---

# 06 — Randomness & Games 🎮

Time to make things a little more unpredictable.

### Topics

* Random numbers

### Projects

* 🔢 Number Guessing Game
* 🗿📄✂️ Rock Paper Scissors

Here we'll combine things we've already learned:

```text
Conditionals
     +
Loops
     +
Functions
     +
User Input
     +
Randomness
     ↓
Actual Games 🎮
```

This section is where all those earlier concepts start working together.

---

# 07 — Larger Projects 💵

### Project

* 💵 Banking Program

Instead of making a tiny program that does one thing, this project brings multiple concepts together into one larger application.

It's a nice little reality check:

> "Okay... can I actually organize a program now?"

---

# 08 — Arrays & Strings 📦

Up until now, we've mostly been working with individual values.

Now we learn how to work with **collections of data**.

### Topics

* Arrays
* Arrays and user input
* 2D arrays
* Arrays of strings

### Project

* 💯 Quiz Game

You'll work with:

```text
1D arrays
2D arrays
strings
arrays of strings
```

And then put those ideas together in a quiz game.

---

# 09 — Advanced Language Features 🧠

Now we're moving into some of the more interesting parts of C.

### Topics

* Ternary operator
* `typedef`
* Enums
* Structures
* Arrays of structures

You'll learn different ways to make your code cleaner and organize information more naturally.

For example, instead of keeping separate variables like:

```text
name
age
email
```

you can group related information together using a `struct`.

This section is a nice bridge toward the lower-level side of C.

---

# 10 — Pointers 👀

Ah yes...

**Pointers.** 😅

### Topic

* Pointers

You'll learn about:

* Memory addresses
* The address-of operator `&`
* The dereference operator `*`
* Storing addresses
* Accessing data through pointers

This is one of the concepts that makes C feel very different from higher-level languages.

Don't rush this section.

Take your time, experiment, and make sure you understand what the pointer is actually pointing to.

---

# 11 — File Handling 📁

So far, most programs forget everything when they close.

Let's change that.

### Topics

* Writing files
* Reading files

You'll learn how to:

* Open files
* Write data
* Read data
* Work with file streams
* Close files properly

This is the beginning of making programs that can **save information and use it again later**.

---

# 12 — Dynamic Memory 🧠

This is where pointers really start becoming useful.

### Topics

* `malloc`
* `calloc`
* `realloc`

Instead of always deciding exactly how much memory a program needs beforehand, dynamic memory allows the program to request memory while it's running.

You'll learn how to:

```c
malloc()
calloc()
realloc()
free()
```

and, more importantly, **why and when** you'd use them.

This section can feel a little weird at first.

That's normal.

Memory management takes some getting used to. 🫠

---

# 13 — Final Projects ⌚

We made it.

### Project

* ⌚ Digital Clock

The final project brings several concepts from the journey together into one practical program.

The goal isn't simply:

```text
"Make it work."
```

It's:

```text
"Understand why it works."
```

By this point, you'll have seen enough C concepts that you can start looking at a program and recognizing the pieces that make it work.

---

# 📁 Repository Structure

Every section is separated into its own numbered directory.

For example:

```text
04-functions/
├── 01-functions/
├── 02-return-values/
├── 03-variable-scope/
└── 04-function-prototypes/
```

This keeps everything:

* 🧭 Easy to navigate
* 📚 Easy to follow
* 🔍 Easy to revisit
* 🛠️ Easy to experiment with
* 🌱 Easy to expand

Most topics also contain their own `README.md` explaining what that particular example is teaching.

---

# 🧭 A Small Piece of Advice

If you're following this journey yourself, **don't just copy the code.**

Type it.

Change it.

Break it.

Try to fix it.

Then break it again. 😂

If something doesn't make sense, stop and figure out *why* before moving on.

That's honestly where a lot of the learning happens.

---

# 🎯 The Goal

This repository isn't trying to contain the world's most beautiful C code.

It's here to document the process.

Starting from:

```c
printf("Hello, World!");
```

and eventually reaching:

```text
Pointers
Structures
Files
Dynamic Memory
Larger Projects
```

One concept at a time.

---

## 🧠 End Goal

By the end of this journey, I want to be comfortable **reading, writing, debugging, and understanding C programs** — including programs that work with memory, files, structures, and larger pieces of logic.

And if you're following along with me...

hopefully you end up understanding a little more C than you did when you started. ❤️

```text
Learn
  ↓
Build
  ↓
Break
  ↓
Debug
  ↓
Understand
  ↓
Repeat
  ↻
```

### 🌱 Happy coding!

**— One `printf()` at a time.**

