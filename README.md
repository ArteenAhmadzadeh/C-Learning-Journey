# Function Prototypes

## What I learned

A function prototype declares a function before its actual definition.

This allows `main()` to call a function even when the function's implementation appears later in the file.

## Key concepts

- Function declarations
- Function definitions
- Return types
- Parameter types
- Matching prototypes with definitions

## Example

```c
int multiply(int a, int b);
```

This tells the compiler that a function named `multiply` exists, takes two `int` arguments, and returns an `int`.

## Key takeaway

Function prototypes make the structure of a C program clearer and allow functions to be defined after the code that calls them.
