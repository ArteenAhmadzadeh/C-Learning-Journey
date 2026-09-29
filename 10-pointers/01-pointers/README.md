# Pointers

## What I learned

A pointer is a variable that stores the memory address of another variable.

The address-of operator `&` gets the address of a variable.

The dereference operator `*` accesses the value stored at the address held by a pointer.

## Example

```c
int number = 42;
int *ptr = &number;
```

Here:

```text
number = 42
ptr    = address of number
*ptr   = 42
```

Because `ptr` points to `number`, changing `*ptr` changes `number`.

## Key concepts

- Memory addresses
- Pointer variables
- Address-of operator `&`
- Dereference operator `*`
- Accessing data through pointers
- Modifying data through pointers

## Key takeaway

Pointers connect variables to their memory addresses and are fundamental to many important C features, including arrays, functions, and dynamic memory.
