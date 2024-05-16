//
// Created by rgm43579 on 25/08/22.
//

#ifndef TRABALHO_RELACAO_H
#define TRABALHO_RELACAO_H
#include <string>
#include <vector>

class Relacao {

    std::string relacao;
    std::string chavePrimaria;
    std::vector<std::vector<std::string>> tuplas;

    std::vector<Relacao*> contidoRelacaoEstrangeira;
    std::vector<Relacao*> contemRelacaoEstrangeira;

    void copia_obj(const std::string& nova_relacao, const std::vector<std::vector<std::string>>& novas_tuplas);


public:
    //construtores e destrutores
    Relacao();
    Relacao(const std::string& nova_relacao,const std::vector<std::vector<std::string>>& novas_tuplas);
    Relacao(const Relacao &other);
    ~Relacao();

    //sobrecarga de operadores
    //Relacao operator=(const Relacao& x);

    //estruturas de dados
    bool insercao(const std::vector<std::string>& nova_tupla);
    std::vector<std::vector<std::string>> busca(const std::string& atributo, const std::string& busca);
    void remocao(const std::string& atributo, const std::string& busca);
    void contido(Relacao *relacaoEstrangeira);
    void contem(Relacao *relacaoEstrangeira);
    void Modificacao(const std::string& atributo_a_mofificar, const std::string conteudo_atributo, const std::string novo_atributo);




    //arquivos
    void salvar();


protected:
    //arquivos
    void carregaDados();

    //seters e geters
    void setRelacao(const std::string &Nrelacao);
    void setTupla(const std::vector<std::vector<std::string>> &Ntupla);
    void setChaveprimaria(std::string NchavePrimaria);
};


#endif //TRABALHO_RELACAO_H
