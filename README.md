# calloc()

## What is `calloc()`?

`calloc()` allocates memory for multiple elements.

Its arguments are:

```c
calloc(number_of_elements, size_of_each_element);
```

Example:

```c
int *numbers = calloc(5, sizeof(int));
```

This requests space for five integers.

---

## `malloc()` vs `calloc()`

The important difference for this section is initialization.

With:

```c
malloc(5 * sizeof(int));
```

the allocated memory is not initialized to zero.

With:

```c
calloc(5, sizeof(int));
```

the allocated bytes are initialized to zero.

For an `int` array, this means the initial integer values are zero.

---

## Checking the allocation

Just like `malloc()`:

```c
if (numbers == NULL)
{
    // Allocation failed
}
```

Never assume that an allocation always succeeds.

---

## Freeing the memory

When finished:

```c
free(numbers);
numbers = NULL;
```

---

## Key takeaway

`calloc()` is useful when you want space for multiple elements and want the allocated memory initialized to zero.

Think:

```text
malloc → allocate
calloc → allocate + zero-initialize
```
