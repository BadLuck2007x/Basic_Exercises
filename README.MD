# Basic Exercises

A collection of small programming exercises and examples in C, C++, and Python.

**Repository Layout**

- **`C/`**: C language exercises (e.g., `C1.c`, `C2.c`, ...).
- **`Cpp/`**: C++ exercises (e.g., `Cpp1.cpp`, `Cpp2.cpp`, ...).
- **`Python/`**: Python exercises (e.g., `Python1.py`, `Python2.py`, ...).
- **`images/`**, **`elements/`**: example assets used by exercises.

**Quick Start (Windows / PowerShell)**

Open a PowerShell terminal and run the commands below from the repository root (`Basic_Exercises`).

- Build and run a C file (example `C1.c`):

```powershell
cd .\C
gcc C1.c -o C1.exe
.\C1.exe
```

- Build and run a C++ file (example in `Cpp`):

```powershell
cd ..\Cpp
g++ Cpp9.cpp -o Cpp9.exe -Wall -Wextra
.\Cpp9.exe
```

- Run a Python script (example `Python1.py`):

```powershell
cd ..\Python
python Python1.py
```

**Notes & Tips**

- Compiler tools: install `gcc`/`g++` (MinGW or MSYS2) or use WSL for a Unix-like environment.
- Use `-Wall -Wextra` with `g++` to see helpful compiler warnings.

**Contributing**

- Create issues or pull requests with improvements, fixes, or new exercises.

**License**

- No license specified. Add a `LICENSE` file if you want to make usage terms explicit.
