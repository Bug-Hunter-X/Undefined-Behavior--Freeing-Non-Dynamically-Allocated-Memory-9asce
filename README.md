# C Bug: Undefined Behavior with free()

This repository demonstrates a common C programming error: attempting to free memory that was not dynamically allocated using `malloc()`, `calloc()`, or `realloc()`.  This leads to undefined behavior and can cause crashes or other unpredictable results.

The `bug.c` file shows the erroneous code.  The `bugSolution.c` file provides a corrected version.

**Understanding the Problem:**

In C, dynamically allocated memory must be explicitly freed using `free()` to prevent memory leaks.  However, using `free()` on a pointer that does not point to dynamically allocated memory is incorrect and invokes undefined behavior.  This is because the memory management system is not aware of this pointer and cannot properly release the memory.

**How to fix it:**

Only call `free()` on pointers previously obtained via `malloc()`, `calloc()`, or `realloc()`. If you're working with local variables like `x` in the example, there is no need to `free()` the memory. The memory will be automatically released when the function returns.