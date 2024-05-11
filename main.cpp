#include <iostream>
#include <string>
#include <fstream>

#include "headers/load.h"

// Variables & constants avalible to all of main.cpp
std::string noStop;
std::ifstream loadWorld;
std::ofstream makeWorld;

// Functions
void clearNR() {
    for(int i = 0; i < 51; i++) {
        std::cout << "\n";
    }
}

int main() {
    std::cout << "Loading...\n";
    

    std::cout << "### ### ### ### #   ### ###        \n#   # # #    #  #   #   #          \n#   ### ###  #  #   ##  ###        \n#   # #   #  #  #   #     #        \n### # # ###  #  ### ### ###        \n\n                                 #### #  # ###                      \n#### ## # #  #                     \n#  # # ## ###                      \n\n### ### ### ### ### # # ### ### ###\n #  # # #   # # #   # # # # #   #  \n #  ### ##  ### ### # # ### ##  ###\n #  ##  #   # #   # # # ##  #     #\n #  # # ### # # ### ### # # ### ###\n\n # #  #    ####                    \n # # ##    ## #                    \n # #  #    ## #                    \n # #  #    # ##                    \n  #  ### # ####                    \n";
    
    std::cout << "Enter any key(s) to exit...";
    std::cin >> noStop;
    return 0;
}