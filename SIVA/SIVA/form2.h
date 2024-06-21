#pragma once
#include "Form3.h"
namespace SIVA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ gymshark;
	private: System::Windows::Forms::Button^ YoungLA;

	protected:

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
			this->gymshark = (gcnew System::Windows::Forms::Button());
			this->YoungLA = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(294, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 86);
			this->label1->TabIndex = 0;
			this->label1->Text = L"JP SHOP";
			this->label1->Click += gcnew System::EventHandler(this, &Form2::label1_Click);
			// 
			// gymshark
			// 
			this->gymshark->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gymshark->Location = System::Drawing::Point(315, 146);
			this->gymshark->Name = L"gymshark";
			this->gymshark->Size = System::Drawing::Size(259, 68);
			this->gymshark->TabIndex = 1;
			this->gymshark->Text = L"GymShark";
			this->gymshark->UseVisualStyleBackColor = true;
			this->gymshark->Click += gcnew System::EventHandler(this, &Form2::gymshark_Click);
			// 
			// YoungLA
			// 
			this->YoungLA->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YoungLA->Location = System::Drawing::Point(315, 259);
			this->YoungLA->Name = L"YoungLA";
			this->YoungLA->Size = System::Drawing::Size(259, 68);
			this->YoungLA->TabIndex = 2;
			this->YoungLA->Text = L"YoungLA";
			this->YoungLA->UseVisualStyleBackColor = true;
			this->YoungLA->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(884, 461);
			this->Controls->Add(this->YoungLA);
			this->Controls->Add(this->gymshark);
			this->Controls->Add(this->label1);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gymshark_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		SIVA::Form3^ form3 = gcnew SIVA::Form3();
		form3->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
