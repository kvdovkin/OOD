#pragma once

#include <memory>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "IVisitor.h"

class IVisitor;

class IShape 
{
public:
	virtual void SetPerim(double per) = 0;
	virtual void SetSquare(double square) = 0;
	virtual double GetPerim() const = 0;
	virtual double GetSquare() const = 0;
	virtual void Accept(IVisitor& visitor) = 0;
};