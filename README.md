```markdown
# nth-roots-cpp

Simple C++ program that computes the n-th complex roots of a real constant.

## Build (CMake)

1. Create a build directory:
   ```sh
   mkdir -p build && cd build
   ```
2. Run CMake and build:
   ```sh
   cmake ..
   cmake --build .
   ```
3. Run:
   ```sh
   ./nth-roots
   ```

## Build (g++ directly)

From project root:
```sh
g++ -std=c++17 -O2 -Wall -Wextra -o nth-roots src/main.cpp
./nth-roots
```

## Example
Input:
```
please input your equation's power (positive integer): 3
enter the constant value (real number): -8
```
Output:
```
The 3 complex roots are:
No.1: 1 + 1.73205i
No.2: 1 - 1.73205i
No.3: -2 + 0i
```
```
