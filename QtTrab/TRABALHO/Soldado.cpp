//
// Created by victor on 01/11/22.
//

#include "Soldado.h"
#include <string>

Soldado::Soldado() {
    std::vector<std::vector<std::string>> x;
    std::vector<std::string> y;

    x = busca("Id-militar", "Id-militar");
    y=x[0];
    y.insert(y.end(), "Id-soldado");
    y.insert(y.end(), "Data de Ingresso");
    x[0] = y;
    setTupla(x);
    setRelacao("Soldado");
    setChaveprimaria("Id-soldado");

    carregaDados();
}
