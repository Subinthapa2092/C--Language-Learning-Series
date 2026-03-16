# C Programming Language — Complete One-Shot Notes

> **Course:** Programming in C (BDS103) | **Semester:** I | **Full Marks:** 45+30
> These notes cover all 10 units of the syllabus from introduction to file handling.

---

## Table of Contents

1. [Unit 1 — Introduction]
2. [Unit 2 — Basic Elements of C]
3. [Unit 3 — Data Input and Output]
4. [Unit 4 — Operators and Expressions]
5. [Unit 5 — Control Statements]
6. [Unit 6 — Functions]
7. [Unit 7 — Arrays and Strings]
8. [Unit 8 — Pointers]
9. [Unit 9 — Structures and Unions]
10. [Unit 10 — File Handling in C]

---

## Unit 1 — Introduction

### Program and Programming Language

A **programming language** is a set of rules that provides a way of instructing the computer to perform certain operations. It is a way for programmers (developers) to communicate with computers.

A **program** is a set of instructions written in a specific programming language that a computer can interpret and execute. A computer program in its human-readable form is called **source code**. Source code must be translated into machine instructions using a **compiler**.

---

### Types of Programming Languages

Programming languages are classified from **lower** (closer to machine) to **higher** (closer to human language):

**1. Machine Language (1st Generation)**
- Represented as 0s and 1s
- Fastest execution — computer accepts it directly
- Not portable between different computer models
- Very tedious and difficult to write

**2. Assembly Language (2nd Generation)**
- Uses mnemonics (e.g., `ADD`, `SUB`) instead of 0s and 1s
- Translated to machine code by an **assembler**
- Source program → (assembler) → Object program
- Still machine-dependent

**3. High-Level Languages (3rd, 4th, 5th Generation)**

| Type | Examples | Description |
|---|---|---|
| Procedural / OOP (3GL) | C, C++, Java | General purpose; problem broken into procedures or objects |
| Problem-oriented (4GL) | SQL, QBE | Designed for specific problem domains |
| Logic Programming (5GL) | LISP, PROLOG | Used in AI; expresses facts and rules |

**Advantages of High-Level Languages:**
- Statements resemble English — easier to write
- Less programming time required
- Easier to understand and modify
- Machine-independent

**Disadvantages:**
- Execute more slowly than machine/assembly code
- Use computer resources less efficiently

---

### Program Design Tools

Before writing a program, use design tools to plan the logic:

#### Algorithm
An **algorithm** is a finite sequence of instructions for solving a stated problem.

**Properties of a Good Algorithm:**
- **Input** — Quantities provided before algorithm begins
- **Definiteness** — Processing rules must be unambiguous
- **Effectiveness** — Each instruction must be doable in finite time
- **Finiteness** — Total execution time must be finite
- **Output** — Must produce output
- **Correctness** — Same input must always produce same output

**Example** — Algorithm for Simple Interest (5% if P ≥ 100000, else 3%):
```
1. Enter values of principal and time.
2. If principal >= 100000, interest = principal × time × 5 / 100
3. Else, interest = principal × time × 3 / 100
4. Display interest.
```

#### Flowchart
A **flowchart** is a diagram representing an algorithm using standard symbols connected by arrows.

| Symbol | Shape | Use |
|---|---|---|
| Start/End | Oval/Rounded rect | Beginning or end of process |
| Process | Rectangle | Computation/processing |
| Input/Output | Parallelogram | Reading or printing data |
| Decision | Diamond | Condition check (Yes/No) |
| Arrow | Arrow | Flow of control |

#### Pseudocode
**Pseudocode** is a mix of programming language conventions and natural language used to describe algorithm steps. It is intended for human reading, not machine execution.

---

### History of C Programming

| Year | Event |
|---|---|
| 1970s | C developed by **Dennis Ritchie** at Bell Laboratories |
| Pre-C | Based on **BCPL** and **B** languages (also from Bell Labs) |
| 1978 | **Brian Kernighan** and Ritchie published the definitive K&R description |
| Mid-1980s | C became widespread; compilers written for all sizes of computers |
| 1989 | ANSI committee standardized C → **ANSI C / C89** |
| Early 1980s | **Bjarne Stroustrup** developed **C++** at Bell Labs (OOP extension of C) |

---

### Structure of a C Program

```c
/* Documentation Section */
// Link Section
#include <stdio.h>

// Definition Section
#define PI 3.1415

// Global Declaration Section
float r;

// Function Prototypes
float area();
float circumference();

// Main Function
int main()
{
    printf("Radius = ");
    scanf("%f", &r);
    printf("Area = %f\n", area());
    printf("Circumference = %f\n", circumference());
    return 0;
}

// Sub-program Section
float area()
{
    return PI * r * r;
}

float circumference()
{
    return 2 * PI * r;
}
```

**Parts of a C Program:**
- **Documentation Section** — Comments describing the program
- **Link Section** — `#include` directives to include header files
- **Definition Section** — Symbolic constants using `#define`
- **Global Declaration** — Variables accessible to all functions
- **Main Function** — Every C program must have `main()`; execution starts here
- **Sub-program Section** — User-defined functions

---

### Compiling and Executing C Programs

```
Source Code (.c)
    ↓ Preprocessor   — expands #include, #define
Expanded Source
    ↓ Compiler       — converts to assembly
Assembly Code
    ↓ Assembler      — converts to object code
Object Code (.obj)
    ↓ Linker         — links with libraries → executable
Executable (.exe)
    ↓ Loader         — loads into CPU memory
Execution
```

### Debugging
**Debugging** is identifying, isolating, and correcting errors in a program.
- Starts as soon as code is written
- Continues as code combines with other units
- Final step: test the fix to ensure the bug is resolved

---

## Unit 2 — Basic Elements of C

### C Standards

