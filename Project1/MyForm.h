#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::TextBox^  num1;
	private: System::Windows::Forms::TextBox^  num2;
	private: System::Windows::Forms::Label^  res;


	private: System::Windows::Forms::Button^  btnsuma;



	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->res = (gcnew System::Windows::Forms::Label());
			this->btnsuma = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Primer número";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Segundo número";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(57, 227);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Resultado";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(172, 59);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(100, 20);
			this->num1->TabIndex = 3;
			this->num1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(172, 116);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(100, 20);
			this->num2->TabIndex = 4;
			// 
			// res
			// 
			this->res->AutoSize = true;
			this->res->Location = System::Drawing::Point(183, 227);
			this->res->Name = L"res";
			this->res->Size = System::Drawing::Size(0, 13);
			this->res->TabIndex = 5;
			// 
			// btnsuma
			// 
			this->btnsuma->Location = System::Drawing::Point(112, 161);
			this->btnsuma->Name = L"btnsuma";
			this->btnsuma->Size = System::Drawing::Size(75, 23);
			this->btnsuma->TabIndex = 6;
			this->btnsuma->Text = L"Sumar";
			this->btnsuma->UseVisualStyleBackColor = true;
			this->btnsuma->Click += gcnew System::EventHandler(this, &MyForm::btnsuma_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 304);
			this->Controls->Add(this->btnsuma);
			this->Controls->Add(this->res);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"but";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btnsuma_Click(System::Object^  sender, System::EventArgs^  e) {
			 int a = Convert::ToInt32(this->num1->Text->Trim());
			 int b = Convert::ToInt32(this->num2->Text->Trim());
			 int sum = a + b;
			 this->res->Text = sum.ToString();
}
};
}
