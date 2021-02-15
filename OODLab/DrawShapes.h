#pragma once
#include <SFML/Graphics.hpp>
#include "CShapeDecorator.h"
using namespace sf;

typedef std::vector<std::shared_ptr<CShapeDecorator>> forReadShapes;

class DrawShapes
{
	public: 
		void DrawShape(forReadShapes shapes);
};