| Standard | Year | Key Features |
|---|---|---|
| K&R | 1978 | Foundation; `printf`, `scanf`; basic control & pointers |
| ANSI C / C89 | 1989 | First formal standard; function prototypes; `void`, `const`, `volatile`; standard libraries |
| ISO C / C90 | 1990 | International adoption of C89 |
| C99 | 1999 | `//` comments; `long long int`; variable-length arrays; inline functions |
| C11 | 2011 | Multithreading; Unicode support |
| C17 | 2018 | Bug fixes for C11 |
| C23 | 2023 | UTF-8; improved memory allocation; new attributes |

---

### C Tokens

A **token** is the smallest meaningful element in a C program. There are 6 types:

| Token Type | Examples |
|---|---|
| Keywords | `int`, `float`, `if`, `for`, `return`, `struct`... |
| Identifiers | `count`, `total`, `myFunc` |
| Constants | `10`, `3.14`, `'A'`, `"hello"` |
| Strings | `"Hello World"` |
| Operators | `+`, `-`, `*`, `==`, `&&`... |
| Delimiters | `;`, `,`, `{}`, `()`, `[]` |

---

### Identifiers

Rules for naming identifiers:
- Can contain letters (A-Z, a-z), digits (0-9), and underscore `_`
- **Must not start with a digit**
- Case-sensitive: `count` ≠ `Count` ≠ `COUNT`
- Cannot be a keyword
- Typically first 31 characters are significant

**Valid:** `count`, `_total`, `value1`
**Invalid:** `1value`, `my-var`, `for`

---

### Keywords (32 ANSI C Keywords)

```
auto    break   case    char    const   continue   default   do
double  else    enum    extern  float   for        goto      if
int     long    register return  short   signed     sizeof    static
struct  switch  typedef union   unsigned void       volatile  while
```

---

### Data Types

**Four Basic/Primitive Data Types:**

| Data Type | Size | Range |
|---|---|---|
| `int` | 2 or 4 bytes | -32768 to 32767 (2-byte) |
| `float` | 4 bytes | ±3.4 × 10⁻³⁸ to ±3.4 × 10³⁸ |
| `double` | 8 bytes | ±1.7 × 10⁻³⁰⁸ to ±1.7 × 10³⁰⁸ |
| `char` | 1 byte | -128 to 127 |

**Qualifiers:** `short`, `long`, `signed`, `unsigned`
- `int` can use: `signed`, `unsigned`, `short`, `long`
- `char` can use: `signed`, `unsigned`
- `double` can use: `long`

> Use `sizeof()` operator to check size of data types on your compiler.

---

### Data Type Conversion

**Implicit Conversion (Automatic Promotion)**

C automatically converts lower types to higher types in expressions. Hierarchy (highest to lowest):

```
long double → double → float → unsigned long int → long int → unsigned int → int
(All char and short are automatically converted to int)
```

**Type Casting (Explicit Conversion)**

Programmer forces a conversion, even if it means data loss:

```c
int a = 7, b = 2;
float c;
c = (float)a / b;   // c = 3.5, not 3
printf("%f", c);
```

> **Warning:** Casting from higher to lower type may result in loss of data.

---

### Variables

A **variable** is a named memory location that holds a value which can be changed during program execution.

**Declaration:**
```c
int age;
float salary;
char grade;
```

**Initialization:**
```c
char ch = 'a';
int first = 0;
float balance = 123.23;
```

All variables must be **declared before use**. If not initialized, an automatic variable holds a garbage (arbitrary) value.

---

### Constants

Constants are data whose values **cannot be changed** during program execution.

#### Literal Constants

**Numeric Constants:**
- Integer: `10`, `-5`, `0`
- Floating-point: `3.14`, `-0.5`, `2.0e3`
- No commas or spaces allowed

**Character Constants:** A single character in apostrophes — `'A'`, `'3'`, `'?'`

**ASCII Values of common characters:**

| Character | ASCII Value |
|---|---|
| `'A'` | 65 |
| `'a'` | 97 |
| `'0'` | 48 |
| `' '` (space) | 32 |

#### Escape Sequences

| Character | Escape Sequence | ASCII |
|---|---|---|
| Newline | `\n` | 010 |
| Tab (horizontal) | `\t` | 009 |
| Backspace | `\b` | 008 |
| Carriage return | `\r` | 013 |
| Null | `\0` | 000 |
| Backslash | `\\` | 092 |
| Quotation mark | `\"` | 034 |
| Apostrophe | `\'` | 039 |
| Bell | `\a` | 007 |

**String Constants:** Characters in double quotes — `"hello"`, `"C Programming"`

#### Symbolic Constants

```c
// Method 1 — #define
#define PI 3.14159

// Method 2 — const keyword
const double PI = 3.14159;
```

---

### Comments

```c
// This is a single-line comment

/* This is a
   multi-line comment */
```

---

### Expressions and Statements

**Expressions** are meaningful combinations of constants, variables, operators, and function calls:
- Arithmetic: `a + b`, `5 * a - pow(m, n)`
- Assignment: `i = 7`
- Relational: `a < 7` (yields 0 or 1)
- Logical: `(a == 7) && (b > c)` (yields 0 or 1)

**Statements:**
- **Declarative:** `int x = 101;`
- **Expression statement:** `a = 3;`, `c = a + b;`, `printf("Hello");`
- **Compound statement:** Multiple statements in `{ }` — no semicolon after closing brace
- **Control statements:** `if`, `for`, `while`, `switch`...

---

### Preprocessor Directives

Lines beginning with `#` are processed **before** compilation.

| Directive | Purpose |
|---|---|
| `#include` | Include a file into source code |
| `#define` | Define a macro |
| `#undef` | Undefine a macro |
| `#ifdef` | Include code if macro is defined |
| `#ifndef` | Include code if macro is NOT defined |
| `#if` | Check condition |
| `#else` | Alternate for `#if` |
| `#elif` | Else-if for condition |
| `#endif` | End of conditional block |

---

### Delimiters

| Delimiter | Symbol | Use |
|---|---|---|
| Semicolon | `;` | Terminates a statement |
| Comma | `,` | Separates variables or expressions |
| Braces | `{}` | Defines a block of code |
| Parentheses | `()` | Encloses function arguments; groups expressions |
| Square Brackets | `[]` | Array indexing |
| Double Quotes | `""` | String literals |
| Single Quotes | `''` | Character literals |
| Hash | `#` | Preprocessor directives |
| Arrow | `->` | Access structure member via pointer |
| Dot | `.` | Access structure member directly |

