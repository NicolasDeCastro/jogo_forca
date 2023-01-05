#include <iostream>
#include <string>
#include "letra_correta.hpp"
 extern std::string PALAVRA_SECRETA = "ANALISE";


bool letra_correta(char chute) {
    int i;
    for (i = 0; i < PALAVRA_SECRETA.size(); i++) {
        if (chute == PALAVRA_SECRETA[i]) {
            return true;

        }

    }return false;


}