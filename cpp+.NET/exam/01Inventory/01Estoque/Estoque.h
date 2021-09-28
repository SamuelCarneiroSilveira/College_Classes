#pragma once

namespace My01Estoque {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para Estoque
	/// </summary>
	public ref class Estoque : public System::Windows::Forms::Form
	{
	public:
		Estoque(void)
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
		~Estoque()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbQuantidade;
	private: System::Windows::Forms::TextBox^ tbQuantidadeDeEntradas;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbQuantidadeDeSaidas;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbTotalEstoque;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cbTipo;
	private: System::Windows::Forms::DataGridView^ dgHistorico;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btRegistrar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Data;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TipoMovimentacao;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantidade;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbQuantidade = (gcnew System::Windows::Forms::TextBox());
			this->tbQuantidadeDeEntradas = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbQuantidadeDeSaidas = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbTotalEstoque = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cbTipo = (gcnew System::Windows::Forms::ComboBox());
			this->dgHistorico = (gcnew System::Windows::Forms::DataGridView());
			this->Data = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TipoMovimentacao = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btRegistrar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgHistorico))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tipo de movimentação";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(188, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Quantidade";
			// 
			// tbQuantidade
			// 
			this->tbQuantidade->Location = System::Drawing::Point(191, 27);
			this->tbQuantidade->Name = L"tbQuantidade";
			this->tbQuantidade->Size = System::Drawing::Size(100, 22);
			this->tbQuantidade->TabIndex = 2;
			// 
			// tbQuantidadeDeEntradas
			// 
			this->tbQuantidadeDeEntradas->Location = System::Drawing::Point(12, 498);
			this->tbQuantidadeDeEntradas->Name = L"tbQuantidadeDeEntradas";
			this->tbQuantidadeDeEntradas->Size = System::Drawing::Size(117, 22);
			this->tbQuantidadeDeEntradas->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 478);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Total de entradas";
			// 
			// tbQuantidadeDeSaidas
			// 
			this->tbQuantidadeDeSaidas->Location = System::Drawing::Point(148, 498);
			this->tbQuantidadeDeSaidas->Name = L"tbQuantidadeDeSaidas";
			this->tbQuantidadeDeSaidas->Size = System::Drawing::Size(119, 22);
			this->tbQuantidadeDeSaidas->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(147, 478);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Total de retiradas";
			// 
			// tbTotalEstoque
			// 
			this->tbTotalEstoque->Location = System::Drawing::Point(281, 498);
			this->tbTotalEstoque->Name = L"tbTotalEstoque";
			this->tbTotalEstoque->Size = System::Drawing::Size(115, 22);
			this->tbTotalEstoque->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(278, 478);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Total em estoque";
			// 
			// cbTipo
			// 
			this->cbTipo->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Entrada", L"Retirada" });
			this->cbTipo->FormattingEnabled = true;
			this->cbTipo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Entrada", L"Retirada" });
			this->cbTipo->Location = System::Drawing::Point(7, 29);
			this->cbTipo->Name = L"cbTipo";
			this->cbTipo->Size = System::Drawing::Size(148, 24);
			this->cbTipo->TabIndex = 9;
			// 
			// dgHistorico
			// 
			this->dgHistorico->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgHistorico->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Data, this->TipoMovimentacao,
					this->Quantidade
			});
			this->dgHistorico->Location = System::Drawing::Point(12, 114);
			this->dgHistorico->Name = L"dgHistorico";
			this->dgHistorico->RowHeadersWidth = 51;
			this->dgHistorico->RowTemplate->Height = 24;
			this->dgHistorico->Size = System::Drawing::Size(623, 344);
			this->dgHistorico->TabIndex = 10;
			// 
			// Data
			// 
			this->Data->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Data->HeaderText = L"Data e horário";
			this->Data->MinimumWidth = 6;
			this->Data->Name = L"Data";
			// 
			// TipoMovimentacao
			// 
			this->TipoMovimentacao->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->TipoMovimentacao->HeaderText = L"Tipo de movimentação";
			this->TipoMovimentacao->MinimumWidth = 6;
			this->TipoMovimentacao->Name = L"TipoMovimentacao";
			// 
			// Quantidade
			// 
			this->Quantidade->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Quantidade->HeaderText = L"Quantidade";
			this->Quantidade->MinimumWidth = 6;
			this->Quantidade->Name = L"Quantidade";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 75);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(263, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Histórico de movimentação";
			// 
			// btRegistrar
			// 
			this->btRegistrar->Location = System::Drawing::Point(309, 25);
			this->btRegistrar->Name = L"btRegistrar";
			this->btRegistrar->Size = System::Drawing::Size(87, 26);
			this->btRegistrar->TabIndex = 12;
			this->btRegistrar->Text = L"Registrar";
			this->btRegistrar->UseVisualStyleBackColor = true;
			this->btRegistrar->Click += gcnew System::EventHandler(this, &Estoque::btRegistrar_Click);
			// 
			// Estoque
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 532);
			this->Controls->Add(this->btRegistrar);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dgHistorico);
			this->Controls->Add(this->cbTipo);
			this->Controls->Add(this->tbTotalEstoque);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbQuantidadeDeSaidas);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbQuantidadeDeEntradas);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbQuantidade);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Estoque";
			this->Text = L"Controle de estoque de chapas de perfil de alumínio ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgHistorico))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
int quantidadeDeEntradas = 0;
int quantidadeDeSaidas = 0;
int totalEmEstoque = 0;

private: System::Void btRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	int quantidade;

	if (cbTipo->SelectedIndex == -1)
	{
		MessageBox::Show("Selecione um tipo de movimentação", "Erro!");
	}

	try
	{
		quantidade = Convert::ToInt32(tbQuantidade->Text);
	}
	catch (...)
	{
		MessageBox::Show("Use um numero inteiro!", "Erro!");
		return;
	}

	//Adicionar ação na tabela histórico
	dgHistorico->Rows->Add(DateTime::Now.ToString(), cbTipo->Text, Convert::ToString(quantidade));

	//Lógica de operações
	if (cbTipo->SelectedIndex == 0)
	{
		quantidadeDeEntradas++;
		tbQuantidadeDeEntradas->Text = Convert::ToString(quantidadeDeEntradas);
		
		totalEmEstoque += quantidade;
		tbTotalEstoque->Text = Convert::ToString(totalEmEstoque);
	}
	else
	{
		quantidadeDeSaidas++;
		tbQuantidadeDeSaidas->Text = Convert::ToString(quantidadeDeSaidas);
		
		totalEmEstoque -= quantidade;
		tbTotalEstoque->Text = Convert::ToString(totalEmEstoque);
	}
}

};
}