---

## Unit 3 — Data Input and Output

### The `scanf` Function — Reading Input

```c
scanf(control_string, arg1, arg2, ..., argn);
```

Arguments must be **memory addresses** (preceded by `&` for variables).

**Format Specifiers:**

| Specifier | Data Type |
|---|---|
| `%d` | int |
| `%f` | float |
| `%lf` | double |
| `%c` | char |
| `%s` | string (until whitespace) |
| `%[^\n]` | string (until newline) |
| `%hd` | short int |
| `%ld` | long int |

**Examples:**
```c
int a;
float b;
char ch;
char name[20];

scanf("%d", &a);               // read integer
scanf("%f", &b);               // read float
scanf(" %c", &ch);             // read char (space skips whitespace)
scanf("%s", name);             // read string (until whitespace)
scanf("%[^\n]", name);         // read string (until newline)
scanf("%3d%4d", &a, &b);       // field width limitation
scanf("%d%*c%d%*c%d", &d, &m, &y); // skip characters with *
```

---

### The `printf` Function — Writing Output

```c
printf(control_string, arg1, arg2, ..., argn);
```

Arguments are **values** (not addresses) — no `&` needed.

**Formatting Options:**

```c
printf("%10d", a);       // minimum field width of 10
printf("%-10d", a);      // left-aligned in 10-width field
printf("%010d", a);      // zero-padded in 10-width field
printf("%9.2f", x);      // 9-wide, 2 decimal places
printf("%.3s", name);    // print only first 3 chars of string
printf("%e", x);         // scientific/exponential notation
printf("%lf", d);        // long double
```

**Common Format Specifiers:**

| Specifier | Type | Output |
|---|---|---|
| `%d` | int | Decimal integer |
| `%f` | float/double | Floating-point |
| `%e` | float/double | Scientific notation |
| `%c` | char | Single character |
| `%s` | string | Character string |
| `%x` | int | Hexadecimal (lowercase) |
| `%X` | int | Hexadecimal (uppercase) |
| `%o` | int | Octal |

---

### `gets` and `puts` — String I/O

```c
char name[20];
gets(name);    // reads string including spaces until Enter
puts(name);    // prints string and adds newline
```

These are simpler alternatives to `scanf`/`printf` for string input/output.

---

### Formatted vs Unformatted I/O

| | Formatted | Unformatted |
|---|---|---|
| Functions | `scanf`, `printf` | `getc`, `putc`, `gets`, `puts` |
| Control | Uses format specifiers | No format specifiers |
| Use | Multiple data types | Characters and strings |

---

## Unit 4 — Operators and Expressions

### Operator Precedence Table (High → Low)

| Operators | Description | Associativity |
|---|---|---|
| `()` `[]` `.` `->` `++ --` (postfix) | Function call, subscript, member access, postfix inc/dec | Left-to-right |
| `++ --` `+ -` `! ~` `(type)` `*` `&` `sizeof` | Unary / Prefix | Right-to-left |
| `* / %` | Multiplicative | Left-to-right |
| `+ -` | Additive | Left-to-right |
| `<< >>` | Bitwise shift | Left-to-right |
| `< <= > >=` | Relational | Left-to-right |
| `== !=` | Equality | Left-to-right |
| `&` | Bitwise AND | Left-to-right |
| `^` | Bitwise XOR | Left-to-right |
| `\|` | Bitwise OR | Left-to-right |
| `&&` | Logical AND | Left-to-right |
| `\|\|` | Logical OR | Left-to-right |
| `?:` | Ternary | Right-to-left |
| `= += -= *= /= %=` etc. | Assignment | Right-to-left |
| `,` | Comma | Left-to-right |

---

### Increment and Decrement Operators

```c
int a = 1, b = 2, c, d;
c = ++b;    // b becomes 3 first, then c = 3
d = a++;    // d = 1 first, then a becomes 2
c++;        // c becomes 4

printf("a = %d", a);  // a = 2
printf("b = %d", b);  // b = 3
printf("c = %d", c);  // c = 4
printf("d = %d", d);  // d = 1
```

- **Prefix (`++x`)** — increment first, then use
- **Postfix (`x++`)** — use first, then increment

---

### Ternary (Conditional) Operator

```c
// Syntax: exp1 ? exp2 : exp3
// If exp1 is true → result is exp2, else → result is exp3

c = a > b ? a + b : a - b;

// Equivalent to:
if(a > b)
    c = a + b;
else
    c = a - b;
```

---

### `sizeof` Operator

```c
printf("%d", sizeof(int));    // prints size of int in bytes
printf("%d", sizeof(x));      // prints size of variable x
```

---

### Bitwise Operators

| Operator | Symbol | Example |
|---|---|---|
| AND | `&` | `5 & 3` = `0101 & 0011` = `0001` = 1 |
| OR | `\|` | `5 \| 3` = `0101 \| 0011` = `0111` = 7 |
| XOR | `^` | `5 ^ 3` = `0101 ^ 0011` = `0110` = 6 |
| NOT | `~` | `~5` = inverts all bits |
| Left shift | `<<` | `5 << 1` = 10 |
| Right shift | `>>` | `5 >> 1` = 2 |

---

## Unit 5 — Control Statements

C supports three types of control statements: **Selection**, **Repetition**, and **Jump**.

---

### Selection Statements

#### if (only)
```c
if (expression)
    statement;

// OR with block:
if (expression)
{
    statement 1;
    statement 2;
}
```
Executes statement(s) only if expression is **true (non-zero)**.

#### if-else
```c
if (expression)
    statement1;
else
    statement2;
```

#### if-else-if Ladder
```c
if (amount >= 5000)
    discount = amount * 0.10;
else if (amount >= 4000)
    discount = amount * 0.07;
else if (amount >= 3000)
    discount = amount * 0.05;
else
    discount = amount * 0.03;
```
Conditions are tested **top-down**; first true match executes and rest is skipped.

