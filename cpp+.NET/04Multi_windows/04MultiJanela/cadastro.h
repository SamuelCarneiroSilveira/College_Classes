#pragma once

namespace My04MultiJanela {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace iTextSharp;

	/// <summary>
	/// Sumário para cadastro
	/// </summary>
	public ref class cadastro : public System::Windows::Forms::Form
	{
	public:
		cadastro(void)
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
		~cadastro()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbNome;
	private: System::Windows::Forms::TextBox^ tbAno;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbCidade;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btCadastrar;

	private: System::Windows::Forms::Button^ btAbrir;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::Button^ btPdf;





	protected:

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
			this->tbNome = (gcnew System::Windows::Forms::TextBox());
			this->tbAno = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbCidade = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btCadastrar = (gcnew System::Windows::Forms::Button());
			this->btAbrir = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btPdf = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nome";
			// 
			// tbNome
			// 
			this->tbNome->Location = System::Drawing::Point(12, 81);
			this->tbNome->Name = L"tbNome";
			this->tbNome->Size = System::Drawing::Size(100, 22);
			this->tbNome->TabIndex = 3;
			// 
			// tbAno
			// 
			this->tbAno->Location = System::Drawing::Point(118, 81);
			this->tbAno->Name = L"tbAno";
			this->tbAno->Size = System::Drawing::Size(126, 22);
			this->tbAno->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(115, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ano de nascimento";
			// 
			// tbCidade
			// 
			this->tbCidade->Location = System::Drawing::Point(250, 81);
			this->tbCidade->Name = L"tbCidade";
			this->tbCidade->Size = System::Drawing::Size(100, 22);
			this->tbCidade->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(262, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Cidade";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.8F));
			this->label4->Location = System::Drawing::Point(103, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 39);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Cadastro";
			// 
			// btCadastrar
			// 
			this->btCadastrar->Location = System::Drawing::Point(12, 119);
			this->btCadastrar->Name = L"btCadastrar";
			this->btCadastrar->Size = System::Drawing::Size(86, 23);
			this->btCadastrar->TabIndex = 9;
			this->btCadastrar->Text = L"Cadastrar";
			this->btCadastrar->UseVisualStyleBackColor = true;
			this->btCadastrar->Click += gcnew System::EventHandler(this, &cadastro::btCadastrar_Click);
			// 
			// btAbrir
			// 
			this->btAbrir->Location = System::Drawing::Point(104, 119);
			this->btAbrir->Name = L"btAbrir";
			this->btAbrir->Size = System::Drawing::Size(75, 23);
			this->btAbrir->TabIndex = 10;
			this->btAbrir->Text = L"Abrir";
			this->btAbrir->UseVisualStyleBackColor = true;
			this->btAbrir->Click += gcnew System::EventHandler(this, &cadastro::btAbrir_Click);
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->Filter = L"Arquivos de texto|*.txt";
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog1";
			this->openFileDialog->Filter = L"Arquivos de texto|*.txt";
			// 
			// btPdf
			// 
			this->btPdf->Location = System::Drawing::Point(275, 119);
			this->btPdf->Name = L"btPdf";
			this->btPdf->Size = System::Drawing::Size(75, 23);
			this->btPdf->TabIndex = 11;
			this->btPdf->Text = L"Pdf";
			this->btPdf->UseVisualStyleBackColor = true;
			this->btPdf->Click += gcnew System::EventHandler(this, &cadastro::btPdf_Click);
			// 
			// cadastro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(362, 149);
			this->Controls->Add(this->btPdf);
			this->Controls->Add(this->btAbrir);
			this->Controls->Add(this->btCadastrar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbCidade);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbAno);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbNome);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->Name = L"cadastro";
			this->Text = L"cadastro";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void btCadastrar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		try
		{
			// salva o conteúdo de cada componente como uma linha no arquivo texto
			String^ str = "";
			str += tbNome->Text + ",";
			str += tbAno->Text + ",";
			str += tbCidade->Text + ",";
			System::IO::File::WriteAllText(saveFileDialog->FileName, str);
		}
		catch (...)
		{
			MessageBox::Show("Erro");
		}
	}

}
private: System::Void btAbrir_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		try
		{
			// lê o conteúdo de todo o arquivo na forma de uma string
			String^ str = System::IO::File::ReadAllText(openFileDialog->FileName);
			// quebra o conteúdo lido em linhas
			array<String^>^ strLinhas = str->Split(',');
			// atribui para cada componente o valor presente na linha associada ao mesmo
			for (int i = 0; i < strLinhas->Length; i++)
			{
				switch (i)
				{
				case 0: tbNome->Text = strLinhas[i]; break;
				case 1: tbAno->Text = strLinhas[i]; break;
				case 2: tbCidade->Text = strLinhas[i]; break;
				}
			}
		}
		catch (...)
		{
			MessageBox::Show("Erro ao abrir o arquivo");
		}
	}
}
private: System::Void btPdf_Click(System::Object^ sender, System::EventArgs^ e) {
	text::Document^ documento = gcnew text::Document(text::PageSize::A4);
	//Em seguida criamos o arquivo e abrimos para edição
	text::pdf::PdfWriter::GetInstance(documento, gcnew System::IO::FileStream("relatorio.pdf", System::IO::FileMode::Create));
	documento->Open();
	// Cria-se uma fonte para iniciar a escrita texto
	text::Font^ fonte = text::FontFactory::GetFont("Arial", 16, text::BaseColor::GRAY);
	// Agora, através de strings, podemos criar parágrafos e inseri-los ao pdf
	String^ texto = "Cadastro de Pessoa Física";
	text::Paragraph^ paragrafo = gcnew text::Paragraph(texto, fonte);
	paragrafo->Alignment = 1; // 0 - esquerda, 1 - centro, 2 - Direito
	documento->Add(paragrafo);
	texto = "\nNome: " + tbNome->Text;
	texto += "\nCidade: " + tbCidade->Text;
	texto += "\nAno de nascimento: " + tbAno->Text;
	fonte = text::FontFactory::GetFont("Arial", 12, text::BaseColor::BLACK);
	paragrafo = gcnew text::Paragraph(texto, fonte);
	paragrafo->Alignment = 0;  // 0 - esquerda, 1 - centro, 2 - Direito
	documento->Add(paragrafo);
	// Após a criação podemos fechar o documento
	documento->Close();
	//Para apresentá-lo, podemos instanciar o Acrobat Reader
	System::Diagnostics::Process::Start("AcroRd32.exe", "relatorio.pdf");
}
};
}
