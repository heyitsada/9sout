# sout (string out)

sout is a lightweight, dependency-free C library built around small, reusable utilities for working with strings and data in general.

# Features
- Format Outputs
- Regex systems

Sout is best for optimization development on systems with POSIX or Win32.

---

## Usage

`sout` is organized as a collection of independent C components. Each component is provided as a matching `.h` header and `.c` source file. Use only the components your project requires; there is no need to link against the entire library.

Clone the repository:

```bash
git clone https://github.com/waxodium/sout.git
```

Copy the .h and .c files for the components you want into your project, keeping each matching pair together.

| Header | Description |
|---|---|
| `soutf.h` | Formatted output utilities. |
| `soutspn.h` | Extracts data between specified delimiters. |


## Single-Header Distribution

For convenience, sout also ships with a minified single-header distribution containing the entire library at ``dist/sout.h``. This is an optional alternative for projects that prefer a single file.

```c
#include "sout.h"
```
