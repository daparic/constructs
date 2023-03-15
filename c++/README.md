## Build
```
mkdir build && build
cmake ..
cmake --build .
```

Test your code:
```
./main
ctest --verbose
```

## Memory Leak Check 

Setup alias by:
```
alias valgrind='valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=valgrind-out.txt'
```

Then run your specific test executable code:
```
valgrind build/tests/main_test
valgrind build/main
```

Then examined generated file `valgrind-out.txt`
