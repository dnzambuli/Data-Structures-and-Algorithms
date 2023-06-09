# Data Structures and Algorithms

## Definitions

**Data Structures** - Ways of storing data in a computer

**Algorithms** - operations performed on the data structures and the process by which the operations are performed

### Example case
```
Kuingia kwa ka-local

every party goer gets accepted in 

if they have a card with their initials on them 
```

to store data in this club 

1. a long cellotape everyone sticks their card on the tape one after another 

2. a hole is punched on two oposite ends of the paper and a rope is tied from one card to the next one before the card is thrown into a box

**Comparing these datastructures**

1. is good at retreiving the ```n-th``` element as all one has to do is add ```n - 1``` positions to the first position

***however*** this type of data structure is dependent on the length of the ```cellotape```. If the number of guests exceeds this length no new people can be admited to the ``Ka-local``

2. is great for an unspecified number of guests comming to the party. All that is needed is just adding a new sting to the final guest card.

***however***  when it comes to selecing an ``n-th`` item it becomes challenging as manual tallying is needed to know the number of elements

### Determinants of DS & A

- ease of data retrieval
- ease of data addition
- ease of data manipulation

## Memory and Variables

1. **Memory** - the continuous tape of bytes used to store information in a computer

2. **Byte** - a collection of ```8 bits```

3. **bit** - a ```1``` or ```0``` representation of binary data 

4. **Data** - raw facts

5. **Address** - a location along the continuous memory tape usually represented as a ``hex``.ie. ```0x_ _ _ _ _ _ ```

6. **Variable** - the identifier of a specific place in the computer memory where a ```value``` is stored

# Data Structures

## Primitives
1. **integers** - whole number data types stored in mostyly ```4 bytes```
```c++
int a = 5;
std::cout << a << std::endl;
std::cout << sizeof(a) << " bytes"<< std::endl;
```

output
```
5
4 bytes
```

2. **characters** - single utf-8 characters stored in ```1 byte``` and denoted by single quotation marks ```' ' ```

```c++
char a = '\n';
std::cout << a << std::endl;
std::cout << sizeof(a) << " bytes"<< std::endl;
```

output
```
5
1 bytes
```

3. **booleans** - represents the truthfulness of false-hood of a statement. Represented by ```1 for true ``` and ```0 for false```

```c++
bool a = true;
std::cout << a << std::endl;
std::cout << sizeof(a) << " bytes"<< std::endl;
std::cout << !a<<std::endl;
```

output
```
1
1 bytes
0
```

4. **floats and doubles** - represent decimal numbers with double having higher accuracy

```c++
std::cout << "---------\n---------\ndouble\n---------\n---------"<<std::endl;
double a = 3.1415;
std::cout << a << std::endl;
std::cout << sizeof(a) << " bytes"<< std::endl;
std::cout << "---------\n---------\nfloat\n---------\n---------"<<std::endl;
float b = 3.1415;
std::cout << b << std::endl;
std::cout << sizeof(b) << " bytes"<< std::endl;
```

output
```
---------
---------
double
---------
---------
3.1415
8 bytes
---------
---------
float
---------
---------
3.1415
4 bytes
```

5. **strings** - a collection of characters 

```c++
std::string a = 'Hello';
std::cout << a << std::endl;
std::cout << sizeof(a) << " bytes"<< std::endl;
```

output
```
Hello
32 bytes
```

***Notice*** each character in Hello ```H-e-l-l-0``` is stored in successive memory locations

## Collections

1. **Arrays** - a collection datatype to store multiple values of the same type in a variable.

[more on arrays](./Arrays/Array.md)

2. **Stacks** - a collection type that implements the First In Last Out(```FILO```) mode of data retrieval 

[more on stacks](./Stacks/stacks.md)