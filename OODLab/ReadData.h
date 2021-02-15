#pragma once
#include <iostream>
#include <fstream>
#include "CShapeDecorator.h"
#include "CShape.h"
#include "CShapeFactory.h"
#include "InputData.h"
#include "CShapeVisitor.h"
#include <vector>

typedef std::vector<std::shared_ptr<CShapeDecorator>> forReadShapes;

class ReadAndWriteData
{
	public:
		forReadShapes Read(std::istream& input);
		void PrintShapesInfo(forReadShapes shapes, std::ostream& output);
};