# Arrays and User Input

## What I learned

Arrays can be filled with values entered by the user.

Instead of creating five separate variables, one array can hold all five values.

## Example

```c
int numbers[5];

for (int i = 0; i < 5; i++)
{
    scanf("%d", &numbers[i]);
}
```

The loop uses `i` to access each array element.

## Key concepts

- Creating arrays with a fixed size
- Accessing array elements with an index
- Using loops with arrays
- Storing user input in an array
- Reading array values afterward

## Key takeaway

Arrays become much more useful when their contents can be filled dynamically through user input.
