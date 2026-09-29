# Writing Files

## What I learned

C programs can write information to files using file streams.

This example uses:

- `FILE *` to represent the file stream
- `fopen()` to open/create the file
- `fprintf()` to write formatted text
- `fclose()` to close the file

## Opening a file

```c
FILE *file = fopen("journal.txt", "w");
```

The `"w"` mode opens the file for writing. If the file does not exist, it can be created. If it already exists, its previous contents are replaced.

## Checking for errors

```c
if (file == NULL)
{
    printf("Could not open the file.\n");
    return 1;
}
```

Checking the result of `fopen()` helps prevent the program from using an invalid file stream.

## Key concepts

- `FILE *`
- `fopen()`
- Write mode `"w"`
- `fprintf()`
- `fclose()`
- Basic file error checking

## Key takeaway

File handling allows information to be stored outside the running program instead of disappearing when the program exits.
