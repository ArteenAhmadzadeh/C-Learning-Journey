# 11 — File Handling

This section of my C programming journey introduces file handling: saving information to files and reading information back from them.

## Topics

1. **Writing Files** — create/open a file and write data to it.
2. **Reading Files** — open a file and read its contents.

## Learning progression

```text
Writing Files
      ↓
Reading Files
      ↓
Persistent program data
```

## Folder structure

```text
11-file-handling/
├── README.md
├── 01-writing-files/
│   ├── main.c
│   └── README.md
└── 02-reading-files/
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

By the end of this section, I should understand how C programs open files, write data, read data, work with file streams, and close files properly.
