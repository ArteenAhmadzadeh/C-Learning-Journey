# Enums

## What I learned

An enumeration (`enum`) lets a program define a set of named integer constants.

## Example

```c
enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};
```

By default, the first enumerator has value `0`, and subsequent enumerators increase by one.

## Key concepts

- `enum`
- Named constants
- Integer values behind enumerators
- Using enums to represent a fixed set of choices

## Key takeaway

Enums can make code easier to read by replacing unexplained integer values with meaningful names.
