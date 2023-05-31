#include "FigureEditor.h"
#include "triangle.h"

int main(void) {
	Figure* f1 = new Figure();



	cout << FigureEditor::get_info(f1) << endl;

	return 0;
}