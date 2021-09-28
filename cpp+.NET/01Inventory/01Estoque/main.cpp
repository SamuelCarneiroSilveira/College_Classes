#include "Estoque.h"
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:main")

using namespace System;
using namespace System::Windows::Forms;

int main() {
	My01Estoque::Estoque form;
	Application::Run(% form);
}



