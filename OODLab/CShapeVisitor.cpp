#include "CShapeVisitor.h"
#include <memory>

void CShapeVisitor::Visit(CShapeDecorator& shape) const
{
	output << shape.GetType() << ": P= " << shape.GetPerim() << ", S= " << shape.GetSquare() << std::endl;
}