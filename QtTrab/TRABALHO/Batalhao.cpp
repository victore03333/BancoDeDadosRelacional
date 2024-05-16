//
// Created by victor on 01/11/22.
//

#include "Batalhao.h"
Batalhao::Batalhao() {
    std::vector<std::vector<std::string>> x;
    std::vector<std::string> y;

    y.insert(y.end(), "Id-batalhão");
    y.insert(y.end(), "Cidade");
    y.insert(y.end(), "Endereco");
    y.insert(y.end(), "Id-coronel");


    x.insert(x.begin(), y);
    setRelacao("Batalhao");
    setTupla(x);
    setChaveprimaria("Id-batalhão");

    carregaDados();
}

/*void Batalhao::insercao(const std::vector<std::string> &nova_tupla) {
    this->insercao(nova_tupla);
}

void Batalhao::remocao(const std::string &atributo, const std::string &busca) {
    this->remocao(atributo, busca);
}

std::vector<std::vector<std::string>> Batalhao::busca(const std::string &atributo, const std::string &busca) {
    return this->busca(atributo, busca);
}
void Batalhao::Modificao(const std::string& atributo_a_mofificar, const std::string& conteudo_atributo, const std::string& novo_atributo) {
    this->Modificacao(atributo_a_mofificar, conteudo_atributo, novo_atributo);
}
void Batalhao::novaRelacaoEstrangeira(Relacao *NovaRelacaoEstrangeira) {
    this->contido(NovaRelacaoEstrangeira);
}
*/
