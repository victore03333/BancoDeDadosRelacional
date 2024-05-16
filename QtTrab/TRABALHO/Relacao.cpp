//
// Created by rgm43579 on 25/08/22.
//

#include "Relacao.h"
#include <fstream>
#include <iostream>
#include <utility>

//construtores e destrutores
Relacao::Relacao() {

}
Relacao::Relacao(const std::string& nova_relacao, const std::vector<std::vector<std::string>>& novas_tuplas) {
    copia_obj(nova_relacao, novas_tuplas);
}

Relacao::Relacao(const Relacao &other) {
    copia_obj(other.relacao, other.tuplas);
}

Relacao::~Relacao() {

}

/*Relacao Relacao::operator=(const Relacao& x) {
    copia_obj(x.relacao, x.tuplas);
    return Relacao(x);
}*/

//Estruturas de Dados
bool Relacao::insercao(const std::vector<std::string>& nova_tupla) {
    int cont;
    for(cont=0; cont< nova_tupla.size(); cont++){
        for(int cont2=0; cont2<nova_tupla[cont].size(); cont2++){
            if(nova_tupla[cont][cont2]=='|')return false;
        }
    }
    if(this->tuplas[0].size() != nova_tupla.size()) return false;
    for(cont=0; cont< this->tuplas[0].size(); cont++){
        if(this->tuplas[0][cont]==this->chavePrimaria)break;
    }
    if(busca(this->tuplas[0][cont], nova_tupla[cont]).empty()) {
        if (!this->contemRelacaoEstrangeira.empty()) {
            for (int i = 0; i < this->contemRelacaoEstrangeira.size(); i++) {
                for (int j = 0; j < this->tuplas[0].size(); j++) {
                    for (int k = 0; k < this->contemRelacaoEstrangeira[i]->tuplas[0].size(); k++) {
                        if (this->tuplas[0][j] == this->contemRelacaoEstrangeira[i]->tuplas[0][k]) {
                            if (this->contemRelacaoEstrangeira[i]->busca(contemRelacaoEstrangeira[i]->tuplas[0][k],
                                                                         nova_tupla[j]).empty()) {
                                return false;

                            } else {
                                this->tuplas.insert(this->tuplas.end(), nova_tupla);
                                return true;
                            }
                        }
                    }
                }
            }
        } else {
            this->tuplas.insert(this->tuplas.end(), nova_tupla);
            return true;
        }
    }else{
        return false;
    }
    return false;
}

std::vector<std::vector<std::string>> Relacao::busca(const std::string& atributo, const std::string& busca) {
    int j;
    std::vector<std::vector<std::string>> ResultBusca;
    unsigned linha = this->tuplas.size();
    unsigned coluna = this->tuplas[0].size();


    for(j=0; j<coluna; j++){
        if(atributo == this->tuplas[0][j]) break;
    }

    if(j==this->tuplas[0].size())return ResultBusca;

    for (int i = 0; i < linha; i++) {
        if(this->tuplas[i][j] == busca){
            ResultBusca.insert(ResultBusca.begin(), this->tuplas[i]);
        }
    }

    return ResultBusca;
}

void Relacao::remocao(const std::string& atributo, const std::string& busca) {
    int j;
    for(j=0; j<this->tuplas[0].size(); j++){
        if(atributo == this->tuplas[0][j]) break;
    }

    if(j==this->tuplas[0].size())return;

    for (int i = 1; i < this->tuplas.size(); i++) {
        if(this->tuplas[i][j] == busca){
            for(int k=0; k<this->tuplas[0].size(); k++){
                Modificacao(this->tuplas[0][k], this->tuplas[i][k], "");
            }
            this->tuplas.erase(this->tuplas.begin() + i--);
        }
    }
}

void Relacao::Modificacao(const std::string& atributo_a_mofificar, const std::string conteudo_atributo, const std::string novo_atributo) {
    int j, i;
    static bool ModificaAttFoiChamado= false;

    if(atributo_a_mofificar == this->chavePrimaria)
        if (!busca(atributo_a_mofificar, novo_atributo).empty()) return;

    for(j=0; j<this->tuplas[0].size(); j++){
        if(atributo_a_mofificar == this->tuplas[0][j]) break;
    }
    if(j==this->tuplas[0].size())return;

    for (i = 1; i < this->tuplas.size(); i++) {
        if(this->tuplas[i][j] == conteudo_atributo){
            this->tuplas[i][j] = novo_atributo;
        }
    }

    if(ModificaAttFoiChamado)return;
    ModificaAttFoiChamado=true;

    for(i=0;i<this->contidoRelacaoEstrangeira.size(); i++){
        this->contidoRelacaoEstrangeira[i]->Modificacao(atributo_a_mofificar, conteudo_atributo, novo_atributo);
    }
    ModificaAttFoiChamado=false;
}


//getters e setters

void Relacao::contido(Relacao *relacaoEstrangeira) {
    this->contidoRelacaoEstrangeira.insert(this->contidoRelacaoEstrangeira.end(), relacaoEstrangeira);
}
void Relacao::contem(Relacao *relacaoEstrangeira) {
    this->contemRelacaoEstrangeira.insert(this->contemRelacaoEstrangeira.end(), relacaoEstrangeira);
}
//arquivos

void Relacao::salvar() {
    std::fstream arq;
    arq.open(this->relacao,std::ios::out);
    if(arq.fail())exit(1);

    for(int i=1; i<this->tuplas.size(); i++){
        for(int j=0; j< this->tuplas[i].size(); j++){
            arq << this->tuplas[i][j];
            arq << "|";
        }
        arq << "\n";
    }
    arq.close();
}

//métodos privados
void Relacao::copia_obj(const std::string& nova_relacao, const std::vector<std::vector<std::string>>& novas_tuplas) {
    this->tuplas = novas_tuplas;
    this->relacao = nova_relacao;
}

//metodos protegidos
//arquivos
void Relacao::carregaDados() {
    std::fstream arq;
    std::string buffer;
    std::vector<std::string> tupla;
    unsigned i;
    char c;
    arq.open(this->relacao, std::ios::in);
    if(arq.fail())return;
    while(arq.read(&c, sizeof(char))){
        if(c!='|'){
            if(c=='\n'){
                this->tuplas.insert(this->tuplas.end(), tupla);
                tupla.clear();
            }else{
                buffer += c;
            }

        }else{
                tupla.insert(tupla.end(), buffer);
                buffer="";
        }
    }
}

void Relacao::setRelacao(const std::string &Nrelacao) {
    Relacao::relacao = Nrelacao;
}

void Relacao::setTupla(const std::vector<std::vector<std::string>> &Ntupla) {
    Relacao::tuplas = Ntupla;
}
void Relacao::setChaveprimaria(std::string NchavePrimaria) {
    this->chavePrimaria = std::move(NchavePrimaria);
}

