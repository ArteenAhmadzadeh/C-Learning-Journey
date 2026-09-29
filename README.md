# Nested Loops

## What I learned

A nested loop is a loop placed inside another loop.

In this example:

- The outer loop controls the rows.
- The inner loop controls the columns.

## Example

```c
for (int row = 1; row <= 3; row++)
{
    for (int column = 1; column <= 5; column++)
    {
        printf("* ");
    }

    printf("\n");
}
```

This produces a 3 × 5 pattern.

## Key concepts

- Outer loops
- Inner loops
- Loop nesting
- Working with rows and columns
- Building repeated patterns

## Key takeaway

Nested loops are useful when repetition has more than one dimension, such as grids, tables, patterns, and later, 2D arrays.
