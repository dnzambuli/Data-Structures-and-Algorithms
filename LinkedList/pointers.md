# Pointers

References to memory addresses where a variable is strored.

They ``point`` to the memory-address where a variable is stored.

## Requirements 

- Pointers need to be of the data type similar to the data that is stored in the memory location

```
int pointer -> address -> int variable
```

## Void porinters 

- a pointer that has no assigned data type 
- it can be typecast to any data type

## Format

**Notice** ``0`` is a non accessible memory location for safety.

```
int * b = 0; // pointer to an int memory address that has been initialized to point to address 0
int *b = 0; // default
```

**Notice** ``int *b;`` points to a random memory address and is unsafe for use

