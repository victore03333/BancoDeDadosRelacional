//
// Created by victor on 01/11/22.
//

#include "Coronel.h"

Coronel::Coronel() {
    std::vector<std::vector<std::string>> x;
    std::vector<std::string> y;

    x = busca("Id-militar", "Id-militar");
    y=x[0];
    y.insert(y.end(), "Id-coronel");
    y.insert(y.end(), "Condecorações");
    x[0] = y;
    setTupla(x);
    setRelacao("Coronel");
    setChaveprimaria("Id-coronel");

    carregaDados();
}
