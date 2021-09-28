#pragma once

namespace My03Regressiva {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para Regressiva
	/// </summary>
	public ref class Regressiva : public System::Windows::Forms::Form
	{
	public:
		Regressiva(void)
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
		~Regressiva()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbSegundos;
	private: System::Windows::Forms::Button^ btComecar;

	private: System::Windows::Forms::Label^ lbContador;
	private: System::Windows::Forms::Button^ btPlay;
	private: System::Windows::Forms::Button^ btPause;



	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbSegundos = (gcnew System::Windows::Forms::TextBox());
			this->btComecar = (gcnew System::Windows::Forms::Button());
			this->lbContador = (gcnew System::Windows::Forms::Label());
			this->btPlay = (gcnew System::Windows::Forms::Button());
			this->btPause = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &Regressiva::timer_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 4);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Quantidade de segundos a contar";
			// 
			// tbSegundos
			// 
			this->tbSegundos->Location = System::Drawing::Point(232, 4);
			this->tbSegundos->Margin = System::Windows::Forms::Padding(1);
			this->tbSegundos->Name = L"tbSegundos";
			this->tbSegundos->Size = System::Drawing::Size(77, 22);
			this->tbSegundos->TabIndex = 1;
			// 
			// btComecar
			// 
			this->btComecar->Location = System::Drawing::Point(6, 36);
			this->btComecar->Name = L"btComecar";
			this->btComecar->Size = System::Drawing::Size(303, 23);
			this->btComecar->TabIndex = 2;
			this->btComecar->Text = L"Começar";
			this->btComecar->UseVisualStyleBackColor = true;
			this->btComecar->Click += gcnew System::EventHandler(this, &Regressiva::btComecar_Click);
			// 
			// lbContador
			// 
			this->lbContador->AutoSize = true;
			this->lbContador->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 60.2F, System::Drawing::FontStyle::Bold));
			this->lbContador->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->lbContador->Location = System::Drawing::Point(13, 91);
			this->lbContador->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbContador->Name = L"lbContador";
			this->lbContador->Size = System::Drawing::Size(102, 120);
			this->lbContador->TabIndex = 4;
			this->lbContador->Text = L"0";
			this->lbContador->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btPlay
			// 
			this->btPlay->Location = System::Drawing::Point(4, 65);
			this->btPlay->Name = L"btPlay";
			this->btPlay->Size = System::Drawing::Size(147, 23);
			this->btPlay->TabIndex = 5;
			this->btPlay->Text = L"play";
			this->btPlay->UseVisualStyleBackColor = true;
			this->btPlay->Click += gcnew System::EventHandler(this, &Regressiva::btPlay_Click);
			// 
			// btPause
			// 
			this->btPause->Location = System::Drawing::Point(157, 65);
			this->btPause->Name = L"btPause";
			this->btPause->Size = System::Drawing::Size(152, 23);
			this->btPause->TabIndex = 6;
			this->btPause->Text = L"pause";
			this->btPause->UseVisualStyleBackColor = true;
			this->btPause->Click += gcnew System::EventHandler(this, &Regressiva::btPause_Click);
			// 
			// Regressiva
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(319, 220);
			this->Controls->Add(this->btPause);
			this->Controls->Add(this->btPlay);
			this->Controls->Add(this->lbContador);
			this->Controls->Add(this->btComecar);
			this->Controls->Add(this->tbSegundos);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Regressiva";
			this->Text = L"Regressiva";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int numeroDefinido = 0;
		int segundos = 0;
	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		
		numeroDefinido -= 1;
		lbContador->Text = Convert::ToString(numeroDefinido);

		if (numeroDefinido <= 0) {
			timer->Enabled = false;
			System::Media::SystemSounds::Beep->Play();
		}
	}
	private: System::Void btComecar_Click(System::Object^ sender, System::EventArgs^ e) {
		timer->Enabled = false;
		try 
		{
			numeroDefinido = Convert::ToInt32(tbSegundos->Text);
			numeroDefinido++;
		}
		catch (...)
		{
			MessageBox::Show("Informe um numero inteiro!", "Erro");
			return;
		}
		timer->Enabled = true;
	}
private: System::Void btPlay_Click(System::Object^ sender, System::EventArgs^ e) {
	timer->Enabled = true;
}
private: System::Void btPause_Click(System::Object^ sender, System::EventArgs^ e) {
	timer->Enabled = false;
}
};
}
