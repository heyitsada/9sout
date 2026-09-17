# sout (string out)

sout is a lightweight, dependency-free C library built around small, reusable utilities for working with strings and data in general.

# 9sout
just sout on plan9, usage:
- build with mk
- test with 6.testsout(replace 6 if you use another architecture)
- mk clean and mk nuke for clean
# Features

| Header | Description |
|---|---|
| [sout_printout.h](./sout_printout.h) | Formatted & TUI output utilities. |
| [sout_text.h](./sout_text.h) | Text utilities|

Sout is best for optimization development on systems with POSIX or Win32.

---

## Usage

`sout` is a collection of independent single-header file of C components. Include only what your project requires.

```bash
git clone https://github.com/waxodium/sout/
```

For convenience, sout also ships with a minified single-header distribution containing the entire library at `dist/sout.min.h` (Minified) and `dist/sout.h` (Compacted).

```c
#include "sout.min.h"
// or
#include "sout.h"
```

---

# License

This library is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


