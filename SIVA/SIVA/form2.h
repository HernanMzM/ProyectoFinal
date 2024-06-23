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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ cp;
	private: System::Windows::Forms::Button^ ingresar;
	private: System::Windows::Forms::Button^ devolver;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;





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
			this->devolver = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			this->label1->Location = System::Drawing::Point(2, -4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 87);
			this->label1->TabIndex = 0;
			this->label1->Text = L"JP SHOP";
			this->label1->Click += gcnew System::EventHandler(this, &Form2::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(3, 0);
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
			this->cp->Location = System::Drawing::Point(4, 33);
			this->cp->Name = L"cp";
			this->cp->Size = System::Drawing::Size(215, 27);
			this->cp->TabIndex = 2;
			this->cp->TextChanged += gcnew System::EventHandler(this, &Form2::cp_TextChanged);
			// 
			// ingresar
			// 
			this->ingresar->BackColor = System::Drawing::SystemColors::MenuText;
			this->ingresar->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ingresar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ingresar->Location = System::Drawing::Point(4, 66);
			this->ingresar->Name = L"ingresar";
			this->ingresar->Size = System::Drawing::Size(215, 46);
			this->ingresar->TabIndex = 3;
			this->ingresar->Text = L"AÑADIR";
			this->ingresar->UseVisualStyleBackColor = false;
			this->ingresar->Click += gcnew System::EventHandler(this, &Form2::ingresar_Click);
			// 
			// devolver
			// 
			this->devolver->BackColor = System::Drawing::SystemColors::MenuText;
			this->devolver->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->devolver->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->devolver->Location = System::Drawing::Point(3, 118);
			this->devolver->Name = L"devolver";
			this->devolver->Size = System::Drawing::Size(216, 46);
			this->devolver->TabIndex = 4;
			this->devolver->Text = L"DEVOLVER";
			this->devolver->UseVisualStyleBackColor = false;
			this->devolver->Click += gcnew System::EventHandler(this, &Form2::devolver_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(12, 422);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 30);
			this->label3->TabIndex = 5;
			this->label3->Text = L"SIVA™";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->cp);
			this->panel1->Controls->Add(this->devolver);
			this->panel1->Controls->Add(this->ingresar);
			this->panel1->Location = System::Drawing::Point(12, 96);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(224, 176);
			this->panel1->TabIndex = 6;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(884, 461);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
	private:
		int sugh = 20; // sudadera gym shark hombre
		int plgh = 20; // playera gymshark hombre
		int pagh = 20; // pants gymshark hombre
		int shgh = 20; // short gymshark hombre
		int sugm = 20; // sudadera gym shark mujer
		int plgm = 20; // playera gymshark mujer
		int pagm = 20; // pants gymshark mujer
		int shgm = 20; // short gymshark mujer

		int suyh = 10; // sudadera youngla hombre
		int plyh = 10; // playera youngla hombre
		int payh = 10; // pants youngla hombre
		int shyh = 10; // short youngla hombre
		int suym = 10; // sudadera youngla mujer
		int plym = 10; // playera youngla mujer
		int paym = 10; // pants youngla mujer
		int shym = 10; // short youngla mujer

