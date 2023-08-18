#include "WriteInFile.h"
#include <iostream>
#include <fstream>

void createHelloWorldFile() {
    std::ofstream file("helloWorld.txt");
    if (file.is_open()) {
        file << "helloWorld" << std::endl;
        file.close();
        std::cout << "Created helloWorld.txt and wrote 'helloWorld' in it." << std::endl;
    } else {
        std::cerr << "Failed to create helloWorld.txt." << std::endl;
    }
}

