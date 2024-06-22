#pragma once
#include "Form3.h"
namespace SIVA {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int sugh = 20;
	int plgh = 30;
	int pagh = 20;
	int shgh = 15;
	int sugm = 10;
	int plgm = 30;
	int pagm = 20;
	int shgm = 15;

	int suyh = 10;
	int plyh = 30;
	int payh = 20;
	int shyh = 15;
	int suym = 10;
	int plym = 30;
	int paym = 20;
	int shym = 15;

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ cp;
	private: System::Windows::Forms::Button^ ingresar;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cp = (gcnew System::Windows::Forms::TextBox());
			this->ingresar = (gcnew System::Windows::Forms::Button());
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(341, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Clave del Producto";
			this->label2->Click += gcnew System::EventHandler(this, &Form2::label2_Click);
			// 
			// cp
			// 
			this->cp->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cp->Location = System::Drawing::Point(387, 141);
			this->cp->Name = L"cp";
			this->cp->Size = System::Drawing::Size(100, 27);
			this->cp->TabIndex = 2;
			this->cp->TextChanged += gcnew System::EventHandler(this, &Form2::cp_TextChanged);
			// 
			// ingresar
			// 
			this->ingresar->BackColor = System::Drawing::SystemColors::MenuText;
			this->ingresar->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ingresar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ingresar->Location = System::Drawing::Point(340, 192);
			this->ingresar->Name = L"ingresar";
			this->ingresar->Size = System::Drawing::Size(193, 46);
			this->ingresar->TabIndex = 3;
			this->ingresar->Text = L"INGRESAR";
			this->ingresar->UseVisualStyleBackColor = false;
			this->ingresar->Click += gcnew System::EventHandler(this, &Form2::ingresar_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(884, 461);
			this->Controls->Add(this->ingresar);
			this->Controls->Add(this->cp);
			this->Controls->Add(this->label2);
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
	private: System::Void cp_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ingresar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ claveStr = cp->Text;
	int clave = System::Convert::ToInt32(claveStr);

	switch (clave) {
	case 111: //sudadera gym shark hombre
		sugh--;
		if (sugh > 0) {
			MessageBox::Show("Sudadera GymShark Hombre añadida");
		} else if (sugh <=0){
			MessageBox::Show("Articulo sin existencia");
		}
		break;
	case 211: // playera gymshark hombre
		plgh--;
		break;
	case 311: // pants gymshark hombre
		pagh--;
		break;
	case 411: // short gymshark hombre
		shgh--;
		break;
	case 112: //sudadera gym shark mujer
		sugm--;
		break;
	case 212: // playera gymshark mujer
		plgm--;
		break;
	case 312: // pants gymshark mujer
		pagm--;
		break;
	case 412: // short gymshark mujer
		shgm--;
		break;
	case 121: //sudadera youngla hombre
		suyh--;
		break;
	case 221: // playera youngla hombre
		plyh--;
		break;
	case 321: // pants youngla hombre
		payh--;
		break;
	case 421: // short youngla hombre
		shyh--;
		break;
	case 122: //sudadera youngla mujer
		suym--;
		break;
	case 222: // playera youngla mujer
		plym--;
		break;
	case 322: // pants youngla mujer
		paym--;
		break;
	case 422: // short youngla mujer
		shym--;
		break;


	default:
		break;
	}
}


private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
