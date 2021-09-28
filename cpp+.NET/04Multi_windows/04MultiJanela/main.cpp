#include "janelaMae.h"
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:main")
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main()
{
	My04MultiJanela::janelaMae form;
	Application::Run(% form);
}