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

```c++
int * b = 0; // pointer to an int memory address that has been initialized to point to address 0
int *b = 0; // default
```

**Notice** ``int *b;`` points to a random memory address and is unsafe for use

## Getting the Address

Amperstand retrieves the memory address of a variable 

```c++
int a = 6;
b = &a // b points to the address of a 
```

## Retrieving values

To retrieve the value referenced by a pointer
```c++
std::cout << "The value stored at pointer b is: "<< *b << '\n';
```

## Reasign value

The address of an integer is retrieved as
```c++
&a;
```

The address of a pointer is retrieved as
```c++
&b;
```

To change the value of an integer 
```c++
int a = 6;
std::cout<< "The value of a is " << a << '\n';
```

**output**
```
>> The value of a is 6
>> 
```

**re-assigning**
```c++
a = 10;
std::cout<< "The value of a is " << a << '\n';
```

**output**
```
>> The value of a is 10
>> 
```

### Using pointers for reasigning
```c++
*b = 20;
std::cout<< "The value of a is " << a << '\n';
```

**output**
```
>> The value of a is 20
>> 
```

# Void Pointer 

To create a void pointer 
```c++
void *b;
```

To reassign a different data type pointer 
```c++
char *c;
b = (char*) c;
```

# New Installations

- **Constant** address that can not be changed
- **Pointer to Constant** - content pointed to can not be changed