#include <iostream>
#include <string>
#include <fstream>

#include "headers/load.h"

// Variables & constants avalible to all of main.cpp
std::string noStop;
std::ifstream worldOneOut;

// Functions
void clearNR() {
    for(int i = 0; i < 51; i++) {
        std::cout << "\n";
    }
}

int main() {
    // Load
    std::cout << "Loading...\n";
    worldOneOut.open("worlds/worldOne/propertiesForWorldOne.txt");
    if(!worldOneOut.is_open()) {
        std::cout << "Error opening propertiesForWorldOne.txt";
        return 1;
    }


    std::cout << "### ### ### ### #   ### ###        \n#   # # #    #  #   #   #          \n#   ### ###  #  #   ##  ###        \n#   # #   #  #  #   #     #        \n### # # ###  #  ### ### ###        \n\n#### #  # ###                      \n#### ## # #  #                     \n#  # # ## ###                      \n\n### ### ### ### ### # # ### ### ###\n #  # # #   # # #   # # # # #   #  \n #  ### ##  ### ### # # ### ##  ###\n #  ##  #   # #   # # # ##  #     #\n #  # # ### # # ### ### # # ### ###\n\n # #  #    ####                    \n # # ##    ## #                    \n # #  #    ## #                    \n # #  #    # ##                    \n  #  ### # ####                    \n";
    

    // Exit
    std::cout << "Enter any key(s) to exit...";
    std::cin >> noStop;
    
    return 0;
}