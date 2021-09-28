#include "JanelaPrincipal.h"
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:main")

using namespace System;
using namespace System::Windows::Forms;

int main() {
	My02Temperatura::JanelaPrincipal form;
	Application::Run(% form);
}