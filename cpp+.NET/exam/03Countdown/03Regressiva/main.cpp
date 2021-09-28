#include "Regressiva.h"
#pragma comment(linker,"/SUBSYSTEM:windows /ENTRY:main")

using namespace System;
using namespace System::Windows::Forms;

int main() {
	My03Regressiva::Regressiva form;
	Application::Run(% form);
}