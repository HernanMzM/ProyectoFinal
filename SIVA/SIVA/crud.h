#pragma once
#include "ada.h"
#include "edit.h"
#include "see.h"
#include "delate.h"

namespace SIVA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de crud
	/// </summary>
	public ref class crud : public System::Windows::Forms::Form
	{
	public:
		crud(void)
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
		~crud()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ edit;
	private: System::Windows::Forms::Button^ delate;



	private: System::Windows::Forms::Button^ see;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ ada;
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->delate = (gcnew System::Windows::Forms::Button());
			this->see = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ada = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(198, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 87);
			this->label1->TabIndex = 1;
			this->label1->Text = L"JP SHOP";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(12, 498);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 30);
			this->label3->TabIndex = 6;
			this->label3->Text = L"SIVA™";
			// 
			// edit
			// 
			this->edit->BackColor = System::Drawing::SystemColors::ControlText;
			this->edit->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->edit->Location = System::Drawing::Point(3, 99);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(275, 90);
			this->edit->TabIndex = 8;
			this->edit->Text = L"EDITAR\r\nPRODUCTO";
			this->edit->UseVisualStyleBackColor = false;
			this->edit->Click += gcnew System::EventHandler(this, &crud::edit_Click);
			// 
			// delate
			// 
			this->delate->BackColor = System::Drawing::SystemColors::ControlText;
			this->delate->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delate->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->delate->Location = System::Drawing::Point(3, 291);
			this->delate->Name = L"delate";
			this->delate->Size = System::Drawing::Size(275, 90);
			this->delate->TabIndex = 9;
			this->delate->Text = L"ELIMINAR\r\nPRODUCTO";
			this->delate->UseVisualStyleBackColor = false;
			this->delate->Click += gcnew System::EventHandler(this, &crud::delate_Click);
			// 
			// see
			// 
			this->see->BackColor = System::Drawing::SystemColors::ControlText;
			this->see->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->see->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->see->Location = System::Drawing::Point(3, 195);
			this->see->Name = L"see";
			this->see->Size = System::Drawing::Size(275, 90);
			this->see->TabIndex = 10;
			this->see->Text = L"VER\r\nPRODUCTO";
			this->see->UseVisualStyleBackColor = false;
			this->see->Click += gcnew System::EventHandler(this, &crud::see_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->ada);
			this->panel1->Controls->Add(this->see);
			this->panel1->Controls->Add(this->edit);
			this->panel1->Controls->Add(this->delate);
			this->panel1->Location = System::Drawing::Point(201, 120);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(283, 387);
			this->panel1->TabIndex = 11;
			// 
			// ada
			// 
			this->ada->BackColor = System::Drawing::SystemColors::ControlText;
			this->ada->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ada->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ada->Location = System::Drawing::Point(3, 3);
			this->ada->Name = L"ada";
			this->ada->Size = System::Drawing::Size(275, 90);
			this->ada->TabIndex = 12;
			this->ada->Text = L"AÑADIR\r\nPRODUCTO";
			this->ada->UseVisualStyleBackColor = false;
			this->ada->Click += gcnew System::EventHandler(this, &crud::ada_Click);
			// 
			// crud
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(655, 538);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"crud";
			this->Text = L"crud";
			this->Load += gcnew System::EventHandler(this, &crud::crud_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void crud_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e) {
	SIVA::edit^ edit = gcnew SIVA::edit();
	edit->Show();
}
private: System::Void see_Click(System::Object^ sender, System::EventArgs^ e) {
	SIVA::see^ see = gcnew SIVA::see();
	see->Show();
}
private: System::Void delate_Click(System::Object^ sender, System::EventArgs^ e) {
	SIVA::delate^ delate = gcnew SIVA::delate();
	delate->Show();
}
private: System::Void ada_Click(System::Object^ sender, System::EventArgs^ e) {
	SIVA::ada^ ada = gcnew SIVA::ada();
	ada->Show();
}
};
}
