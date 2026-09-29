# malloc()

## What is `malloc()`?

`malloc()` stands for **memory allocation**.

It requests a block of memory of a specified size while the program is running.

```c
int *numbers = malloc(5 * sizeof(int));
```

This requests enough memory for five `int` values.

`malloc()` returns a pointer to the allocated memory. If the allocation cannot be performed, it returns `NULL`.

---

## Why use `sizeof`?

Instead of assuming how many bytes an `int` uses:

```c
malloc(20);
```

we write:

```c
malloc(5 * sizeof(int));
```

This asks for enough space for five integers regardless of the platform's size for `int`.

---

## Always check the result

```c
if (numbers == NULL)
{
    printf("Memory allocation failed.\n");
    return 1;
}
```

Using a `NULL` pointer as if it contained valid allocated memory is an error.

---

## Using the allocation

Once allocated, the memory can be accessed like an array:

```c
numbers[0] = 10;
numbers[1] = 20;
```

The pointer returned by `malloc()` points to the first element of the allocated block.

---

## Freeing the memory

When the allocation is no longer needed:

```c
free(numbers);
numbers = NULL;
```

`free()` releases the allocation.

Setting the pointer to `NULL` afterward is a useful habit because it makes accidental reuse easier to detect.

---

## Key takeaway

The basic `malloc()` pattern is:

```text
malloc()
   ↓
check for NULL
   ↓
use memory
   ↓
free()
```

This is the foundation of dynamic memory management in C.
