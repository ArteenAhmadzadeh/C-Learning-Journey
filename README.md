# 10 — Pointers

This section of my C programming journey introduces pointers and the way C can work directly with memory addresses.

## Topic

- **Pointers** — understand addresses, pointer variables, `&`, and `*`.

## Learning progression

```text
Variables
   ↓
Memory addresses
   ↓
Pointers
   ↓
Address-of &
   ↓
Dereference *
   ↓
Access and modify data through pointers
```

## Folder structure

```text
10-pointers/
├── README.md
└── 01-pointers/
    ├── main.c
    └── README.md
```

## How to compile

Using GCC:

```bash
gcc main.c -o program
```

Run on Linux/macOS:

```bash
./program
```

Run on Windows:

```powershell
.\program.exe
```

## Goal

By the end of this section, I should understand what a pointer is, how to store a memory address, how `&` obtains an address, and how `*` accesses the value stored at that address.