#### switch Statement
```c
switch (expression)
{
    case constant1:
        statement(s);
        break;
    case constant2:
        statement(s);
        break;
    default:
        statement(s);
}
```

**Rules for switch:**
- Expression must evaluate to an **integer type**
- No two case constants can be the same
- Omitting `break` causes **fall-through** to next case
- `default` executes when no case matches (optional)
- Cannot use `<`, `<=`, `>`, `>=` in cases — only equality

---

### Repetition (Loop) Statements

#### for Loop
```c
for (expr1; expr2; expr3)
    statement;
```
- `expr1` — initialization (executed once before loop)
- `expr2` — condition (checked before each iteration)
- `expr3` — update (executed after each iteration)

```c
// Sum of 1 to 10
int i, s = 0;
for (i = 1; i <= 10; i++)
    s = s + i;
```

**Variants:**
```c
for (sum = 0, i = 1; i <= n; i++)   // multiple init
for ( ; digit <= 9; digit++)         // omit initialization
for (;;)                             // infinite loop
```

#### while Loop
```c
while (expression)
    statement;
```
Checks condition **before** executing the body. If condition is false initially, body never executes.

```c
int i = 1, s = 0;
while (i <= 10)
{
    s = s + i;
    i++;
}
```

#### do-while Loop
```c
do
{
    statement(s);
} while (expression);
```
Checks condition **after** executing the body — body always executes **at least once**.

```c
int i = 1, s = 0;
do
{
    s = s + i;
    i++;
} while (i <= 10);
```

---

### Comparison of Three Loops

| Feature | for | while | do-while |
|---|---|---|---|
| When to use | Number of iterations known | Iterations not known | Must execute body at least once |
| Condition check | Before body | Before body | After body |
| Type | Entry-controlled | Entry-controlled | Exit-controlled |

---

### Nested Loops
```c
for (i = 0; i < 10; i++)
{
    printf("Hi");
    for (j = 0; j < 5; j++)
        printf("Hello");
}
```
Inner loop runs completely for each iteration of the outer loop.

---

### Jump Statements

#### break
Immediately **terminates** the enclosing loop or switch.
```c
for (int i = 1; i <= 10; i++)
{
    if (i == 5)
        break;
    printf("%d ", i);  // prints 1 2 3 4
}
```

#### continue
**Skips** the remaining body of the current iteration and proceeds to the next.
```c
for (i = 0; i < 10; i++)
{
    if (i > 5 && i < 8)
        continue;   // skips i = 6, 7
    printf("%d\n", i);
}
```

#### goto
Transfers control to a labeled statement (generally considered harmful, avoid when possible).
```c
here:
    printf("Enter a positive number: ");
    scanf("%d", &num);
    if (num < 0)
        goto here;
```

---

## Unit 6 — Functions

### Why Functions?
- Break large programs into manageable pieces
- Reuse code without repetition
- Easier to debug and maintain

---

### Function Components

**1. Function Prototype (Declaration)**
```c
return_type function_name(parameter_list);

// Examples:
int add(int a, int b);
void display(void);
float area(float r);
```

**2. Function Definition**
```c
return_type function_name(parameter_list)
{
    // function body
    return value;
}
```

**3. Function Call**
```c
result = add(5, 3);
display();
```

---

### Complete Example
```c
#include <stdio.h>

int add(int a, int b);   // prototype

int main()
{
    int x = 5, y = 3;
    int sum = add(x, y);
    printf("Sum = %d", sum);
    return 0;
}

int add(int a, int b)    // definition
{
    return a + b;
}
```

---

### Types of Functions

| Type | Arguments | Return Value | Example |
|---|---|---|---|
| No args, no return | None | `void` | `void display(void)` |
| Args, no return | Yes | `void` | `void print(int n)` |
| Args, with return | Yes | Yes | `int add(int a, int b)` |
| No args, with return | None | Yes | `int getValue(void)` |

---

### Recursive Function

A function that **calls itself**. Must have a **base case** to stop recursion.

```c
// Factorial using recursion
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;           // base case
    return n * factorial(n - 1);
}
```

---

### Storage Classes

| Storage Class | Keyword | Where Declared | Lifetime | Visibility | Initial Value |
|---|---|---|---|---|---|
| Automatic | `auto` | Inside function | Function duration | Local to function | Garbage |
| Register | `register` | Inside function | Function duration | Local to function | Garbage |
| External | `extern` | Outside function | Entire program | File-wide (global) | 0 |
| Static | `static` | Inside or outside | Entire program | Local (inside) or file-wide | 0 |

**Auto (local):**
```c
int add(int n)
{
    auto int sum = 0;   // same as: int sum = 0;
    int i;
    for (i = 1; i < n; i++)
        sum += i;
    return sum;
}
```

**Register:**
```c
int add(int n)
{
    register int i;    // stored in CPU register for speed
    int sum = 0;
    for (i = 1; i < n; i++)
        sum += i;
    return sum;
}
```
> Note: Modern compilers optimize this automatically; `register` is largely obsolete.

**Extern (global):**
```c
int sum;  // external variable definition (outside function)

int add(int n)
{
    int i;
    for (i = 1; i < n; i++)
        sum += i;
    return sum;
}
```
Multi-file usage:
```c
// File1.c
#include <stdio.h>
int main()
{
    extern int a;   // declaration
    printf("%d", a);
}

// File2.c
int a = 5;          // definition
```

**Static:**
```c
int test()
{
    static int count = 0;   // retains value between calls
    count++;
    return count;
}
```

---

### Preprocessor Directives in Functions

#### `#include`
```c
#include <stdio.h>    // standard library header
#include <math.h>     // for sqrt(), pow()
```

#### `#define` (Macros)
```c
#define PI 3.1415                      // macro without argument
#define area(r) PI * (r) * (r)        // macro with argument
#define circum(r) 2 * PI * (r)

// Usage:
float a = area(5);
float c = circum(5);
```

