# Variable Scope

## What I learned

Variable scope determines where a variable can be accessed in a program.

This example demonstrates:

- A local variable inside `main()`
- A local variable inside `show_scope()`
- A global variable accessible by both functions

## Key concepts

### Local variables

A variable declared inside a function belongs to that function's scope.

### Global variables

A variable declared outside functions can be accessed by functions in the same source file, subject to C's linkage and declaration rules.

## Key takeaway

Where a variable is declared affects where it can be used. Keeping variables in the smallest useful scope generally makes programs easier to understand.
