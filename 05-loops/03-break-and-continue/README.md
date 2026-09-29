# Break & Continue

## What I learned

C provides statements that can change the normal flow of a loop.

### `break`

`break` immediately terminates the loop.

```c
if (i == 6)
{
    break;
}
```

### `continue`

`continue` skips the rest of the current iteration and moves on to the next iteration.

```c
if (i == 6)
{
    continue;
}
```

## Key concepts

- Stopping a loop with `break`
- Skipping an iteration with `continue`
- Combining control statements with conditions

## Key takeaway

Use `break` when the loop should end early. Use `continue` when the current iteration should be skipped but the loop should keep running.
