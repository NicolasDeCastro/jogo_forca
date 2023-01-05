#include<iostream>
#include<map>
#include"chutes_feitos.hpp"
extern std::map<char, bool> chutou;
const  std::string PALAVRA_SECRETA = "ANALISE";



void chute_feitos() {
   std:: cout << "\ndigite o seu chute!!!!" << std::endl;
    for (char letra : PALAVRA_SECRETA) {
        if (chutou[letra]) {
            std::cout << letra << " ";
        }
        else {
            std::cout << "_ ";
        }
    }
}