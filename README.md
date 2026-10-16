# Hello World

A small C++23 program that asks for your name and prints a greeting.

## Requirements

- CMake 4.4 or newer
- Ninja
- Clang++ available on your `PATH`

The `default` CMake preset uses Ninja and Clang++ in Debug mode.

## Configure and build

From the repository root, run:

```powershell
cmake --preset default
cmake --build --preset default
```

You can also build the configured directory directly:

```powershell
cmake --build build
```

## Run

```powershell
.\build\hello.exe
```