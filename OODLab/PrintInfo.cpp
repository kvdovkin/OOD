#include "PrintInfo.h"
using namespace std;

void PrintInfo::PrintShapesInfo(forReadShapes shapes, ostream& output) 
{
    CShapeVisitor visitor(output);
    for (int i = 0; i < shapes.size(); ++i)
    {
        shapes[i]->Accept(visitor);
    }
}