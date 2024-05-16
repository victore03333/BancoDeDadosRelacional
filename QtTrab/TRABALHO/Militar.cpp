//
// Created by victor on 01/11/22.
//
#include "Militar.h"
#include <string>
#include "Relacao.h"
Militar::Militar() {
    std::vector<std::vector<std::string>> x;
    std::vector<std::string> y;

    y.insert(y.end(), "Id-militar");
    y.insert(y.end(), "Nome");
    y.insert(y.end(), "Idade");
    y.insert(y.end(), "Data de Nascimento");
    y.insert(y.end(), "CPF");

    x.insert(x.begin(), y);
    setRelacao("Militar");
    setTupla(x);
    setChaveprimaria("Id-militar");
}



