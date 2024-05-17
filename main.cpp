#include <iostream>
#include <string>
#include <fstream>



// Variables & constants avalible to all of main.cpp
std::string noStop;
std::ifstream worldOnePropertiesI;
std::ofstream worldOnePropertiesO;
std::ifstream worldTwoPropertiesI;
std::ofstream worldTwoPropertiesO;
std::ifstream worldThreePropertiesI;
std::ofstream worldThreePropertiesO;
std::ifstream worldFourPropertiesI;
std::ofstream worldFourPropertiesO;
std::ifstream worldFivePropertiesI;
std::ofstream worldFivePropertiesO;

// Functions
void clearNR() {
    for(int i = 0; i < 51; i++) {
        std::cout << "\n";
    }
}

int main() {
    // Load
    std::cout << "Loading...\n";
    worldOnePropertiesI.open("worlds/worldOne/propertiesForWorldOne.txt");
    if(!worldOnePropertiesI.is_open()) {
        std::cout << "Error opening propertiesForWorldOne.txt (I)";
        return 1;
    }
    worldTwoPropertiesI.open("worlds/worldTwo/propertiesForWorldTwo.txt");
    if(!worldTwoPropertiesI.is_open()) {
        std::cout << "Error opening propertiesForWorldTwo.txt (I)";
        return 1;
    }
    worldThreePropertiesI.open("worlds/worldThree/propertiesForWorldThree.txt");
    if(!worldThreePropertiesI.is_open()) {
        std::cout << "Error opening propertiesForWorldThree.txt (I)";
        return 1;
    }
    worldFourPropertiesI.open("worlds/worldFour/propertiesForWorldFour.txt");
    if(!worldFourPropertiesI.is_open()) {
        std::cout << "Error opening propertiesForWorldFour.txt (I)";
        return 1;
    }
    worldFivePropertiesI.open("worlds/worldFive/propertiesForWorldFive.txt");
    if(!worldFivePropertiesI.is_open()) {
        std::cout << "Error opening propertiesForWorldFive.txt (I)";
        return 1;
    }
    worldOnePropertiesO.open("worlds/worldOne/propertiesForWorldOne.txt");
    if(!worldOnePropertiesI.is_open()) {
        std::cout << "Error opening propertiesForWorldOne.txt (O)";
        return 1;
    }
    worldTwoPropertiesO.open("worlds/worldTwo/propertiesForWorldTwo.txt");
    if(!worldTwoPropertiesI.is_open()) {
        std::cout << "Error opening propertiesForWorldTwo.txt (O)";
        return 1;
    }
    worldThreePropertiesO.open("worlds/worldThree/propertiesForWorldThree.txt");
    if(!worldThreePropertiesI.is_open()) {
        std::cout << "Error opening propertiesForWorldThree.txt (O)";
        return 1;
    }
    worldFourPropertiesO.open("worlds/worldFour/propertiesForWorldFour.txt");
    if(!worldFourPropertiesI.is_open()) {
        std::cout << "Error opening propertiesForWorldFour.txt (O)";
        return 1;
    }
    worldFivePropertiesO.open("worlds/worldFive/propertiesForWorldFive.txt");
    if(!worldFivePropertiesI.is_open()) {
        std::cout << "Error opening propertiesForWorldFive.txt (O)";
        return 1;
    }
    
    clearNR();

    std::cout << "### ### ### ### #   ### ###        \n#   # # #    #  #   #   #          \n#   ### ###  #  #   ##  ###        \n#   # #   #  #  #   #     #        \n### # # ###  #  ### ### ###        \n\n#### #  # ###                      \n#### ## # #  #                     \n#  # # ## ###                      \n\n### ### ### ### ### # # ### ### ###\n #  # # #   # # #   # # # # #   #  \n #  ### ##  ### ### # # ### ##  ###\n #  ##  #   # #   # # # ##  #     #\n #  # # ### # # ### ### # # ### ###\n\n # #  #    ####                    \n # # ##    ## #                    \n # #  #    ## #                    \n # #  #    # ##                    \n  #  ### # ####                    \n";
    

    // Exit
    std::cout << "Enter any key(s) to exit...\n";
    std::cin >> noStop;
    std::cout << "Exiting...\n";
    worldOnePropertiesI.close();
    worldTwoPropertiesI.close();
    worldThreePropertiesI.close();
    worldFourPropertiesI.close();
    worldFivePropertiesI.close();
    worldOnePropertiesO.close();
    worldTwoPropertiesO.close();
    worldThreePropertiesO.close();
    worldFourPropertiesO.close();
    worldFivePropertiesO.close();
    return 0;
}