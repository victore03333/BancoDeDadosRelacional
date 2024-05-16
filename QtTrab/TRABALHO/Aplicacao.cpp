//
// Created by victor on 24/11/22.
//

#include "Aplicacao.h"
#include <iostream>

Aplicacao::Aplicacao() {
    //setando ponteiros de coronel
    this->coronel.contido(&this->batalhao);

    //setando ponteiros de tenente
    this->tenente.contido(&this->brigada);

    //setando ponteiros de Soldado
    this->soldado.contido(&this->brigada);

    //setando ponteiros de brigada
    this->brigada.contido(&this->missao);
    this->brigada.contem(&this->tenente);
    this->brigada.contem(&this->soldado);
    this->brigada.contem(&this->batalhao);

    //setando ponteiros de batalhao
    this->batalhao.contido(&this->armamento);
    this->batalhao.contido(&this->brigada);
    this->batalhao.contem(&this->coronel);


    //setando ponteiros aarmamento
    this->armamento.contem(&this->batalhao);

    //setando ponteiros missao
    this->missao.contem(&this->brigada);

}

void Aplicacao::insercao(std::vector<std::string> t, unsigned int f) {
    switch (f) {
        case 1:
            this->coronel.insercao(t);
            break;
        case 2:
            this->tenente.insercao(t);
            break;
        case 3:
            this->soldado.insercao(t);
            break;
        case 4:
            this->brigada.insercao(t);
            break;
        case 5:
            this->batalhao.insercao(t);
            break;
        case 6:
            this->armamento.insercao(t);
        case 7:
            this->missao.insercao(t);
            break;
    }
    salvarA();
}

void Aplicacao::remocao(std::string atributo, std::string busca, unsigned f){
    switch (f) {
        case 1:
            this->coronel.remocao(atributo, busca);
            break;
        case 2:
            this->tenente.remocao(atributo, busca);
            break;
        case 3:
            this->soldado.remocao(atributo, busca);
            break;
        case 4:
            this->brigada.remocao(atributo, busca);
            break;
        case 5:
            this->batalhao.remocao(atributo, busca);
            break;
        case 6:
            this->armamento.remocao(atributo, busca);
            break;
        case 7:
            this->missao.remocao(atributo, busca);
            break;
    }
    salvarA();
}

std::vector<std::vector<std::string>> Aplicacao::busca(std::string atributo, std::string busca, unsigned f){
    std::vector<std::vector<std::string>> resultBusca;
    switch (f) {
        case 1:
            resultBusca=this->coronel.busca(atributo, busca);
            break;
        case 2:
            resultBusca=this->tenente.busca(atributo, busca);
            break;
        case 3:
            resultBusca=this->soldado.busca(atributo, busca);
            break;
        case 4:
            resultBusca=this->brigada.busca(atributo, busca);
            break;
        case 5:
            resultBusca=this->batalhao.busca(atributo, busca);
            break;
        case 6:
            resultBusca=this->armamento.busca(atributo, busca);
            break;
        case 7:
            resultBusca=this->missao.busca(atributo, busca);
            break;
    }
    return resultBusca;
}
void Aplicacao::modificacao(std::string atributo, std::string elemento, std::string novoElemento, unsigned f){
    switch (f) {
        case 1:
            this->coronel.Modificacao(atributo, elemento, novoElemento);
            break;
        case 2:
            this->tenente.Modificacao(atributo, elemento, novoElemento);
            break;
        case 3:
            this->soldado.Modificacao(atributo, elemento, novoElemento);
            break;
        case 4:
            this->brigada.Modificacao(atributo, elemento, novoElemento);
            break;
        case 5:
            this->batalhao.Modificacao(atributo, elemento, novoElemento);
            break;
        case 6:
            this->armamento.Modificacao(atributo, elemento, novoElemento);
            break;
        case 7:
            this->missao.Modificacao(atributo, elemento, novoElemento);
            break;
    }
    salvarA();
}

void Aplicacao::salvarA(){
    this->coronel.salvar();
    this->tenente.salvar();
    this->soldado.salvar();
    this->brigada.salvar();
    this->batalhao.salvar();
    this->armamento.salvar();
    this->missao.salvar();
}


