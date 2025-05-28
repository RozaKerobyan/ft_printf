# FT_PRINTF 🙈
`ft_printf` is a custom implementation of the standard `printf` function in C. It supports formatted output conversion for various data types, including characters, strings, integers, and hexadecimal numbers. The project is designed to improve understanding of variadic functions and formatted output handling in C.

## Features:
- Supports format specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`
- Works with `va_list` for handling multiple arguments
- Implements custom formatting without relying on the standard `printf` library

## 🚀 Setup

### 1. Clone the Repository
Clone the repository to your local machine using the following command:

``` bash
git clone git@github.com:RozaKerobyan/ft_printf.git
```

### 2. Navigate to the ft_printf Directory
``` bash
cd ft_printf
```

### 3. Compile the Library
``` bash
make
```

### 📌 Usage
#### To include Libft in your C file, add:
``` c
#include "ft_printf.h"
```

### Example: `main.c`
``` c
#include "ft_printf.h"

int main()
{
    ft_printf("%d", 16);
    return (0);
}
```
