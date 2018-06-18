# The C Programming Language

This is my workbook as I work through the above book (Second Edition), using Visual Studio Code on macOS to do so. Open this folder in `vscode`, open the file you wish to run, and execute the `make and run` task with the file open. It will build the file, then execute the binary in one go via the `.vscode/tasks.json` config.

## Tooling

This is setup for `macOS`, so you will need to adjust the `tasks.json` and `c_cpp_properties.json` files to match your setup if you're on Linux/Windows.

### macOS
- `cd /usr/local/lib && sudo ln -s /Applications/Xcode.app/Contents/Developer/usr/lib/libLeaksAtExit.dylib`
- Ensure `leaks` binary from `XCode.app` is on your `$PATH`
- Install the XCode command-line tools

### Others
- Replace the `leaks` command in `tasks.json` with `valgrind` (perhaps)
- Adjust the `includePaths` array in `c_cpp_properties.json`
