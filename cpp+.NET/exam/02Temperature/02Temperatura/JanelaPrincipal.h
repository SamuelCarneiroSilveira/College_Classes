#pragma once

namespace My02Temperatura {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para JanelaPrincipal
	/// </summary>
	public ref class JanelaPrincipal : public System::Windows::Forms::Form
	{
	public:
		JanelaPrincipal(void)
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
		~JanelaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btRegistrar;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dgHistorico;
	private: System::Windows::Forms::TextBox^ tbQuantidadeAcima;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbQuantidadeAbaixo;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbTemperatura;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartTemperatura;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Data;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Valor;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->btRegistrar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dgHistorico = (gcnew System::Windows::Forms::DataGridView());
			this->Data = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Valor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tbQuantidadeAcima = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbQuantidadeAbaixo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbTemperatura = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->chartTemperatura = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgHistorico))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTemperatura))->BeginInit();
			this->SuspendLayout();
			// 
			// btRegistrar
			// 
			this->btRegistrar->Location = System::Drawing::Point(159, 53);
			this->btRegistrar->Name = L"btRegistrar";
			this->btRegistrar->Size = System::Drawing::Size(75, 23);
			this->btRegistrar->TabIndex = 25;
			this->btRegistrar->Text = L"Registrar";
			this->btRegistrar->UseVisualStyleBackColor = true;
			this->btRegistrar->Click += gcnew System::EventHandler(this, &JanelaPrincipal::btRegistrar_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(36, 110);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(263, 24);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Histórico de movimentação";
			// 
			// dgHistorico
			// 
			this->dgHistorico->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgHistorico->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Data, this->Valor });
			this->dgHistorico->Location = System::Drawing::Point(36, 149);
			this->dgHistorico->Name = L"dgHistorico";
			this->dgHistorico->RowHeadersWidth = 51;
			this->dgHistorico->RowTemplate->Height = 24;
			this->dgHistorico->Size = System::Drawing::Size(419, 344);
			this->dgHistorico->TabIndex = 23;
			// 
			// Data
			// 
			this->Data->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Data->HeaderText = L"Data e horário";
			this->Data->MinimumWidth = 6;
			this->Data->Name = L"Data";
			// 
			// Valor
			// 
			this->Valor->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Valor->HeaderText = L"Temperatura";
			this->Valor->MinimumWidth = 6;
			this->Valor->Name = L"Valor";
			// 
			// tbQuantidadeAcima
			// 
			this->tbQuantidadeAcima->Location = System::Drawing::Point(287, 543);
			this->tbQuantidadeAcima->Name = L"tbQuantidadeAcima";
			this->tbQuantidadeAcima->Size = System::Drawing::Size(46, 22);
			this->tbQuantidadeAcima->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 543);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(256, 17);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Registros acima do limiar superior (50):";
			// 
			// tbQuantidadeAbaixo
			// 
			this->tbQuantidadeAbaixo->Location = System::Drawing::Point(287, 513);
			this->tbQuantidadeAbaixo->Name = L"tbQuantidadeAbaixo";
			this->tbQuantidadeAbaixo->Size = System::Drawing::Size(46, 22);
			this->tbQuantidadeAbaixo->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 513);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(252, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Registros abaixo do limiar inferior (20):";
			// 
			// tbTemperatura
			// 
			this->tbTemperatura->Location = System::Drawing::Point(40, 54);
			this->tbTemperatura->Name = L"tbTemperatura";
			this->tbTemperatura->Size = System::Drawing::Size(100, 22);
			this->tbTemperatura->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 17);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Temperatura";
			// 
			// chartTemperatura
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartTemperatura->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartTemperatura->Legends->Add(legend1);
			this->chartTemperatura->Location = System::Drawing::Point(477, 149);
			this->chartTemperatura->Name = L"chartTemperatura";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Temperatura";
			this->chartTemperatura->Series->Add(series1);
			this->chartTemperatura->Size = System::Drawing::Size(495, 344);
			this->chartTemperatura->TabIndex = 26;
			this->chartTemperatura->Text = L"chart1";
	
			// 
			// JanelaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1017, 599);
			this->Controls->Add(this->chartTemperatura);
			this->Controls->Add(this->btRegistrar);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dgHistorico);
			this->Controls->Add(this->tbQuantidadeAcima);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbQuantidadeAbaixo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbTemperatura);
			this->Controls->Add(this->label2);
			this->Name = L"JanelaPrincipal";
			this->Text = L"Cadastro de temperaturas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgHistorico))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTemperatura))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int acimaDe50 = 0;
	int abaixoDe20 = 0;

	private: System::Void btRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		Double temperatura;

		try
		{
			temperatura = Convert::ToDouble(tbTemperatura->Text);
		}
		catch (...)
		{
			MessageBox::Show("Use um numero inteiro!", "Erro!");
			return;
		}

		//Adicionar ação na tabela histórico
		dgHistorico->Rows->Add(DateTime::Now.ToString(), Convert::ToString(temperatura));

		//Lógica de operações
		if (temperatura > 50)
		{
			acimaDe50++;
			tbQuantidadeAcima->Text = Convert::ToString(acimaDe50);
		}
		if (temperatura < 20)
		{
			abaixoDe20++;
			tbQuantidadeAbaixo->Text = Convert::ToString(abaixoDe20);
		}
		chartTemperatura->Series["Temperatura"]->Points->AddXY(DateTime::Now.ToString(), temperatura);
	}
};
}
