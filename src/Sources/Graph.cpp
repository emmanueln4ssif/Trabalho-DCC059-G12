#include "src/Headers/Graph.h"

//** Construtor do Grafo**
Graph::Graph(int ordem, bool ehDirecionado, bool ehPonderadoArestas, bool ehPonderadoNos)
{
    this->ordem = ordem;
    this->ehDirecionado = ehDirecionado;
    this->ehPonderadoArestas = ehPonderadoArestas;
    this->ehPonderadoNos = ehPonderadoNos;
    this->numArestas = 0;
    this->primeiro = this->ultimo = nullptr;
}

//**Getters necessários**
int Graph::getOrdem()
{
    return this->ordem;
}

bool Graph::getEhDirecionado()
{
    return this->ehDirecionado;
}

bool Graph::getEhPonderadoArestas()
{
    return this->ehPonderadoArestas;
}

bool Graph::getEhPonderadoNos()
{
    return this->ehPonderadoNos;
}

Node *Graph::getPrimeiro()
{
    return this->primeiro;
}
Node *Graph::getUltimo()
{
    return this->ultimo;
}

// Node* Graph::getNodePosicao(int posicao){
// return this->posicao;
//}

//A) INSERÇÃO DE NÓS

void Graph::insereNo(int id){

    //verificamos se já existe algum nó. Se houver, cria-se um novo Nó que aponta o último para o novo, e o novo passa a ser o último
    if(primeiro != nullptr){
        Node *newNode = new Node(id);
        newNode->setPosicao(this->posicao);
        ultimo->setProx(newNode);
        ultimo = newNode;
    } else{
        Node *newNode = new Node(id);
        newNode->setPosição(this->posicao);
        primeiro = newNode;
        ultimo = newNode;
    }

    this->posicao = this->posicao + 1;

}