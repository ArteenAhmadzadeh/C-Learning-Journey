# Reading Files

## What I learned

C programs can open existing files and read their contents through a file stream.

This example uses:

- `fopen()` to open the file
- Read mode `"r"`
- `fgets()` to read text line by line
- `fclose()` to close the file

## Opening a file for reading

```c
FILE *file = fopen("journal.txt", "r");
```

The `"r"` mode opens an existing file for reading.

## Reading line by line

```c
while (fgets(line, sizeof(line), file) != NULL)
{
    printf("%s", line);
}
```

The loop continues while `fgets()` successfully reads a line.

## Key concepts

- File streams
- Read mode `"r"`
- `fgets()`
- Reading until the end of a file
- `fclose()`
- Basic file error checking

## Key takeaway

Reading files allows a program to retrieve information that was saved previously, making file handling a foundation for persistent data.
