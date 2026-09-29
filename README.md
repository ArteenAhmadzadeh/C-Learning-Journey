# realloc()

## What is `realloc()`?

`realloc()` changes the size of an existing dynamically allocated memory block.

For example, an allocation for three integers can be resized to hold six:

```c
int *temp = realloc(numbers, 6 * sizeof(int));
```

---

## Why use a temporary pointer?

Avoid writing:

```c
numbers = realloc(numbers, new_size);
```

without checking the result.

If `realloc()` fails, it returns `NULL`. Assigning that directly to `numbers` would lose the original pointer and make the original allocation difficult to release.

A safer pattern is:

```c
int *temp = realloc(numbers, new_size);

if (temp != NULL)
{
    numbers = temp;
}
```

If the reallocation fails, the original `numbers` pointer is still available.

---

## What can happen during `realloc()`?

The resized block may remain at the same memory address, or the allocation may be moved to a different address.

Your program should therefore continue using the pointer returned by `realloc()` rather than assuming the old address remains valid.

---

## Growing an array

The example starts with:

```text
10 20 30
```

Then it resizes the allocation and produces:

```text
10 20 30 40 50 60
```

---

## Freeing the final allocation

When finished:

```c
free(numbers);
numbers = NULL;
```

---

## Key takeaway

A safe resizing pattern is:

```text
existing allocation
        ↓
     realloc()
        ↓
 store result in temporary pointer
        ↓
   check for NULL
     ↙       ↘
 failure     success
   ↓            ↓
keep old     update pointer
pointer          ↓
              use memory
                  ↓
                free()
```

`realloc()` is one of the main tools that makes dynamically sized data structures possible in C.
