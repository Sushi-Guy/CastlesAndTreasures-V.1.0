#include <iostream>
#include <string>
#include <fstream>

#include "headers/load.h"

// Variables & constants avalible to all of main.cpp
std::string noStop;
std::ifstream loadWorldOne;
std::ofstream makeWorldOne;

// Functions
void clearNR() {
    for(int i = 0; i < 51; i++) {
        std::cout << "\n";
    }
}

int main() {
    // Load
    std::cout << "Loading...\n";
    loadWorldOne.open("worlds/worldOne/pfwoLD.txt");
    if(!loadWorldOne.is_open()) {
        std::cout << "Error opening pfwo.txt (Load)\n";
        return 1;
    }
    makeWorldOne.open("pfwo.txt");
    if(!makeWorldOne.is_open()) {
        std::cout << "Error opening pwfo.txt (Make)\n";
        return 1;
    }


    std::cout << "### ### ### ### #   ### ###        \n#   # # #    #  #   #   #          \n#   ### ###  #  #   ##  ###        \n#   # #   #  #  #   #     #        \n### # # ###  #  ### ### ###        \n\n#### #  # ###                      \n#### ## # #  #                     \n#  # # ## ###                      \n\n### ### ### ### ### # # ### ### ###\n #  # # #   # # #   # # # # #   #  \n #  ### ##  ### ### # # ### ##  ###\n #  ##  #   # #   # # # ##  #     #\n #  # # ### # # ### ### # # ### ###\n\n # #  #    ####                    \n # # ##    ## #                    \n # #  #    ## #                    \n # #  #    # ##                    \n  #  ### # ####                    \n";
    

    // Exit
    std::cout << "Enter any key(s) to exit...";
    std::cin >> noStop;
    
    return 0;
}