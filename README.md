# Number System Converter (C++)

A command-line C++ application that converts numbers between binary and decimal representations with full input validation.

## Features

- Convert decimal (0–255) → 8-bit binary
- Convert binary → decimal
- Input validation for:
  - Invalid characters
  - Binary format rules
  - Decimal range constraints
  - Leading zero rules
- Custom conversion functions 

## Design

The project is structured into separate modules:

- `main.cpp` → input handling and program flow
- `converter.cpp` → conversion logic
- `converter.h` → function declarations

This separation improves readability and maintainability.

## Build & Run

```bash
g++ src/*.cpp -Iinclude -o converter
./converter
```

## Example

```text
Enter a number: 8
Converting decimal to binary. The result is 0000 1000
```
### Purpose

Built as part of early computer science studies to practice:

- Number systems
- String parsing
- Function design
- Input validation
- Modular C++ structure