private: System::Void ingresar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ claveStr = cp->Text;
	int clave = System::Convert::ToInt32(claveStr);

	switch (clave) {
	case 111: // sudadera gym shark hombre
		if (sugh > 0) {
			sugh--;
			MessageBox::Show("Sudadera GymShark Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 211: // playera gymshark hombre
		if (plgh > 0) {
			plgh--;
			MessageBox::Show("Playera GymShark Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 311: // pants gymshark hombre
		if (pagh > 0) {
			pagh--;
			MessageBox::Show("Pants GymShark Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 411: // short gymshark hombre
		if (shgh > 0) {
			shgh--;
			MessageBox::Show("Short GymShark Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 112: // sudadera gym shark mujer
		if (sugm > 0) {
			sugm--;
			MessageBox::Show("Sudadera GymShark Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 212: // playera gymshark mujer
		if (plgm > 0) {
			plgm--;
			MessageBox::Show("Playera GymShark Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 312: // pants gymshark mujer
		if (pagm > 0) {
			pagm--;
			MessageBox::Show("Pants GymShark Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 412: // short gymshark mujer
		if (shgm > 0) {
			shgm--;
			MessageBox::Show("Short GymShark Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 121: // sudadera youngla hombre
		if (suyh > 0) {
			suyh--;
			MessageBox::Show("Sudadera Youngla Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 221: // playera youngla hombre
		if (plyh > 0) {
			plyh--;
			MessageBox::Show("Playera Youngla Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 321: // pants youngla hombre
		if (payh > 0) {
			payh--;
			MessageBox::Show("Pants Youngla Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 421: // short youngla hombre
		if (shyh > 0) {
			shyh--;
			MessageBox::Show("Short Youngla Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 122: // sudadera youngla mujer
		if (suym > 0) {
			suym--;
			MessageBox::Show("Sudadera Youngla Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 222: // playera youngla mujer
		if (plym > 0) {
			plym--;
			MessageBox::Show("Playera Youngla Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 322: // pants youngla mujer
		if (paym > 0) {
			paym--;
			MessageBox::Show("Pants Youngla Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 422: // short youngla mujer
		if (shym > 0) {
			shym--;
			MessageBox::Show("Short Youngla Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	default:
		MessageBox::Show("Clave incorrecta");
		break;
	}
}


private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void devolver_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ claveStr = cp->Text;
	int clave = System::Convert::ToInt32(claveStr);

	switch (clave) {
	case 111: // sudadera gym shark hombre
		if (sugh < 20) {
			sugh++;
			MessageBox::Show("Sudadera GymShark Hombre devuelta");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 211: // playera gymshark hombre
		if (plgh < 20) {
			plgh++;
			MessageBox::Show("Playera GymShark Hombre devuelta");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 311: // pants gymshark hombre
		if (pagh < 20) {
			pagh++;
			MessageBox::Show("Pants GymShark Hombre devuelta");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 411: // short gymshark hombre
		if (shgh < 20) {
			shgh++;
			MessageBox::Show("Short GymShark Hombre devuelta");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 112: // sudadera gym shark mujer
		if (sugm < 20) {
			sugm++;
			MessageBox::Show("Sudadera GymShark Mujer devuelta");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 212: // playera gymshark mujer
		if (plgm < 20) {
			plgm++;
			MessageBox::Show("Playera GymShark Mujer devuelta");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 312: // pants gymshark mujer
		if (pagm < 20) {
			pagm++;
			MessageBox::Show("Pants GymShark Mujer añadida");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 412: // short gymshark mujer
		if (shgm < 20) {
			shgm++;
			MessageBox::Show("Short GymShark Mujer añadida");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 121: // sudadera youngla hombre
		if (suyh < 10) {
			suyh++;
			MessageBox::Show("Sudadera Youngla Hombre añadida");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 221: // playera youngla hombre
		if (plyh < 10) {
			plyh++;
			MessageBox::Show("Playera Youngla Hombre añadida");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 321: // pants youngla hombre
		if (payh < 10) {
			payh++;
			MessageBox::Show("Pants Youngla Hombre añadida");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 421: // short youngla hombre
		if (shyh < 10) {
			shyh++;
			MessageBox::Show("Short Youngla Hombre añadida");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 122: // sudadera youngla mujer
		if (suym < 10) {
			suym++;
			MessageBox::Show("Sudadera Youngla Mujer añadida");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 222: // playera youngla mujer
		if (plym < 10) {
			plym++;
			MessageBox::Show("Playera Youngla Mujer añadida");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 322: // pants youngla mujer
		if (paym < 10) {
			paym++;
			MessageBox::Show("Pants Youngla Mujer añadida");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	case 422: // short youngla mujer
		if (shym < 10) {
			shym++;
			MessageBox::Show("Short Youngla Mujer añadida");
		}
		else {
			MessageBox::Show("Error. Inventario superado");
		}
		break;
	default:
		MessageBox::Show("Clave incorrecta");
		break;
	}
}

};
}
