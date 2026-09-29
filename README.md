# Arrays of Strings

## What I learned

In C, a string is stored as a sequence of characters ending with a null character.

An array of strings can be represented using a two-dimensional character array.

## Example

```c
const char names[][20] =
{
    "Alice",
    "Bob",
    "Charlie",
    "Diana"
};
```

Each row represents one string, while the second dimension provides space for the characters.

## Key concepts

- Strings as character arrays
- Two-dimensional character arrays
- String indexing
- Looping through multiple strings
- Printing strings with `%s`

## Key takeaway

An array of strings is useful when a program needs to store multiple pieces of text, such as names, questions, choices, or messages.
