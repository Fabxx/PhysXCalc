# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fab/Scrivania/PhysXCalc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fab/Scrivania/PhysXCalc/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.o: ../src/Tetha_angle_calc.cpp
CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fab/Scrivania/PhysXCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.o"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.o -MF CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.o.d -o CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.o -c /home/fab/Scrivania/PhysXCalc/src/Tetha_angle_calc.cpp

CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.i"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fab/Scrivania/PhysXCalc/src/Tetha_angle_calc.cpp > CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.i

CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.s"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fab/Scrivania/PhysXCalc/src/Tetha_angle_calc.cpp -o CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.s

CMakeFiles/main.dir/src/Vector_module.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Vector_module.cpp.o: ../src/Vector_module.cpp
CMakeFiles/main.dir/src/Vector_module.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fab/Scrivania/PhysXCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/src/Vector_module.cpp.o"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/Vector_module.cpp.o -MF CMakeFiles/main.dir/src/Vector_module.cpp.o.d -o CMakeFiles/main.dir/src/Vector_module.cpp.o -c /home/fab/Scrivania/PhysXCalc/src/Vector_module.cpp

CMakeFiles/main.dir/src/Vector_module.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Vector_module.cpp.i"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fab/Scrivania/PhysXCalc/src/Vector_module.cpp > CMakeFiles/main.dir/src/Vector_module.cpp.i

CMakeFiles/main.dir/src/Vector_module.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Vector_module.cpp.s"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fab/Scrivania/PhysXCalc/src/Vector_module.cpp -o CMakeFiles/main.dir/src/Vector_module.cpp.s

CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.o: ../src/Vectorial_Scalar_Product.cpp
CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fab/Scrivania/PhysXCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.o"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.o -MF CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.o.d -o CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.o -c /home/fab/Scrivania/PhysXCalc/src/Vectorial_Scalar_Product.cpp

CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.i"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fab/Scrivania/PhysXCalc/src/Vectorial_Scalar_Product.cpp > CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.i

CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.s"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fab/Scrivania/PhysXCalc/src/Vectorial_Scalar_Product.cpp -o CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.s

CMakeFiles/main.dir/src/delay.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/delay.cpp.o: ../src/delay.cpp
CMakeFiles/main.dir/src/delay.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fab/Scrivania/PhysXCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/src/delay.cpp.o"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/delay.cpp.o -MF CMakeFiles/main.dir/src/delay.cpp.o.d -o CMakeFiles/main.dir/src/delay.cpp.o -c /home/fab/Scrivania/PhysXCalc/src/delay.cpp

CMakeFiles/main.dir/src/delay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/delay.cpp.i"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fab/Scrivania/PhysXCalc/src/delay.cpp > CMakeFiles/main.dir/src/delay.cpp.i

CMakeFiles/main.dir/src/delay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/delay.cpp.s"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fab/Scrivania/PhysXCalc/src/delay.cpp -o CMakeFiles/main.dir/src/delay.cpp.s

CMakeFiles/main.dir/src/dump_memory.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/dump_memory.cpp.o: ../src/dump_memory.cpp
CMakeFiles/main.dir/src/dump_memory.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fab/Scrivania/PhysXCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/src/dump_memory.cpp.o"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/dump_memory.cpp.o -MF CMakeFiles/main.dir/src/dump_memory.cpp.o.d -o CMakeFiles/main.dir/src/dump_memory.cpp.o -c /home/fab/Scrivania/PhysXCalc/src/dump_memory.cpp

CMakeFiles/main.dir/src/dump_memory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/dump_memory.cpp.i"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fab/Scrivania/PhysXCalc/src/dump_memory.cpp > CMakeFiles/main.dir/src/dump_memory.cpp.i

CMakeFiles/main.dir/src/dump_memory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/dump_memory.cpp.s"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fab/Scrivania/PhysXCalc/src/dump_memory.cpp -o CMakeFiles/main.dir/src/dump_memory.cpp.s

CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.o: ../src/horizontal_rectilinear_motion.cpp
CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fab/Scrivania/PhysXCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.o"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.o -MF CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.o.d -o CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.o -c /home/fab/Scrivania/PhysXCalc/src/horizontal_rectilinear_motion.cpp

CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.i"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fab/Scrivania/PhysXCalc/src/horizontal_rectilinear_motion.cpp > CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.i

CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.s"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fab/Scrivania/PhysXCalc/src/horizontal_rectilinear_motion.cpp -o CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.s

CMakeFiles/main.dir/src/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/main.dir/src/main.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fab/Scrivania/PhysXCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/main.dir/src/main.cpp.o"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/main.cpp.o -MF CMakeFiles/main.dir/src/main.cpp.o.d -o CMakeFiles/main.dir/src/main.cpp.o -c /home/fab/Scrivania/PhysXCalc/src/main.cpp

CMakeFiles/main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/main.cpp.i"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fab/Scrivania/PhysXCalc/src/main.cpp > CMakeFiles/main.dir/src/main.cpp.i

CMakeFiles/main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/main.cpp.s"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fab/Scrivania/PhysXCalc/src/main.cpp -o CMakeFiles/main.dir/src/main.cpp.s

CMakeFiles/main.dir/src/menu.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/menu.cpp.o: ../src/menu.cpp
CMakeFiles/main.dir/src/menu.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fab/Scrivania/PhysXCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/main.dir/src/menu.cpp.o"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/menu.cpp.o -MF CMakeFiles/main.dir/src/menu.cpp.o.d -o CMakeFiles/main.dir/src/menu.cpp.o -c /home/fab/Scrivania/PhysXCalc/src/menu.cpp

CMakeFiles/main.dir/src/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/menu.cpp.i"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fab/Scrivania/PhysXCalc/src/menu.cpp > CMakeFiles/main.dir/src/menu.cpp.i

CMakeFiles/main.dir/src/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/menu.cpp.s"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fab/Scrivania/PhysXCalc/src/menu.cpp -o CMakeFiles/main.dir/src/menu.cpp.s

CMakeFiles/main.dir/src/switcher.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/switcher.cpp.o: ../src/switcher.cpp
CMakeFiles/main.dir/src/switcher.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fab/Scrivania/PhysXCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/main.dir/src/switcher.cpp.o"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/switcher.cpp.o -MF CMakeFiles/main.dir/src/switcher.cpp.o.d -o CMakeFiles/main.dir/src/switcher.cpp.o -c /home/fab/Scrivania/PhysXCalc/src/switcher.cpp

CMakeFiles/main.dir/src/switcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/switcher.cpp.i"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fab/Scrivania/PhysXCalc/src/switcher.cpp > CMakeFiles/main.dir/src/switcher.cpp.i

CMakeFiles/main.dir/src/switcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/switcher.cpp.s"
	/bin/clang++-13 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fab/Scrivania/PhysXCalc/src/switcher.cpp -o CMakeFiles/main.dir/src/switcher.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.o" \
"CMakeFiles/main.dir/src/Vector_module.cpp.o" \
"CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.o" \
"CMakeFiles/main.dir/src/delay.cpp.o" \
"CMakeFiles/main.dir/src/dump_memory.cpp.o" \
"CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.o" \
"CMakeFiles/main.dir/src/main.cpp.o" \
"CMakeFiles/main.dir/src/menu.cpp.o" \
"CMakeFiles/main.dir/src/switcher.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/src/Tetha_angle_calc.cpp.o
main: CMakeFiles/main.dir/src/Vector_module.cpp.o
main: CMakeFiles/main.dir/src/Vectorial_Scalar_Product.cpp.o
main: CMakeFiles/main.dir/src/delay.cpp.o
main: CMakeFiles/main.dir/src/dump_memory.cpp.o
main: CMakeFiles/main.dir/src/horizontal_rectilinear_motion.cpp.o
main: CMakeFiles/main.dir/src/main.cpp.o
main: CMakeFiles/main.dir/src/menu.cpp.o
main: CMakeFiles/main.dir/src/switcher.cpp.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fab/Scrivania/PhysXCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/fab/Scrivania/PhysXCalc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fab/Scrivania/PhysXCalc /home/fab/Scrivania/PhysXCalc /home/fab/Scrivania/PhysXCalc/build /home/fab/Scrivania/PhysXCalc/build /home/fab/Scrivania/PhysXCalc/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend
