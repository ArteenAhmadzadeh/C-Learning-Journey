# 13 — Final Projects

This section is the final project stage of the C programming journey.

## Project

- **Digital Clock** — a continuously updating clock using the C time library.

## Folder structure

```text
13-final-projects/
├── README.md
└── 01-digital-clock/
    ├── main.c
    └── README.md
```

## Concepts combined

This project brings together several concepts learned throughout the journey:

- Variables
- Functions
- Loops
- `struct tm`
- The C time library
- `time()`
- `localtime()`
- Formatted output
- Continuous program execution

## How to compile

Using GCC:

```bash
gcc main.c -o digital-clock
```

Run on Linux/macOS:

```bash
./digital-clock
```

Run on Windows:

```powershell
.\digital-clock.exe
```

Press `Ctrl+C` to stop the clock.

## Goal

The goal is to finish the learning path with a practical program that continuously reads the current system time and displays it as a digital clock.
