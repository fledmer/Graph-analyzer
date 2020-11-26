#ifndef GRAPHVERTEX_H
#include <string>
#include <vector>
#include <iostream>
#define GRAPHVERTEX_H

class GraphVertex
{
public:
    GraphVertex(std::string name);
    ~GraphVertex(){};
    std::string name;
    std::vector <GraphVertex *> child; // вершины связанные с данной.
    void Push(GraphVertex *Vert);
    void Push(std::string name);
    GraphVertex* Find(GraphVertex *Vert);
    GraphVertex* Find(std::string name);

};

#endif // GRAPHVERTEX_H
