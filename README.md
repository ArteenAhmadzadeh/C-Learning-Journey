# Structs

## What I learned

A `struct` groups related variables, potentially of different types, into one object.

## Example

```c
struct Person
{
    char name[50];
    int age;
    double height;
};
```

A `Person` can then contain all three pieces of related information:

```c
struct Person person = {"Alex", 25, 1.75};
```

Members are accessed with the dot operator:

```c
person.name
person.age
person.height
```

## Key concepts

- Defining a structure
- Structure members
- Different data types in one structure
- Initializing structures
- Accessing members with `.`

## Key takeaway

Structures are useful when several pieces of information belong together but may have different data types.
