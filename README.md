# sout (string out)

`sout` is a lightweight, dependency-free C library designed as a minimalist alternative to `printf`.  while minimizing binary size and avoiding the massive overhead of the standard `stdio.h` library. 

**sout** or string out has one single feature. Print characters to the terminal screen. Very small, and is *purposely* tiny. A mini version of `printf` if you considered.

## Features
* **Minimal**: Used **ZERO** dependencies, just system headers while being very straightforward. 
* **Cross-Platform**: Native support for Windows (via `windows.h`) and POSIX systems (with `unistd.h`).
* **Small**: Designed to keep your binary size small.

Sout is best for optimization development on systems with POSIX or Win32.

---

## Installation
Clone the repository into your project directory:

```bash
git clone https://github.com/waxodium/sout.git
```

## Usage
Example:
```c
#include "sout.h"

int main() {
    sout("Hello, %s! You have %d new messages.\n", "User", 5);
    sout("Character: %c, Percent: %%\n", 'A');
    return 0;
}
```

## Format Specifiers
| Specifier | Description |
| --- | --- |
| `%s` | Prints a null-terminated string. |
| `%d` | Prints a signed integer. |
| `%c` | Prints a single character. |
| `%%` | Prints a literal percent sign. |

### Details:
- **Safety:** If a `%s` specifier receives a NULL pointer, it safely prints (null) instead of crashing.

- **Integer Conversion:** The %d specifier handles both positive and negative integers

- **Buffer Management:** sout uses a static internal buffer of 1024 bytes. If the output length exceeds this, the buffer is automatically flushed to stdout

