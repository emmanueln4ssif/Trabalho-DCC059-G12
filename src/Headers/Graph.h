#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include "Node.h"

using namespace std;

class Graph{

    private:
        int ordem;
        bool ehDirecionado;
        bool ehPonderadoArestas;
        bool ehPonderadoNos;
        int numArestas;
        int posicao;

        Node *primeiro;
        Node *ultimo;

    public:
        Graph(int ordem, bool ehDirecionado, bool ehPonderadoArestas, bool ehPonderadoNos);
        ~Graph();

        int getOrdem();
        bool getEhDirecionado();
        bool getEhPonderadoArestas();
        bool getEhPonderadoNos();
        Node* getPrimeiro();
        Node* getUltimo();
        Node* getNodePosicao();

        void insereNo(int id);
        void insereAresta(int id, int idNo, int peso);
        void removeNo(int id);
        void pesquisaNo(int id);

};


#endif