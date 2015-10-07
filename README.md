# cppstarter

This template provides a quick starter way of starting a new project
using the GoogleTest testing framework.

Every project should be started with writing tests first, followed by
the actual code.

## Setup

### Download

1. Automatic setup procedure

```
git clone https://github.com/breiting/cppstarter.git --recursive
```

2. Manual setup procedure

```
git clone https://github.com/breiting/cppstarter.git
git submodule update --init --recursive  
```

### Compilation

Take a look at the top level CMakeLists.txt file and modify it to fit your
project's needs.

```
cd cppstarter
mkdir build
cd build
cmake ..
make
./cppstarter
```

### Requirements

* CMake version 2.8 or higher
* C++ compiler (e.g. gcc or clang)
