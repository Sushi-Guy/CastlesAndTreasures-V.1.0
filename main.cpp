#include <iostream>
#include <string>


// Variables & constants avalible to all of main.cpp
std::string noStop;

int main() {
    std::cout << "### ### ### ### #   ### ###        \n#   # # #    #  #   #   #          \n#   ### ###  #  #   ##  ###        \n#   # #   #  #  #   #     #        \n### # # ###  #  ### ### ###        \n\n                                 #### #  # ###                      \n#### ## # #  #                     \n#  # # ## ###                      \n\n### ### ### ### ### # # ### ### ###\n #  # # #   # # #   # # # # #   #  \n #  ### ##  ### ### # # ### ##  ###\n #  ##  #   # #   # # # ##  #     #\n #  # # ### # # ### ### # # ### ###\n\n # #  #    ####                    \n # # ##    ## #                    \n # #  #    ## #                    \n # #  #    # ##                    \n  #  ### # ####                    \n";
    
    std::cout << "Enter any key(s) to exit...";
    std::cin >> noStop;
    return 0;
}