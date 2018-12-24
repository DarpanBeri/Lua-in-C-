## Lua in C++
**Note:** Lua in C++ is for a future prject which will be build upon this project. Lua 5.3.4 source folder is required to run this program.

#### Files included:
    Prog3_1.cpp:
        It takes a single command line argument which will be the name of a Lua file which will then be executed in a lua environment created in this file

#### Example compilation:
    g++ prog3_1.cpp -o prog3_1 -I lua-5.3.4/src -L lua-5.3.4/src -l lua -l m -l dl

#### Example execution:
    ./prog2_4 <file.lua>
**Note**: <> are not the part of the command

#### file.txt contents:
    -- hello world
    print("Hello World!")

#### Example run:
    Hello World!

Darpan Beri

darpanberi.99@gmail.com || dberi@sdsu.edu
