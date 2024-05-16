//
// Created by victor on 01/11/22.
//

#include "Missao.h"

Missao::Missao() {
    std::vector<std::vector<std::string>> x;
    std::vector<std::string> y;

    y.insert(y.end(), "Id-missão");
    y.insert(y.end(), "Tipo de Missão");
    y.insert(y.end(), "Objetivo");
    y.insert(y.end(), "Id-brigada");

    x.insert(x.begin(), y);
    setRelacao("Missao");
    setTupla(x);
    setChaveprimaria("Id-missão");

    carregaDados();
}
