#  C++ Notes for CSC121 | VSCODE / XCODE
I use iTerm2 for my terminal with ohmyzsh on Mac M1. When I am in my directory of my files I use the following command to make a C++ executable file and run it in terminal.

*Update! I can also use Xcode which I am already familiar with for my day - to - day job (iOS Engineer) Opening up Xcode I select macOS -> Command Line Tool and select C++ as my language choice. For each homework assignment I need to run separately with I have to comment out the other files since we can only have one instance of int main().*

*Solution would be to use one main file and just call in seperate files so I dont need to run an issue with commenting out code in the future.*

# Command line method for making a file with g++
```
g++ -o TestProgram TestProgram.cpp
./TestProgram
```
