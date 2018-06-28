# linked-list-tutorial
The goal of this project is to provide a tutorial to test knowledge on fundamental programming topics and to instruct on C/C++ best practices. The project includes header files with the interface to an unimplemented linked-list. There are also main program files which use the interface and can be compiled and run to test your implementation. By successfully completing the code, you will demonstrate an understanding of dynamic memory and good interface design.

## Getting Started
This project assumes macOS, but it should work on any POSIX compliant system with only a little modification. All necessary requirements already come packaged with macOS, so nothing has to be downloaded. Note that macOS may prompt you to install developer tools if you do not already have them downloaded.
```
make
clang
clang++
```

### Downloading
The first step is to fetch the repository from Github. The source can be downloaded by clicking on `Clone or download` followed by `Download ZIP` on the linked-list-tutorial Github page. Alternatively, you can fetch the repository using the git command line tools by

```
git fetch https://github.com/thomasbarrett/linked-list-tutorial.git
```

### Building
In order to compile the project, use the command line to navigate the the `linked-list-tutorial/c` directory. Then, execute the following command, which will compile your project and generate an executable called `list_test`.
```
make all
```
### Testing
After compiling the project, execute it with the following command.
```
./list_test
```
If your implementation is written correctly, you should see the following output in the terminal
```
list of size 3
0: 4
1: 5
2: 6
```

### Future
I am in the process of building a parallel project for c++ to exemplify the basic similarities between the two languages.
