#include <iostream>
#include <string>
#include "print.h"
#include "WriteInFile.h"


int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("No argument provided.");
        return 0;
    }

    if (std::string(argv[1]) == "-c") {
        printHelloWorld();
    } else if (std::string(argv[1]) == "-f") {
        createHelloWorldFile();
    } else {
        printf("Invalid argument.");
    }

    return 0;
}

