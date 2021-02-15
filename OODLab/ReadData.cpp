#include "ReadData.h"
using namespace std;

const string RECTANGLE = "RECTANGLE:";
const string TRIANGLE = "TRIANGLE:";
const string CIRCLE = "CIRCLE:";

forReadShapes ReadAndWriteData::Read(istream& input) {
    forReadShapes shapes;
    auto& factory = CShapeFactory::GetInstance();
    auto inputShape = make_shared<InputData>(move(make_unique<CShapeFactory>(factory)));
    string temp;
    while (!input.eof())
    {
        input >> temp;
        if (temp == RECTANGLE || temp == TRIANGLE || temp == CIRCLE)
        {
            shared_ptr<CShapeDecorator> shape = inputShape->GetCreatedShape(temp, input);
            shapes.push_back(shape);
        }
    }

    return shapes;
}

void ReadAndWriteData::PrintShapesInfo(forReadShapes shapes, ostream& output)
{
    CShapeVisitor visitor(output);
    for (int i = 0; i < shapes.size(); ++i)
    {
        shapes[i]->Accept(visitor);
    }
}