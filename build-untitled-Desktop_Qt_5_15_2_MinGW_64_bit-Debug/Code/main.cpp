#include <iostream>
#include <string>
#include <graph.h>
#include <orgraph.h>
#include <graphvertex.h>


using namespace std;

int main()
{
    Graph *MainGraph;
    string input;

    cout << "Work made by Alex Makeev 2011 " << endl;
    start:cout << "Hello, will you work with graf ? (input 1/0 (if you work))" << endl;
    getline(cin,input);
    system("cls"); // очищаем консоль
    if(input == "1") MainGraph = new Graph();
    else if(input == "0") MainGraph = new Orgraph();
    else goto start;

    MainGraph->Input();
    MainGraph->Analysis();

    delete(MainGraph);
    cin >> input;
    goto start;
    return 0;
}