Macros replace function calls at compile time — **faster execution**.

---

## Unit 7 — Arrays and Strings

### Introduction to Arrays

An **array** is a collection of data items of the **same type** stored at contiguous memory locations, sharing a common name.

---

### Array Declaration
```c
int x[100];         // integer array of 100 elements
char text[80];      // character array of 80 elements
float values[50];   // float array of 50 elements
```

### Array Indices
- First element: index `0`
- Last element: index `size - 1`
- For `int c[12]` → elements are `c[0]` to `c[11]`

### Memory
```
Total size (bytes) = sizeof(base_type) × length
```

### Array Initialization
```c
int digits[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
float x[6] = {0, 0.25, 0, -0.50, 0, 0};

// Partial initialization (rest become 0):
int digits[10] = {3, 3, 3};   // digits[3] to digits[9] = 0

// Size inferred from initializer:
int digits[] = {1, 2, 3, 4, 5, 6};  // size = 6
```

### Accessing Array Elements
```c
c[0] = 3;
printf("%d", c[0]);
// With subscript expression:
// If x == 3, then c[5-2] == c[3] == c[x]
```

---

### Example — Sum and Average
```c
#include <stdio.h>
#define SIZE 10

int main()
{
    int num[SIZE], i, sum = 0;
    float avg;
    printf("Enter %d integers:\n", SIZE);
    for (i = 0; i < SIZE; i++)
        scanf("%d", &num[i]);
    for (i = 0; i < SIZE; i++)
        sum += num[i];
    avg = (float)sum / SIZE;
    printf("Sum = %d\nAverage = %f", sum, avg);
    return 0;
}
```

---

### Strings

Strings are **one-dimensional arrays of type `char`** terminated by the null character `\0`.

```c
char str[11];            // can hold a 10-character string
char name[8] = "Nawaraj";
// OR
char name[8] = {'N','a','w','a','r','a','j','\0'};
```

**Reading Strings:**
```c
char text[80];
gets(text);                      // reads until Enter
scanf("%[^\n]", text);           // reads until newline
scanf("%s", text);               // reads until whitespace
```

**Writing Strings:**
```c
puts(text);
printf("%s", text);
```

**Note:** `"a"` (string) ≠ `'a'` (character). `"a"` has 2 elements: `'a'` and `'\0'`.

---

### String Library Functions (`<string.h>`)

| Function | Purpose |
|---|---|
| `strcpy(s1, s2)` | Copy s2 into s1 |
| `strcat(s1, s2)` | Concatenate s2 onto end of s1 |
| `strlen(s1)` | Return length of s1 (excluding `\0`) |
| `strcmp(s1, s2)` | Compare s1 and s2; returns 0 if equal, <0 if s1<s2, >0 if s1>s2 |
| `strupr(s1)` | Convert s1 to uppercase |
| `strlwr(s1)` | Convert s1 to lowercase |

---

### Multi-dimensional Arrays

**Two-dimensional Array:**
```c
int a[3][4];       // 3 rows, 4 columns
a[0][1]            // 2nd element of 1st row
a[1][2]            // 3rd element of 2nd row
```

Think of 2D arrays as **tables/matrices** — first subscript is row, second is column.

**Matrix Addition Example:**
```c
#include <stdio.h>
#define ROW 2
#define COL 3

int main()
{
    int a[ROW][COL], b[ROW][COL], c[ROW][COL], i, j;
    // Input first matrix
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            scanf("%d", &a[i][j]);
    // Input second matrix
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            scanf("%d", &b[i][j]);
    // Addition
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            c[i][j] = a[i][j] + b[i][j];
    return 0;
}
```

---

### Passing Arrays to Functions

Array name (without `[]`) is passed — it represents the address of the first element.

```c
void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    display(a, 5);   // pass array name
    return 0;
}
```

For 2D arrays, the column size must be specified:
```c
void input(int a[][COL]);
```

---

### Array of Strings
```c
char names[5][20];   // array of 5 strings, each up to 19 chars

for (int i = 0; i < 5; i++)
    gets(names[i]);
```

---

## Unit 8 — Pointers

### Introduction

A **pointer** is a variable that stores the **memory address** of another variable. Instead of holding a data value directly, it holds the address of where that value is stored.

---

### Pointer Declaration
```c
data_type *ptrvar;

int *ptr;       // pointer to int
float *fptr;    // pointer to float
char *cptr;     // pointer to char
```

### Pointer Operators
- `&` — **Address-of operator**: returns the address of a variable
- `*` — **Value-at-address (indirection) operator**: accesses value at the pointed address

```c
int var = 11, *ptr;
ptr = &var;          // ptr stores address of var

printf("%d", var);   // prints 11
printf("%d", ptr);   // prints address of var
printf("%d", *ptr);  // prints 11 (value at address)

*ptr = 45;           // changes value of var to 45
printf("%d", var);   // prints 45
```

---

### Pass-by-Value vs Pass-by-Reference

**Pass-by-Value:**
```c
void change(int x) { x = 60; }

int main()
{
    int a = 50;
    change(a);
    printf("a = %d", a);  // a = 50 (unchanged)
}
```

**Pass-by-Reference (using pointers):**
```c
void change(int *x) { *x = 60; }

int main()
{
    int a = 50;
    change(&a);
    printf("a = %d", a);  // a = 60 (changed)
}
```

---

### Returning Multiple Values
```c
#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff)
{
    *sum = a + b;
    *diff = a - b;
}

int main()
{
    int x = 10, y = 4, s, d;
    calculate(x, y, &s, &d);
    printf("Sum: %d, Difference: %d", s, d);
    return 0;
}
```

---

### Pointers and One-Dimensional Arrays

The array name is a pointer to its first element.

```c
int x[5];
// &x[0] == x           (address of first element)
// &x[i] == (x + i)     (address of i-th element)
// x[i]  == *(x + i)    (value of i-th element)
```

