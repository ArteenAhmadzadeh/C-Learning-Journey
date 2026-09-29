# Number Guessing Game

## What I learned

This project combines several concepts from earlier sections of the C journey.

The computer generates a random number between `1` and `100`, and the player keeps guessing until they find it.

## Concepts used

- Variables
- User input with `scanf`
- Random numbers
- `srand()` and `rand()`
- `if` / `else if` / `else`
- Comparisons
- A `do...while` loop
- Counting attempts

## Game flow

```text
Generate secret number
        ↓
Ask for a guess
        ↓
Compare guess with secret
   ↙         ↓         ↘
Too low   Correct    Too high
   ↓         ↓         ↓
   └──── Ask again ────┘
```

## Key takeaway

A larger program becomes much easier to understand when individual concepts are combined into a clear sequence of actions.
