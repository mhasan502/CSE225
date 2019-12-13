#ifndef GRAPHTYPE_H_INCLUDED
#define GRAPHTYPE_H_INCLUDED
#include "stacktype.h"
#include "quetype.h"
template<class VertexType>
class GraphType{
      public:
          GraphType();
          GraphType(int maxV);
          ~GraphType();
          void MakeEmpty();
          bool IsEmpty();
          bool IsFull();
          void AddVertex(VertexType);
          void AddEdge(VertexType, VertexType, int);
          int WeightIs(VertexType, VertexType);
          void GetToVertices(VertexType, QueType<VertexType>&);
          void ClearMarks();
          void MarkVertex(VertexType);
          bool IsMarked(VertexType);
          void DepthFirstSearch(VertexType, VertexType);
          void BreadthFirstSearch(VertexType, VertexType);
          int OutDegree(VertexType);
          bool FoundEdge(VertexType,VertexType);
      private:
          int numVertices;
          int maxVertices;
          VertexType* vertices;
          int **edges;
          bool* marks;
};
#endif // GRAPHTYPE_H_INCLUDED