```c
// Read n numbers and find sum using pointer notation
float a[100], sum = 0;
int n, i;
scanf("%d", &n);
for (i = 0; i < n; i++)
    scanf("%f", (a + i));          // same as &a[i]
for (i = 0; i < n; i++)
    sum += *(a + i);               // same as a[i]
```

**Important:**
```c
int *a = {1, 2, 5};   // ERROR — cannot initialize numeric array this way
int a[] = {1, 2, 5};  // CORRECT

char *name = "Nawaraj";  // VALID — string pointer (read-only)
char name[] = "Nawaraj"; // VALID — character array (modifiable)
```

---

### Pointers and Multi-dimensional Arrays

For a 2D array `arr[ROW][COL]`:
- `arr + i` → points to i-th row
- `*(arr + i)` → address of first element of i-th row
- `*(arr + i) + j` → address of j-th element in i-th row
- `*(*(arr + i) + j)` → value at position [i][j]

---

### Dynamic Memory Allocation

| Function | Header | Purpose |
|---|---|---|
| `malloc(size)` | `<stdlib.h>` | Allocate `size` bytes; not initialized |
| `calloc(n, size)` | `<stdlib.h>` | Allocate `n` blocks of `size` bytes each; initialized to **zero** |
| `realloc(ptr, new_size)` | `<stdlib.h>` | Resize previously allocated memory |
| `free(ptr)` | `<stdlib.h>` | Release dynamically allocated memory |

```c
// Using calloc
float *a;
int n;
scanf("%d", &n);
a = (float*) calloc(n, sizeof(float));
// ... use a ...
free(a);

// Using malloc
a = (float*) malloc(n * sizeof(float));
free(a);

// Using realloc
a = (float*) realloc(a, new_size);
```

> **Important:** Always call `free()` when done. Forgetting causes **memory leaks**.

---

### Pointer Arithmetic

**Allowed operations:**
1. Assign address of a variable: `pv = &v;`
2. Assign value of another pointer (same type): `pv = px;`
3. Assign NULL: `pv = NULL;`
4. Add/subtract an integer: `pv + 3`, `++pv`, `pv - 2`
5. Subtract two pointers (same array) — returns number of elements between them
6. Compare two pointers (same type)

**NOT allowed:** multiply, add two pointers, assign arbitrary address.

> If `px` points to an `int` (4 bytes), then `px + 3` is an address **12 bytes** beyond `*px`.

---

### Chain of Pointers (Pointer to Pointer)

```c
int a = 10;
int *ptr1 = &a;       // single pointer
int **ptr2 = &ptr1;   // double pointer
int ***ptr3 = &ptr2;  // triple pointer

printf("%d", a);       // 10
printf("%d", *ptr1);   // 10
printf("%d", **ptr2);  // 10
printf("%d", ***ptr3); // 10
```

---

### Pointer Constant vs Pointer to Constant

```c
// Constant pointer — pointer cannot be changed, value can
int a = 2, b = 3;
int *const ptr2 = &a;
ptr2 = &b;    // ERROR — ptr2 is constant

// Pointer to constant — value cannot be changed, pointer can
const int a = 2;
const int *ptr1 = &a;
*ptr1 = 8;    // ERROR — value pointed to is constant
```

---

### Function Returning Pointer

```c
// UNSAFE — local variable destroyed after function returns
int *getPointer()
{
    int x = 10;
    return &x;   // dangerous
}

// SAFE — using static variable
int *getPointer()
{
    static int x = 10;
    return &x;   // safe, static persists
}

// SAFE — using dynamic allocation
int *getPointer()
{
    int *ptr = (int*) malloc(sizeof(int));
    *ptr = 10;
    return ptr;   // caller must free()
}
```

---

### Array of Pointers

```c
data_type *array_name[size];

// Example — array of integer pointers
int a = 10, b = 20, c = 30;
int *arr[3] = {&a, &b, &c};
for (int i = 0; i < 3; i++)
    printf("Value: %d\n", *arr[i]);

// Array of string pointers
char *colors[] = {"Red", "Green", "Blue", "Yellow"};
for (int i = 0; i < 4; i++)
    printf("%s\n", colors[i]);
```

---

### Advantages and Disadvantages of Pointers

**Advantages:**
- Efficient memory management — direct memory access, no unnecessary copying
- Dynamic memory allocation (`malloc`, `calloc`, `free`)
- Pass large structures to functions without copying (pass-by-reference)
- Improved performance — pointer arithmetic for array traversal
- Essential for complex data structures: linked lists, trees, graphs
- Enable callback functions and indirect function calls

**Disadvantages:**
- Complexity — requires careful memory management
- Memory leaks — forgetting to `free()` allocated memory
- Dangling pointers — pointer to freed/invalid memory
- Security vulnerabilities — buffer overflows
- Difficult to debug — segmentation faults are hard to trace
- Pointer arithmetic is error-prone
- Portability issues — memory layouts differ across machines
- No automatic garbage collection (unlike Java/Python)

---

## Unit 9 — Structures and Unions

### Introduction to Structures

A **structure** provides a means to **aggregate elements of different types** under a single name. Unlike arrays (same type elements), structures can hold members of mixed types.

---

### Structure Declaration

```c
struct structurename {
    member1;
    member2;
    ...
    memberm;
};
```

**Example:**
```c
struct account {
    int acct_no;
    char acct_type;
    char name[80];
    float balance;
};

// Declare structure variables:
struct account oldcustomer, newcustomer;
```

**Combined declaration:**
```c
struct account {
    int acct_no;
    char acct_type;
    char name[10];
    float balance;
} oldcustomer, newcustomer;
```

---

### Nested Structures

A structure can contain another structure as a member:

```c
struct date {
    int month;
    int day;
    int year;
};

struct account {
    int acct_no;
    char name[10];
    struct date dob;   // nested structure
    float balance;
};
```

---

### Processing a Structure

Access members using the **dot (`.`) operator**:

```c
struct account customer;
customer.acct_no = 101;
customer.balance = 5000.0;
printf("%d %f", customer.acct_no, customer.balance);
```

**Initialization:**
```c
struct account customer = {101, 'S', "Ram", 5000.0};
```

---

