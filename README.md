# Arrays of Structs

## What I learned

An array of structs stores multiple records where every element has the same structure.

## Example

```c
struct Student students[] =
{
    {"Alice", 20, 91.5},
    {"Bob", 21, 84.0},
    {"Charlie", 19, 95.0}
};
```

Each array element is a complete `struct Student`.

Members can be accessed using:

```c
students[i].name
students[i].age
students[i].grade
```

## Key concepts

- Arrays
- Structures
- Combining arrays with structs
- Looping through structured records
- Accessing structure members through array indexes

## Key takeaway

Arrays of structs are useful for representing collections of related records, such as students, products, employees, or accounts.
