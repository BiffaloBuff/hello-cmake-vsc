# hello-cmake-vsc

VSCode using CMake to launch gdb with program command line arguments

## Steps

1. Open this directory in VS Code
1. Run the VS Code task "CMake: Configure" which will create a directory `build` and run `cmake` in it
1. Open `helloworld.cpp` in a VSCode editor
1. Run the task defined in [launch.json](.vscode/launch.json) "(gdb) Launch"
1. The debugger launches, pulling information from CMake, and command line parameters are pulled from `launch.json`

## References

https://github.com/microsoft/vscode-cmake-tools/blob/main/docs/debug-launch.md#gdb