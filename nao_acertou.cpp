#include<string>
#include <map>
#include"nao_acertou.hpp"
const std::string PALAVRA_SECRETA = "ANALISE";
 extern std::map<char, bool> chutou;

bool nao_acertou() {
    for (char letra : PALAVRA_SECRETA) {
        if (!chutou[letra]) {
            return true;
        }
    }return false;

}