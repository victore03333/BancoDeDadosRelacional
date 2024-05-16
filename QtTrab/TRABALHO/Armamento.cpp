//
// Created by victor on 01/11/22.
//

#include "Armamento.h"

Armamento::Armamento() {
    std::vector<std::vector<std::string>> x;
    std::vector<std::string> y;

    y.insert(y.end(), "Id-arma");
    y.insert(y.end(), "Tipo de Arma");
    y.insert(y.end(), "Nome");
    y.insert(y.end(), "Id-batalhão");
    y.insert(y.end(), "Data de Fabricação");
    y.insert(y.end(), "Componentes");


    x.insert(x.begin(), y);
    setRelacao("Armamento");
    setTupla(x);
    setChaveprimaria("Id-arma");

    carregaDados();
}
