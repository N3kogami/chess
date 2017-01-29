#include "more.h"

int main() {
    
    restartGame(standard);

    std::cout << "To leave the game enter\"exit\"\n";
    std::string inputStr;
    while(true) {
        
            if(activePlayer == true) {std::cout << "White player's #" << static_cast<int>(turnCount) << " turn: ";}
            if(activePlayer == false) {std::cout << "Black player's #" << static_cast<int>(turnCount) << " turn: ";}

            std::cin >> inputStr;
            if(inputStr == "exit") {std::cout << "Ending game!" << std::endl; break;}
            std::cout << move(inputStr) << std::endl;
    }
    
    
    
    return 0;
}
