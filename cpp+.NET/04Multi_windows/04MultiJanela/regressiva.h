#pragma once

namespace My04MultiJanela {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para regressiva
	/// </summary>
	public ref class regressiva : public System::Windows::Forms::Form
	{
	public:
		regressiva(void)
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
		~regressiva()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbContador;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbSegundos;

	private: System::Windows::Forms::Button^ btIniciar;
	private: System::Windows::Forms::Button^ btPause;
	private: System::Windows::Forms::Button^ btPlay;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbContador = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbSegundos = (gcnew System::Windows::Forms::TextBox());
			this->btIniciar = (gcnew System::Windows::Forms::Button());
			this->btPause = (gcnew System::Windows::Forms::Button());
			this->btPlay = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(106, 520);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"timer";
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &regressiva::timer_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Numero a ser contado";
			// 
			// lbContador
			// 
			this->lbContador->AutoSize = true;
			this->lbContador->Font = (gcnew System::Drawing::Font(L"Segoe Script", 36.2F, System::Drawing::FontStyle::Bold));
			this->lbContador->Location = System::Drawing::Point(-5, 146);
			this->lbContador->Name = L"lbContador";
			this->lbContador->Size = System::Drawing::Size(268, 101);
			this->lbContador->TabIndex = 2;
			this->lbContador->Text = L"10000";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(98, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tempo";
			// 
			// tbSegundos
			// 
			this->tbSegundos->Location = System::Drawing::Point(167, 15);
			this->tbSegundos->Name = L"tbSegundos";
			this->tbSegundos->Size = System::Drawing::Size(86, 22);
			this->tbSegundos->TabIndex = 4;
			// 
			// btIniciar
			// 
			this->btIniciar->Location = System::Drawing::Point(12, 43);
			this->btIniciar->Name = L"btIniciar";
			this->btIniciar->Size = System::Drawing::Size(241, 23);
			this->btIniciar->TabIndex = 5;
			this->btIniciar->Text = L"Iniciar";
			this->btIniciar->UseVisualStyleBackColor = true;
			this->btIniciar->Click += gcnew System::EventHandler(this, &regressiva::btIniciar_Click);
			// 
			// btPause
			// 
			this->btPause->Location = System::Drawing::Point(15, 72);
			this->btPause->Name = L"btPause";
			this->btPause->Size = System::Drawing::Size(115, 23);
			this->btPause->TabIndex = 6;
			this->btPause->Text = L"pause";
			this->btPause->UseVisualStyleBackColor = true;
			this->btPause->Click += gcnew System::EventHandler(this, &regressiva::btPause_Click);
			// 
			// btPlay
			// 
			this->btPlay->Location = System::Drawing::Point(136, 72);
			this->btPlay->Name = L"btPlay";
			this->btPlay->Size = System::Drawing::Size(117, 23);
			this->btPlay->TabIndex = 7;
			this->btPlay->Text = L"play";
			this->btPlay->UseVisualStyleBackColor = true;
			this->btPlay->Click += gcnew System::EventHandler(this, &regressiva::btPlay_Click);
			// 
			// regressiva
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(261, 256);
			this->Controls->Add(this->btPlay);
			this->Controls->Add(this->btPause);
			this->Controls->Add(this->btIniciar);
			this->Controls->Add(this->tbSegundos);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lbContador);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"regressiva";
			this->Text = L"regressiva";
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
	private: System::Void btIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			numeroDefinido = Convert::ToInt32(tbSegundos->Text);
		}
		catch (...)
		{
			MessageBox::Show("Informe um numero inteiro!", "Erro");
			return;
		}
		timer->Enabled = true;
	}
private: System::Void btPause_Click(System::Object^ sender, System::EventArgs^ e) {
	timer->Enabled = false;
}
private: System::Void btPlay_Click(System::Object^ sender, System::EventArgs^ e) {
	timer->Enabled = true;
}
};
}
