#include<iostream>
#include<vector>
#include"chutes_incorretos.hpp"
 extern std::vector<char>chutes_errados;




void chutes_incorretos() {
    std::cout << "chutes errados :";
    for (char letras : chutes_errados) {
        std::cout << letras << " ";

    }

}