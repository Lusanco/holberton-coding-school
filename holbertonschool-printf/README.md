
# # holbertonschool-printf

`_printf` is a simplified implementation of the `printf` function in C, providing basic formatting capabilities for string and integer outputs.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Usage](#usage)
- [Examples](#examples)

## Overview

`_printf` is a C project that replicates some functionalities of the standard `printf` function. It is designed to handle basic formatting for strings (`%s`, `%c`, `%%`) and integers (`%d`, `%i`). The implementation includes a simplified version of the `printf` function (`_printf`) and helper functions for handling character and number formatting.

## Features

- Support for string formatting (`%s`, `%c`, `%%`).
- Basic integer formatting (`%d`, `%i`).
- Handling of special cases, such as `NULL` strings and negative numbers.

## Usage

To use the `_printf` function in your project, include the provided header file:

```c
#include "main.h"

```

Call the function with the desired format string and any additional arguments:

```c
int result = _printf("Hello, %s! The answer is %d.\n", "world", 42);
_printf("Total characters printed: %d\n", result);
```

## Examples

Here are some examples of using the _printf function:

```C
#include "main.h"

int main() {

    _printf("Hello Melissa, Alfre y Emma son los mas %s!\n", "duros");

    return 0;
}
```
This will output:

```c
Hello Melissa, Alfre y Emma son los mas duros!
```

## Authors

- [LUIS SANTIAGO](https://github.com/Lusanco)
- [EMMANUEL MALDONADO](https://github.com/emmanuelmaldonadomaldonado)
