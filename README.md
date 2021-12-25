# C++ Template

Template for c++ programs. Previous configuration to facilitate your development.
### How to use

You can write code at `/src` folder. Use `.cpp` extension in filenames for that Makefile can find them.

If you must add extra library paths use `CPPINCS` and if you must add extra static libraries use `CPPLIBS` at `Makefile`.

You can change excutable filename changing `EXEC_FILE` variable at `Makefile`.

### Make commands

Command | Description |
:-------|:--------------|
build   | compile source code |
run     | execute program |
clean   | remove build files |
