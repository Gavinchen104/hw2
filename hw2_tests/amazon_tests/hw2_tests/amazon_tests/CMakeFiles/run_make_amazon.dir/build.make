# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/codio/workspace/hw2/hw2_tests/amazon_tests/hw2_tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/codio/workspace/hw2/hw2_tests/amazon_tests/hw2_tests

# Utility rule file for run_make_amazon.

# Include the progress variables for this target.
include amazon_tests/CMakeFiles/run_make_amazon.dir/progress.make

amazon_tests/CMakeFiles/run_make_amazon: /home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon


/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: /home/codio/workspace/hw2/hw2_tests/amazon_tests/CMakeFiles/3.10.2/CompilerIdCXX/CMakeCXXCompilerId.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: /home/codio/workspace/hw2/hw2_tests/amazon_tests/ConsoleParser.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: /home/codio/workspace/hw2/hw2_tests/amazon_tests/DatabaseParser.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: /home/codio/workspace/hw2/hw2_tests/amazon_tests/Utility.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: /home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon_checker.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: /home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon_stress_tests.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: /home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon_tests.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: CMakeFiles/3.10.2/CompilerIdCXX/CMakeCXXCompilerId.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: amazon_tests/ConsoleParser.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: amazon_tests/DatabaseParser.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: amazon_tests/Utility.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: amazon_tests/amazon_checker.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: amazon_tests/amazon_stress_tests.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: amazon_tests/amazon_tests.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/misc_utils.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/random_generator.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/runtime_evaluator.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/user_code_runner.cpp
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: /home/codio/workspace/hw2/hw2_tests/amazon_tests/ConsoleParser.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: /home/codio/workspace/hw2/hw2_tests/amazon_tests/DatabaseParser.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: /home/codio/workspace/hw2/hw2_tests/amazon_tests/Utility.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: /home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon_checker.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: amazon_tests/ConsoleParser.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: amazon_tests/DatabaseParser.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: amazon_tests/Utility.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: amazon_tests/amazon_checker.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/generated_headers/kwsys/Configure.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/generated_headers/kwsys/Encoding.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/generated_headers/kwsys/Process.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/generated_headers/kwsys/SharedForward.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/generated_headers/kwsys/System.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/kwsys/kwsysPrivate.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/libperf/libperf.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/misc_utils.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/random_generator.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/rang.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/runtime_evaluator.h
/home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon: testing_utils/user_code_runner.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/codio/workspace/hw2/hw2_tests/amazon_tests/hw2_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running 'make' in hw2 directory..."
	cd /home/codio/workspace/hw2/hw2_tests/amazon_tests && make

run_make_amazon: amazon_tests/CMakeFiles/run_make_amazon
run_make_amazon: /home/codio/workspace/hw2/hw2_tests/amazon_tests/amazon
run_make_amazon: amazon_tests/CMakeFiles/run_make_amazon.dir/build.make

.PHONY : run_make_amazon

# Rule to build all files generated by this target.
amazon_tests/CMakeFiles/run_make_amazon.dir/build: run_make_amazon

.PHONY : amazon_tests/CMakeFiles/run_make_amazon.dir/build

amazon_tests/CMakeFiles/run_make_amazon.dir/clean:
	cd /home/codio/workspace/hw2/hw2_tests/amazon_tests/hw2_tests/amazon_tests && $(CMAKE_COMMAND) -P CMakeFiles/run_make_amazon.dir/cmake_clean.cmake
.PHONY : amazon_tests/CMakeFiles/run_make_amazon.dir/clean

amazon_tests/CMakeFiles/run_make_amazon.dir/depend:
	cd /home/codio/workspace/hw2/hw2_tests/amazon_tests/hw2_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/codio/workspace/hw2/hw2_tests/amazon_tests/hw2_tests /home/codio/workspace/hw2/hw2_tests/amazon_tests/hw2_tests/amazon_tests /home/codio/workspace/hw2/hw2_tests/amazon_tests/hw2_tests /home/codio/workspace/hw2/hw2_tests/amazon_tests/hw2_tests/amazon_tests /home/codio/workspace/hw2/hw2_tests/amazon_tests/hw2_tests/amazon_tests/CMakeFiles/run_make_amazon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : amazon_tests/CMakeFiles/run_make_amazon.dir/depend

