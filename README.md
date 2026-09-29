# typedef

## What I learned

`typedef` creates an alias for an existing type.

## Example

```c
typedef unsigned int uint;
```

This allows:

```c
uint age = 25;
```

instead of:

```c
unsigned int age = 25;
```

`typedef` can also be used with structures:

```c
typedef struct
{
    int x;
    int y;
} Point;
```

Then a variable can be declared simply as:

```c
Point position;
```

## Key concepts

- Type aliases
- `typedef`
- Cleaner type declarations
- Using `typedef` with `struct`

## Key takeaway

`typedef` does not create a fundamentally new data type; it gives an existing type another name.
