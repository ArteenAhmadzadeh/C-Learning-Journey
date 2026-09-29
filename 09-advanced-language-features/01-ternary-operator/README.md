# Ternary Operator

## What I learned

The ternary operator `?:` provides a compact way to choose between two expressions based on a condition.

## Example

```c
const char *status = (age >= 18) ? "Adult" : "Minor";
```

The structure is:

```text
condition ? value_if_true : value_if_false
```

## Key concepts

- Conditional expressions
- `?`
- `:`
- Replacing simple `if / else` expressions

## Key takeaway

The ternary operator is useful for short, simple decisions. More complicated logic is generally clearer with regular `if / else` statements.
