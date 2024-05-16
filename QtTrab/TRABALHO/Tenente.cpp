//
// Created by victor on 01/11/22.
//

#include "Tenente.h"

Tenente::Tenente() {
    std::vector<std::vector<std::string>> x;
    std::vector<std::string> y;

    x = busca("Id-militar", "Id-militar");
    y=x[0];
    y.insert(y.end(), "Id-tenente");
    y.insert(y.end(), "Tempo de Comando");
    x[0] = y;
    setTupla(x);
    setRelacao("Tenente");
    setChaveprimaria("Id-tenente");

    carregaDados();
}
