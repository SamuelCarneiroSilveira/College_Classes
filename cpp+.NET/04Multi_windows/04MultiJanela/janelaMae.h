#pragma once
#include "cadastro.h"
#include "regressiva.h"

namespace My04MultiJanela {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para janelaMae
	/// </summary>
	public ref class janelaMae : public System::Windows::Forms::Form
	{
	public:
		janelaMae(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~janelaMae()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ arquivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ timerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ timerToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ sairToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ Cadastro;
	private: System::Windows::Forms::ToolStripButton^ timer;



	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(janelaMae::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->arquivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sairToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->Cadastro = (gcnew System::Windows::Forms::ToolStripButton());
			this->timer = (gcnew System::Windows::Forms::ToolStripButton());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->arquivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(402, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// arquivoToolStripMenuItem
			// 
			this->arquivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->timerToolStripMenuItem,
					this->timerToolStripMenuItem1, this->sairToolStripMenuItem
			});
			this->arquivoToolStripMenuItem->Name = L"arquivoToolStripMenuItem";
			this->arquivoToolStripMenuItem->Size = System::Drawing::Size(75, 24);
			this->arquivoToolStripMenuItem->Text = L"Arquivo";
			// 
			// timerToolStripMenuItem
			// 
			this->timerToolStripMenuItem->Name = L"timerToolStripMenuItem";
			this->timerToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->timerToolStripMenuItem->Text = L"Cadastro";
			this->timerToolStripMenuItem->Click += gcnew System::EventHandler(this, &janelaMae::Cadastro_Click);
			// 
			// timerToolStripMenuItem1
			// 
			this->timerToolStripMenuItem1->Name = L"timerToolStripMenuItem1";
			this->timerToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->timerToolStripMenuItem1->Text = L"Timer";
			this->timerToolStripMenuItem1->Click += gcnew System::EventHandler(this, &janelaMae::timer_Click);
			// 
			// sairToolStripMenuItem
			// 
			this->sairToolStripMenuItem->Name = L"sairToolStripMenuItem";
			this->sairToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->sairToolStripMenuItem->Text = L"Sair";
			this->sairToolStripMenuItem->Click += gcnew System::EventHandler(this, &janelaMae::sairToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->Cadastro, this->timer });
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(402, 27);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// Cadastro
			// 
			this->Cadastro->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Cadastro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Cadastro.Image")));
			this->Cadastro->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Cadastro->Name = L"Cadastro";
			this->Cadastro->Size = System::Drawing::Size(29, 24);
			this->Cadastro->Text = L"toolStripButton1";
			this->Cadastro->Click += gcnew System::EventHandler(this, &janelaMae::Cadastro_Click);
			// 
			// timer
			// 
			this->timer->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->timer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"timer.Image")));
			this->timer->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->timer->Name = L"timer";
			this->timer->Size = System::Drawing::Size(29, 24);
			this->timer->Text = L"toolStripButton2";
			this->timer->Click += gcnew System::EventHandler(this, &janelaMae::timer_Click);
			// 
			// janelaMae
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 310);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"janelaMae";
			this->Text = L"Multi janelas";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void sairToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void Cadastro_Click(System::Object^ sender, System::EventArgs^ e) {
	cadastro^ jc = gcnew cadastro();
	jc->MdiParent = this;
	jc->Show();
}
private: System::Void timer_Click(System::Object^ sender, System::EventArgs^ e) {
	regressiva^ jr = gcnew regressiva();
	jr->MdiParent = this;
	jr->Show();
}
};
}
