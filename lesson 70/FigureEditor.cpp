#include "FigureEditor.h"

string FigureEditor::get_info(Figure* figure) {
	string msg = figure->description();
	msg += "\nPerimeter = " + to_string(figure->calculatePerimeter());
	msg += "\Square = " + to_string(figure->calculateSquare());
	return msg;
}