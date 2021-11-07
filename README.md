# LuaTypeDumper
A simple C++ application for dumping the latest Lua types of an application.

Here's an example output of the exploit.
```c++
> [0] nil
> [1] boolean
> [2] userdata
> [3] number
> [4] string
> [5] table
> [6] function
> [7] userdata
> [8] thread
> [9] proto
> [10] upval
```

What it does is just loop through the entire array until a new chunk of memory is introduced.
It will print all strings in the array together with its index, which is all we need.

Works on all Lua platforms as long as there is an luaT_typenames array.

Tested on: Lua5.1 Compiler, Roblox, Example Lua5.1 Program
