# Digital Clock

## What this project does

The program continuously displays the computer's current local time in:

```text
HH:MM:SS
```

The display updates once every second.

## Main concepts

### `time()`

`time()` obtains the current calendar time.

```c
time_t now = time(NULL);
```

### `localtime()`

`localtime()` converts the calendar time into a `struct tm`, which provides individual components such as:

```c
tm_hour
tm_min
tm_sec
```

### `while` loop

The clock runs continuously inside a loop:

```c
while (1)
{
    // get time
    // display time
    // wait
}
```

### `strftime()`

`strftime()` formats the time into a readable string:

```c
strftime(time_string, sizeof(time_string), "%H:%M:%S", local_time);
```

## Platform behavior

The program uses a small platform-specific delay:

- Windows: `Sleep(1000)`
- Linux/macOS: `sleep(1)`

The screen is refreshed using ANSI escape sequences.

Most modern terminals support these sequences. If a terminal does not, the clock may print a new line for each update instead of refreshing the same display area.

## Why this is a good final project

The digital clock is small, but it combines several important C ideas:

```text
C program
   ↓
standard library
   ↓
system time
   ↓
struct data
   ↓
functions
   ↓
loop
   ↓
formatted output
   ↓
continuously running program
```

## Key takeaway

A final project does not need to be huge. The important part is being able to combine multiple C concepts into a complete program and understand why each part is there.