### Structures and Pointers

Access members via pointer using the **arrow (`->`) operator**:

```c
struct account *ptr;
struct account customer = {101, 'S', "Ram", 5000.0};
ptr = &customer;

printf("%d", ptr->acct_no);    // same as (*ptr).acct_no
printf("%f", ptr->balance);
```

---

### Passing Structures to Functions

**Passing individual members:**
```c
void display(int no, float bal)
{
    printf("%d %f", no, bal);
}
display(customer.acct_no, customer.balance);
```

**Passing structure variable (by value — copy):**
```c
void display(struct account c)
{
    printf("%d %f", c.acct_no, c.balance);
}
display(customer);
```

**Passing structure by pointer (by reference — more efficient):**
```c
void display(struct account *c)
{
    printf("%d %f", c->acct_no, c->balance);
}
display(&customer);
```

---

### Array of Structures

```c
struct Student {
    int id;
    char name[20];
};

struct Student students[2] = {{101, "Ram"}, {102, "Sita"}};

for (int i = 0; i < 2; i++)
    printf("ID: %d, Name: %s\n", students[i].id, students[i].name);
```

---

### Passing Array of Structures to Functions

```c
void display(struct Student *s, int size)
{
    for (int i = 0; i < size; i++)
        printf("ID: %d, Name: %s\n", s[i].id, s[i].name);
}

int main()
{
    struct Student students[2] = {{101, "Ram"}, {102, "Sita"}};
    display(students, 2);
    return 0;
}
```

---

### Self-Referential Structures

A structure that contains a **pointer to its own type** — used in linked lists, trees, etc.

```c
struct list_element {
    int item[40];
    struct list_element *next;   // pointer to same type
};
```

---

### Unions

A **union** allows multiple members to share the **same memory location**. Only one member can hold a value at any time.

```c
union unionname {
    member1;
    member2;
    ...
};
```

**Example:**
```c
union id {
    char color[12];
    int size;
};

union id shirt;
shirt.size = 10;      // only size is valid now
// If you now set shirt.color, size is overwritten
```

**Size of union** = size of its **largest member** (with possible padding).

---

### Structure vs Union

| Parameter | Structure | Union |
|---|---|---|
| Keyword | `struct` | `union` |
| Memory | Sum of all member sizes (+ padding) | Size of largest member |
| Allocation | Each member has its own storage | All members share same storage |
| Data overlap | No overlap — members are independent | Full overlap — members share memory |
| Accessing | Multiple members can hold values simultaneously | Only one member can hold value at a time |
| Use | Group related data of different types | Save memory when only one field is used at a time |

---

## Unit 10 — File Handling in C

### Introduction

**Data files** allow information to be stored **permanently** on disk and retrieved later.

**Two types of data files:**
1. **Stream-oriented (Standard)** — more commonly used
   - Text files — consecutive characters
   - Unformatted data files — blocks of contiguous bytes
2. **System-oriented (Lower-level)** — more closely tied to the OS

---

### Why Files?

Without files:
- Data entered from keyboard is lost when program exits
- Large data is difficult to enter every time
- Cannot share data between program runs

With files:
- Data saved permanently to disk
- Can be retrieved and modified anytime

---

### Opening and Closing a File

**Step 1 — Declare a file pointer:**
```c
FILE *ptvar;
```

**Step 2 — Open the file:**
```c
ptvar = fopen(file_name, file_type);
```

**File types (modes):**

| Mode | Meaning |
|---|---|
| `"r"` | Open existing file for reading only |
| `"w"` | Open (create) file for writing only; existing file is **destroyed** |
| `"a"` | Open for appending; creates new file if doesn't exist |
| `"r+"` | Open existing file for reading and writing |
| `"w+"` | Open new file for reading and writing; destroys existing |
| `"a+"` | Open for reading and appending |
| `"rb"`, `"wb"` | Binary mode (read/write) |

**`fopen` returns `NULL` if file cannot be opened.**

**Step 3 — Close the file:**
```c
fclose(ptvar);
```

**Template:**
```c
#include <stdio.h>

int main()
{
    FILE *fpt;
    fpt = fopen("sample.txt", "r+");
    if (fpt == NULL)
        printf("ERROR - Cannot open the file\n");
    else
    {
        // ... file operations ...
        fclose(fpt);
    }
    return 0;
}
```

---

### Reading and Writing a Data File

**Writing with `fprintf`:**
```c
FILE *fp;
fp = fopen("output.txt", "w");
fprintf(fp, "%c\n", 'A');   // write to file
fclose(fp);
```

**Reading with `fscanf`:**
```c
FILE *fp;
char ch;
fp = fopen("input.txt", "r");
while (fscanf(fp, "%c", &ch) != EOF)
    printf("%c", ch);
fclose(fp);
```

**EOF** is a special marker indicating end of file. The internal file pointer advances automatically after each read/write.

---

### Character I/O — `getc` / `putc` / `fgetc` / `fputc`

```c
FILE *fpin, *fpout;
char ch;

fpin = fopen("input.txt", "r");
fpout = fopen("output.txt", "w");

while ((ch = getc(fpin)) != EOF)
{
    printf("%c", ch);
    putc(ch, fpout);
}

fclose(fpin);
fclose(fpout);
```

---

### String I/O — `fgets` / `fputs`

```c
char str1[20];
char *str2;
FILE *fpin, *fpout;

fpin = fopen("input.txt", "r");
fpout = fopen("output.txt", "w");

while ((str2 = fgets(str1, sizeof(str1), fpin)) != NULL)
{
    printf("%s", str2);
    fputs(str2, fpout);
}

fclose(fpin);
fclose(fpout);
```

---

### Finding Sum and Average from a File

```c
#include <stdio.h>

int main()
{
    FILE *fpin, *fpout;
    float val, avg, sum = 0;
    int count = 0;

    fpin = fopen("input.txt", "r");
    while (fscanf(fpin, "%f", &val) != EOF)
    {
        sum += val;
        count++;
    }
    fclose(fpin);

    avg = sum / count;
    fpout = fopen("output.txt", "w");
    fprintf(fpout, "Sum = %f\nAverage = %f", sum, avg);
    fclose(fpout);

    return 0;
}
```

