#ifndef GRAPH_H
#include <vector>
#include <string>
#include "graphvertex.h"
#define GRAPH_H

using namespace std;

class Graph
{
protected:
    GraphVertex* Find(string name);
    GraphVertex* Find(GraphVertex *Vert);
    void ClearGraphsVertex();
public:
    Graph(){};
    ~Graph()
    {
        ClearGraphsVertex();
    }
    vector<GraphVertex *> GraphsVertex; // Вершины графа
    void virtual Push(string fVert, string sVert);
    void virtual Push(string Vert);

    //Основные функции
    void Input();
    void Analysis();
    //Основные функции

    void virtual pMatrixOfIncidence();
    int virtual EdgeCount();
    int LoopCount();
    void virtual pMaximumDegree();
    string virtual ConnectCotegory();
    bool FindPath(GraphVertex *start, GraphVertex *end,vector<string> storage);
    bool FindPath(vector<GraphVertex *> GraphsVertex, GraphVertex *start, GraphVertex *end,vector<string> storage);


};

#endif // GRAPH_H
