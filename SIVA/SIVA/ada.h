#pragma once

namespace SIVA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ada
	/// </summary>
	public ref class ada : public System::Windows::Forms::Form
	{
	public:
		ada(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ nameP;

	private: System::Windows::Forms::TextBox^ idP;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ precioP;





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->nameP = (gcnew System::Windows::Forms::TextBox());
			this->idP = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->precioP = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(63, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"AÑADIR";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(12, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 30);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(65, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 30);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ID: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(26, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 30);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Precio: ";
			// 
			// nameP
			// 
			this->nameP->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameP->Location = System::Drawing::Point(118, 83);
			this->nameP->Name = L"nameP";
			this->nameP->Size = System::Drawing::Size(100, 29);
			this->nameP->TabIndex = 5;
			this->nameP->TextChanged += gcnew System::EventHandler(this, &ada::nameP_TextChanged);
			// 
			// idP
			// 
			this->idP->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idP->Location = System::Drawing::Point(118, 153);
			this->idP->Name = L"idP";
			this->idP->Size = System::Drawing::Size(100, 29);
			this->idP->TabIndex = 7;
			this->idP->TextChanged += gcnew System::EventHandler(this, &ada::idP_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(71, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 45);
			this->button1->TabIndex = 8;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// precioP
			// 
			this->precioP->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precioP->Location = System::Drawing::Point(118, 118);
			this->precioP->Name = L"precioP";
			this->precioP->Size = System::Drawing::Size(100, 29);
			this->precioP->TabIndex = 6;
			this->precioP->TextChanged += gcnew System::EventHandler(this, &ada::precioP_TextChanged);
			// 
			// ada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->idP);
			this->Controls->Add(this->precioP);
			this->Controls->Add(this->nameP);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"ada";
			this->Text = L"ada";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

private: System::Void nameP_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void precioP_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void idP_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
