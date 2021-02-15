#include <iostream>
#include <fstream>
#include <SFML/Graphics.hpp>
#include "CShapeDecorator.h"
#include "CCircle.h"
#include "CTriangle.h"
#include "CRectangle.h"
#include "CShape.h"
#include "CShapeFactory.h"
#include "InputData.h"
#include "CShapeVisitor.h"
#include <vector>
#include "ReadData.h"
#include "DrawShapes.h"
#include "PrintInfo.h"
using namespace std;

int main()
{
    ifstream input;
    ofstream output;
    input.open("input1.txt");
    output.open("output.txt");

    ReadAndWriteData readAndWriteShape;
    forReadShapes shapes = readAndWriteShape.Read(input);

    readAndWriteShape.PrintShapesInfo(shapes, output);

    DrawShapes drawShapes;
    drawShapes.DrawShape(shapes);

    return 0;
}
