# Linked Lists

|Array|Linked List|
|--|--|
|data must be shifted during insertion and deletion| Doesn't need shifting of items during insertion and deletion|

## Prerequisite

### Pointers 

Holders for the ``location`` or ``address`` of a memory cell [more on pointers](./pointers.md)

```c++
int *p;
// initially undefined but not null
// statically allocated
```

#### Address-of Operator

Used to place the address of a variable into a pointer variable 

```c++
p = &x;
```

#### New Operator

Used to dynamically allocate a memory cell

```c++
p = new int;
```

**Notice** if new can't allocate a memory it throws ``std::bad_alloc (in the <new> header)``

### Delete Operator

Returns dynamically allocated memory to the system for reuse and leaves the variable content undefined

```c++
delete p;
// these pointers are however dangerous 
```

**instead**
```c++
p = NULL;
// a better safeguard
```

##### Practical Example

1. **Declaring a new pointer and a variable**

```c++
	// two pointers for int variables
    int *p, *q; 
    
    // integer variable declaration
    int x;
    
    //  pointer p stores the address of variable x
    p = &x;
    
    // inside the address put value 6 
    // can also be used to retrieve the value stored at address p
    *p = 6;
    std::cout << "x is " <<x<< '\n';
    std::cout << "memory address p contains " <<*p<< '\n';
    std::cout << "p is "<< p<< '\n';
```

Output

```
x is 6
memory address p contains 6
p is 0x7ffd091ebdcc
```

2. **dynamic allocation of memory**

```c++
// convert the address to dynamic memory
    // x retains its value 
    // p can be assigned to any value
    p = new int;
    *p = 7;
    std::cout << "x is " <<x<< '\n';
    std::cout << "memory address p contains " <<*p<< '\n';
    std::cout << "p is "<< p<< '\n';
```

Output
```
x is 6
memory address p contains 7
p is 0x167c2c0
```
### Structures

Used to store data in a coherent way.[More on structures](structure.md)

