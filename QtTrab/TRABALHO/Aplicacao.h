//
// Created by victor on 24/11/22.
//

#ifndef TRABALHO_APLICACAO_H
#define TRABALHO_APLICACAO_H
#include "Coronel.h"
#include "Tenente.h"
#include "Soldado.h"
#include "Brigada.h"
#include "Batalhao.h"
#include "Armamento.h"
#include "Missao.h"
#include "vector"
#include "string"


class Aplicacao {
private:
    Coronel coronel;
    Tenente tenente;
    Soldado soldado;
    Brigada brigada;
    Batalhao batalhao;
    Armamento armamento;
    Missao missao;
    
    void salvarA();


public:
    Aplicacao();
    void insercao(std::vector<std::string> t, unsigned f);
    void remocao(std::string atributo, std::string busca, unsigned f);
    std::vector<std::vector<std::string>> busca(std::string atributo, std::string busca, unsigned f);
    void modificacao(std::string atributo, std::string elemento, std::string novoElemento, unsigned f);
    
};


#endif //TRABALHO_APLICACAO_H
