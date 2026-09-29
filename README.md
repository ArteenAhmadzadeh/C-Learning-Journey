# Random Numbers

## What I learned

C can generate pseudo-random numbers using functions from the standard library.

This example uses:

- `rand()` to generate a pseudo-random integer.
- `srand()` to initialize the random-number generator.
- `time(NULL)` to provide a changing seed.

## Example

```c
srand((unsigned int)time(NULL));

int number = rand() % 100 + 1;
```

The expression `rand() % 100 + 1` produces a value from `1` through `100`.

## Key concepts

- `rand()`
- `srand()`
- `time()`
- The modulo operator `%`
- Creating a random range

## Key takeaway

C's basic random-number functions generate pseudo-random values. Seeding with a changing value such as the current time makes repeated program runs produce different sequences in typical use.