---

### Unformatted Data Files — `fread` / `fwrite`

Used to read/write entire structures (blocks of data).

```c
fwrite(&customer, sizeof(struct account), 1, fpt);
fread(&customer, sizeof(struct account), 1, fpt);
```

- `fread` returns number of elements successfully read
- `fwrite` returns number of elements successfully written

**Writing structure to file:**
```c
struct account {
    int acct_no;
    char acct_type;
    char name[10];
    float balance;
};

struct account customer;
FILE *fpt = fopen("customer.txt", "w");
// ... input customer data ...
fwrite(&customer, sizeof(struct account), 1, fpt);
fclose(fpt);
```

**Reading structure from file:**
```c
FILE *fpt = fopen("customer.txt", "r");
while (fread(&customer, sizeof(struct account), 1, fpt))
{
    printf("%d %s %f\n", customer.acct_no, customer.name, customer.balance);
}
fclose(fpt);
```

---

### Binary Files

**Two differences between text and binary files:**

1. **Newline storage** — text files store `\n` as 2 bytes (`\r\n`); binary files use only `\n`
2. **EOF** — text files have explicit EOF character; binary files detect EOF when reading fails

**Opening binary files:**
```c
FILE *fp = fopen("file.dat", "rb");   // binary read
FILE *fp = fopen("file.dat", "wb");   // binary write
```

---

### Random Access Files

Files on random-access devices (hard disk) can be accessed at any position without reading preceding data.

**`fseek` function:**
```c
fseek(FILE *fstream, long offset, int whence);
```

| `whence` constant | Meaning |
|---|---|
| `SEEK_SET` (or 0) | From beginning of file |
| `SEEK_CUR` (or 1) | From current position |
| `SEEK_END` (or 2) | From end of file |

**Examples:**
```c
fseek(fp, 10, SEEK_SET);   // move to 11th byte
fseek(fp, 1, SEEK_CUR);    // skip 1 byte forward
fseek(fp, -5, SEEK_END);   // 5 bytes before end
```

**Other random access functions:**

| Function | Purpose |
|---|---|
| `fgetpos(fstream, &filepos)` | Store current file pointer position |
| `fsetpos(fstream, filepos)` | Set file pointer to stored position |
| `rewind(fstream)` | Move file pointer to beginning |
| `ftell(fstream)` | Return current position (bytes from beginning) |

---

### Random Access — CRUD Operations on Records

```c
struct Employee {
    int id;
    char name[30];
    float salary;
};

// Write a record at position `pos`
void writeRecord(FILE *file, int pos, struct Employee emp)
{
    fseek(file, pos * sizeof(struct Employee), SEEK_SET);
    fwrite(&emp, sizeof(struct Employee), 1, file);
}

// Read a record at position `pos`
void readRecord(FILE *file, int pos)
{
    struct Employee emp;
    fseek(file, pos * sizeof(struct Employee), SEEK_SET);
    fread(&emp, sizeof(struct Employee), 1, file);
    printf("ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
}

// Update a record at position `pos`
void updateRecord(FILE *file, int pos, struct Employee newEmp)
{
    fseek(file, pos * sizeof(struct Employee), SEEK_SET);
    fwrite(&newEmp, sizeof(struct Employee), 1, file);
}

// Delete a record (overwrite with empty record)
void deleteRecord(FILE *file, int pos)
{
    struct Employee empty = {0, "", 0.0};
    fseek(file, pos * sizeof(struct Employee), SEEK_SET);
    fwrite(&empty, sizeof(struct Employee), 1, file);
}
```

---

## Quick Reference Summary

### Common Header Files

| Header | Contains |
|---|---|
| `<stdio.h>` | `printf`, `scanf`, `fopen`, `fclose`, `fread`, `fwrite`... |
| `<stdlib.h>` | `malloc`, `calloc`, `realloc`, `free`, `exit`... |
| `<string.h>` | `strcpy`, `strcat`, `strlen`, `strcmp`, `strupr`, `strlwr`... |
| `<math.h>` | `sqrt`, `pow`, `sin`, `cos`, `log`... |
| `<ctype.h>` | `isalpha`, `isdigit`, `toupper`, `tolower`... |

---

### Format Specifiers Cheat Sheet

| Specifier | Type | Notes |
|---|---|---|
| `%d` | `int` | Decimal integer |
| `%i` | `int` | Integer |
| `%u` | `unsigned int` | Unsigned decimal |
| `%f` | `float` / `double` | Floating-point |
| `%lf` | `double` | Double (scanf) |
| `%e` | `float` / `double` | Scientific notation |
| `%c` | `char` | Single character |
| `%s` | `char[]` | String |
| `%x` | `int` | Hexadecimal (lowercase) |
| `%o` | `int` | Octal |
| `%p` | pointer | Pointer address |
| `%ld` | `long int` | Long integer |
| `%hd` | `short int` | Short integer |

---

### File I/O Functions Cheat Sheet

| Function | Purpose |
|---|---|
| `fopen(name, mode)` | Open a file |
| `fclose(fp)` | Close a file |
| `fprintf(fp, fmt, ...)` | Formatted write to file |
| `fscanf(fp, fmt, ...)` | Formatted read from file |
| `fgetc(fp)` / `getc(fp)` | Read one character |
| `fputc(ch, fp)` / `putc(ch, fp)` | Write one character |
| `fgets(str, n, fp)` | Read a string |
| `fputs(str, fp)` | Write a string |
| `fread(&var, size, n, fp)` | Read binary block |
| `fwrite(&var, size, n, fp)` | Write binary block |
| `fseek(fp, offset, whence)` | Move file pointer |
| `ftell(fp)` | Get file pointer position |
| `rewind(fp)` | Reset file pointer to start |
| `feof(fp)` | Check end-of-file |

---

*These notes are compiled from the BDS103 Programming in C course material, Tribhuvan University — School of Mathematical Sciences.*
