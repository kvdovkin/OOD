#pragma once
#include "CShapeDecorator.h"
#include "CShapeVisitor.h"
#include <iostream>
#include <fstream>
#include "CShape.h"
#include "InputData.h"
#include <vector>
using namespace std;

typedef vector<shared_ptr<CShapeDecorator>> forReadShapes;

class PrintInfo
{
private:
	void PrintShapesInfo(forReadShapes shapes, ostream& output);
};