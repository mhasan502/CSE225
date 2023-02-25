/*
 Task:
 Generate the driver file (main.cpp) where you perform the following tasks.

 Operations to be performed:
    • Generate the following graph. Assume that all edge costs are 1.
    • Outdegree of a particular vertex in a graph is the number of edges going out from that vertex to other vertices
    For instance the outdegree of vertex "B" in the above graph is 1. Add a member function "OutDegree" to the
    "GraphType" class which returns the outdegree of a given vertex.
        `int  OutDegree(VertexType v);`

    • Add a member function to the class which determines if there is an edge between two vertices.
        `bool FoundEdge(VertexType u, VertexType v);`
    • Print the outdegree of the vertex "D".
    • Print if there is an edge between vertices "A" and D.
    • Print if there is an edge between vertices "B" and D.
    • Use depth first search in order to find if there is a path from "B" to "E".
    • Use depth first search in order to find if there is a path from "E" to "B".
    • Use breadth first search in order to find if there is a path from "B" to "E".
    • Use breadth first search in order to find if there is a path from "E" to "B".
    • Modify the "BreadthFirstSearch" function so that it also prints the length of the shortest path between two
    vertices.
    • Determine the length of the shortest path from "B" to "E".

 Note:
 Operations related to header files are added to the "graphtype.h" file.
*/

#include <iostream>
#include "graphtype.cpp"
using namespace std;

void Print(bool b){
    if(b)
        cout << "There is an edge." << endl;
    else
        cout << "There is no edge." << endl;
}

int main() {

    GraphType<char> g;                           // Create a graph object

    g.AddVertex('A');                            // Add specified number of vertices to the graph
    g.AddVertex('B');
    g.AddVertex('C');
    g.AddVertex('D');
    g.AddVertex('E');
    g.AddVertex('F');
    g.AddVertex('G');
    g.AddVertex('H');

    g.AddEdge('A', 'B', 1);                      // Add edges to the vertices assuming edge cost is 1
    g.AddEdge('A', 'C', 1);
    g.AddEdge('A', 'D', 1);

    g.AddEdge('B', 'A', 1);

    g.AddEdge('D', 'A', 1);
    g.AddEdge('D', 'E', 1);
    g.AddEdge('D', 'G', 1);

    g.AddEdge('G', 'F', 1);
    g.AddEdge('F', 'H', 1);
    g.AddEdge('H', 'E', 1);

    cout << g.OutDegree('D') << endl;            // Print outdegree of vertex D

    Print(g.FoundEdge('A', 'D'));                // Print if there is an edge between vertices A and D
    Print(g.FoundEdge('B', 'D'));                // Print if there is an edge between vertices B and D

    g.DepthFirstSearch('B', 'E');                // Use DFS in order to find if there is a path from B to E
    g.DepthFirstSearch('E', 'B');                // Use DFS in order to find if there is a path from E to B

    g.BreadthFirstSearch('B', 'E');              // Use BFS in order to find if there is a path from B to E
    g.BreadthFirstSearch('E', 'B');              // Use BFS in order to find if there is a path from E to B

    g.BreadthFirstSearch('B', 'E');              // Use BFS to print the length of the shortest path
    return 0;
}
