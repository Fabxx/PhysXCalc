[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![Linux](https://svgshare.com/i/Zhy.svg)](https://svgshare.com/i/Zhy.svg)
[![Windows](https://svgshare.com/i/ZhY.svg)](https://svgshare.com/i/ZhY.svg)

# PhysXCalc: physics calculator

This program aims to contain all the functions in physics to help in calculating values about vectors, force, gravity and much more.
This is an early stage WIP program written in C++, in the future i'm planning to add graphical interface with graphics representation.

Current available option: 
Vector Operations all in one: Module, atan, tetha, scalar/vectorial product.

# Requirements
  -g++ compiler included in mingw-w64 for windows <br />
  -in kali linux it's integrated  <br />
  -in ubuntu you must install it separately: ```sudo apt-get install g++``` <br />
  -cmake
  

# Compiling binaries
-IN VS CODE:
Install C/C++ Intellisense plugin from microsoft.
install the CMake C/C++ Project generator: https://marketplace.visualstudio.com/items?itemName=ChenPerach.c-cpp-cmake-project-creator
Open the project folder and compile it with ctrl+shift+b (Release or debug). The makefile included will automatically detect the files.
Since the build folder is already created, directly do:
```cd build <br />
   make``` <br />
   this will apply changes to the build everytime you edit the code.

-FROM TERMINAL:
cd build <br />
make <br />
Executable will be stored in build folder.  <br />


# Contributions

If you want to contribute to this project, you can simply fork this source, a makefile has been provided and tested on vs code, may work 
on other IDE's as well. If you find any bugs please report them on the issue tracker. If you want to implement a feature, do a  pull request.

# Copyright 2022 Revix

# THIS PROGRAM IS PROVIDED AS IS AND IT MAY NOT WORK UNDER ALL THE SITUATIONS, THIS PROGRAM IS DISTRIBUTED UNDER GNU GENERAL PUBLIC LICENSE V3.



