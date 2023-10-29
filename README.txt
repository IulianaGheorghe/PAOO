To build and run a project follow these steps:

1. From the command line create a build directory:
Example: mkdir Tema1_build

2. Navigate to that build directory and run cmake to configure the project and generate a native build system:
Example: cd Tema1_build
         cmake ../Tema1

3. Call that build system to actually compile/link the project:
Example: cmake --build .