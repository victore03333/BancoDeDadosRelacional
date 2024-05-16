//
// Created by victor on 01/11/22.
//

#include "Brigada.h"
Brigada::Brigada() {
    std::vector<std::vector<std::string>> x;
    std::vector<std::string> y;


    y.insert(y.end(), "Id-brigada");
    y.insert(y.end(), "Setor");
    y.insert(y.end(), "Tipo de Brigada");
    y.insert(y.end(), "Id-batalhão");
    y.insert(y.end(), "Id-Soldado");
    y.insert(y.end(), "Id-tenente");

    x.insert(x.begin(), y);

    setChaveprimaria("Id-brigada");
    setRelacao("Brigada");
    setTupla(x);

    carregaDados();
}

