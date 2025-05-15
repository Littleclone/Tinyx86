# Rules
* MIT License
* Copyright (c) 2025 Littleclone
* Permission is granted to use, copy, modify, and distribute this software,
* provided that the copyright notice and this permission notice are included.
* The software is provided "as is", without warranty of any kind.
---
## Functions:
Function names differ in which context they are used.
1. A public Function (callable between multiple files) should have a "P_" as the beginning.
2. A local function (only used in the file it is defined in) should have a "L_" as the beginning.
3. A function name has to begin with a Uppercase letter. (Example: P_PrintString or L_Add)
4. A function name should have for different things in the name a Uppercase letter. (Example: P_PrintString or L_Add, **not** P_Print_String or L_Add_String)
5. A function name should be short. (Example: P_PrintString or L_Add)
6. A function name should show what the function does.
7. Need a comment with the Params, returns, notes and so explaining the function if you hover over the function.

Function others:
1. Function parameter have to use a name that makes sense.
2. Function parameter names have to follow the local variable rules.
3. Function parameter names have to be short.
4. Function parameter names have to show what the parameter does.

---
## Variables:
1. Variable names have to be short.
2. Variable names have to show what the variable does.
3. Variables that are local (in the same file) has to be lowercase.
4. Variables that are public (in the same file) has to be Uppercase.
5. Variables that are global (usable in external files) have to start with a G_ and be Uppercase.

Variables exceptions:
1. Variables that are reused for different things in the same file/function need a generic name.

---
## Pointer:
1. Pointers follow the same rules as variables.
2. Pointers that point to the head of something (like a linked list) has to be named with a "ptr" prefix.
3. If the Pointer is Constant then the prefix is "C_", if the value is Constant then it needs the suffix "_C".
---
## Other Variable types:
1. Follow the same rules as variables.
2. Constants have to be named with a "C_" prefix.

---
## Files and header:
1. Files and header must have the same names.
2. Files and header must show what the file/header does.
3. Includes are only allowed in the file where they are used, not in the header, except its needed for the function prototypes.

---