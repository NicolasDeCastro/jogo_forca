#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include"letra_correta.hpp"
#include"nao_acertou.hpp"
#include"chutes_incorretos.hpp"
#include"chutes_feitos.hpp"

using namespace std;
map<char,bool> chutou;
vector<char>chutes_errados;
const string PALAVRA_SECRETA="ANALISE";








/*void le_arquivo() {

    ifstream arquivos;
    arquivos.open("Untitled2");
    int qtd_de_palavras;
    arquivos >> qtd_de_palavras;
    cout <<"qtd de palavras é"<<qtd_de_palavras<< endl;
    for(int i=0;i<qtd_de_palavras;i++){

        string palavras_recebidas;
        arquivos >> palavras_recebidas;
    }


}*/

int main()
{
    char chute;

    cout << "********jogo da forca*******!" << endl;
    //le_arquivo();
    while( nao_acertou() && chutes_errados.size() < 5){
        chutes_incorretos();
        chute_feitos();
        cin >> chute;
        chutou[chute]=true;
        if(letra_correta(chute)){
            cout<<"sua chute esta correto!!!!"<< endl;

        }else{
            cout<<"seu chute esta incorreto!!!"<< endl;
            chutes_errados.push_back(chute);
        }
    }

    return 0;
}
