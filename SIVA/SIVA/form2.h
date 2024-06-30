#pragma once
#include <vector>
#include "MyForm.h"
namespace SIVA {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::DateTimePicker^ fecha;
	private: System::Windows::Forms::Label^ labelRegistro;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ factura;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ salir;
	private: System::Windows::Forms::Button^ limpiar;















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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->labelRegistro = (gcnew System::Windows::Forms::Label());
			this->fecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->factura = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->salir = (gcnew System::Windows::Forms::Button());
			this->limpiar = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
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
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->labelRegistro);
			this->panel2->Controls->Add(this->fecha);
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel2->Location = System::Drawing::Point(251, 96);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(312, 356);
			this->panel2->TabIndex = 7;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form2::panel2_Paint);
			// 
			// labelRegistro
			// 
			this->labelRegistro->AutoSize = true;
			this->labelRegistro->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelRegistro->Location = System::Drawing::Point(17, 26);
			this->labelRegistro->Name = L"labelRegistro";
			this->labelRegistro->Size = System::Drawing::Size(0, 13);
			this->labelRegistro->TabIndex = 2;
			this->labelRegistro->Click += gcnew System::EventHandler(this, &Form2::labelRegistro_Click);
			// 
			// fecha
			// 
			this->fecha->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->fecha->Location = System::Drawing::Point(-2, 0);
			this->fecha->Name = L"fecha";
			this->fecha->Size = System::Drawing::Size(621, 20);
			this->fecha->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(22, 375);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 32);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Guía ID";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(-2, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(303, 65);
			this->button2->TabIndex = 3;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// factura
			// 
			this->factura->AutoSize = true;
			this->factura->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->factura->Location = System::Drawing::Point(3, 4);
			this->factura->Name = L"factura";
			this->factura->Size = System::Drawing::Size(0, 13);
			this->factura->TabIndex = 8;
			this->factura->Click += gcnew System::EventHandler(this, &Form2::factura_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->limpiar);
			this->panel3->Controls->Add(this->salir);
			this->panel3->Controls->Add(this->factura);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Location = System::Drawing::Point(569, 98);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(303, 354);
			this->panel3->TabIndex = 3;
			// 
			// salir
			// 
			this->salir->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->salir->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->salir->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->salir->Location = System::Drawing::Point(149, 311);
			this->salir->Name = L"salir";
			this->salir->Size = System::Drawing::Size(152, 36);
			this->salir->TabIndex = 8;
			this->salir->Text = L"SALIR";
			this->salir->UseVisualStyleBackColor = false;
			this->salir->Click += gcnew System::EventHandler(this, &Form2::salir_Click);
			// 
			// limpiar
			// 
			this->limpiar->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->limpiar->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->limpiar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->limpiar->Location = System::Drawing::Point(-2, 311);
			this->limpiar->Name = L"limpiar";
			this->limpiar->Size = System::Drawing::Size(145, 36);
			this->limpiar->TabIndex = 9;
			this->limpiar->Text = L"NUEVO";
			this->limpiar->UseVisualStyleBackColor = false;
			this->limpiar->Click += gcnew System::EventHandler(this, &Form2::limpiar_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(884, 461);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
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

		int countSugh = 0; // contador sudadera gym shark hombre
		int countPlgh = 0; // contador playera gymshark hombre
		int countPagh = 0; // contador pants gymshark hombre
		int countShgh = 0; // contador short gymshark hombre
		int countSugm = 0; // contador sudadera gym shark mujer
		int countPlgm = 0; // contador playera gymshark mujer
		int countPagm = 0; // contador pants gymshark mujer
		int countShgm = 0; // contador short gymshark mujer
		int countSuyh = 0; // contador sudadera youngla hombre
		int countPlyh = 0; // contador playera youngla hombre
		int countPayh = 0; // contador pants youngla hombre
		int countShyh = 0; // contador short youngla hombre
		int countSuym = 0; // contador sudadera youngla mujer
		int countPlym = 0; // contador playera youngla mujer
		int countPaym = 0; // contador pants youngla mujer
		int countShym = 0; // contador short youngla mujer

		int sughP = 1500; // sudadera gym shark hombre
		int plghP = 500; // playera gymshark hombre
		int paghP = 800; // pants gymshark hombre
		int shghP = 600; // short gymshark hombre
		int sugmP = 1400; // sudadera gym shark mujer
		int plgmP = 400; // playera gymshark mujer
		int pagmP = 700; // pants gymshark mujer
		int shgmP = 500; // short gymshark mujer
		int suyhP = 1550; // sudadera youngla hombre
		int plyhP = 550; // playera youngla hombre
		int payhP = 850; // pants youngla hombre
		int shyhP = 650; // short youngla hombre
		int suymP = 1450; // sudadera youngla mujer
		int plymP = 450; // playera youngla mujer
		int paymP = 750; // pants youngla mujer
		int shymP = 550; // short youngla mujer

private: System::Void ingresar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ claveStr = cp->Text;
	int clave = System::Convert::ToInt32(claveStr);
	String^ registro = "";

	switch (clave) {
	case 111: // sudadera gym shark hombre
		if (sugh > 0) {
			sugh--;
			countSugh++;
			registro = "Sudadera GymShark Hombre: " + sughP;
			MessageBox::Show("Sudadera GymShark Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 211: // playera gymshark hombre
		if (plgh > 0) {
			plgh--;
			countPlgh++;
			registro = "Playera GymShark Hombre: " + plghP;
			MessageBox::Show("Playera GymShark Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 311: // pants gymshark hombre
		if (pagh > 0) {
			pagh--;
			countPagh++;
			registro = "Pants GymShark Hombre: " + paghP;
			MessageBox::Show("Pants GymShark Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 411: // short gymshark hombre
		if (shgh > 0) {
			shgh--;
			countShgh++;
			registro = "Short GymShark Hombre: " + shghP;
			MessageBox::Show("Short GymShark Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 112: // sudadera gym shark mujer
		if (sugm > 0) {
			sugm--;
			countSugm++;
			registro = "Sudadera GymShark Mujer: " + sugmP;
			MessageBox::Show("Sudadera GymShark Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 212: // playera gymshark mujer
		if (plgm > 0) {
			plgm--;
			countPlgm++;
			registro = "Playera GymShark Mujer: " + plgmP;
			MessageBox::Show("Playera GymShark Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 312: // pants gymshark mujer
		if (pagm > 0) {
			pagm--;
			countPagm++;
			registro = "Pants GymShark Mujer: " + pagmP;
			MessageBox::Show("Pants GymShark Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 412: // short gymshark mujer
		if (shgm > 0) {
			shgm--;
			countShgm++;
			registro = "Short GymShark Mujer: " + shgmP;
			MessageBox::Show("Short GymShark Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 121: // sudadera youngla hombre
		if (suyh > 0) {
			suyh--;
			countSuyh++;
			registro = "Sudadera Youngla Hombre: " + suyhP;
			MessageBox::Show("Sudadera Youngla Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 221: // playera youngla hombre
		if (plyh > 0) {
			plyh--;
			countPlyh++;
			registro = "Playera Youngla Hombre: " + plyhP;
			MessageBox::Show("Playera Youngla Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 321: // pants youngla hombre
		if (payh > 0) {
			payh--;
			countPayh++;
			registro = "Pants Youngla Hombre: " + payhP;
			MessageBox::Show("Pants Youngla Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 421: // short youngla hombre
		if (shyh > 0) {
			shyh--;
			countSuyh++;
			registro = "Short Youngla Hombre: " + suyhP;
			MessageBox::Show("Short Youngla Hombre añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 122: // sudadera youngla mujer
		if (suym > 0) {
			suym--;
			countSuym++;
			registro = "Sudadera Youngla Mujer: " + suymP;
			MessageBox::Show("Sudadera Youngla Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 222: // playera youngla mujer
		if (plym > 0) {
			plym--;
			countPlym++;
			registro = "Playera Youngla Mujer: " + plymP;
			MessageBox::Show("Playera Youngla Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 322: // pants youngla mujer
		if (paym > 0) {
			paym--;
			countPaym++;
			registro = "Pants Youngla Mujer: " + paymP;
			MessageBox::Show("Pants Youngla Mujer añadida");
		}
		else {
			MessageBox::Show("Artículo sin existencia");
		}
		break;
	case 422: // short youngla mujer
		if (shym > 0) {
			shym--;
			countShym++;
			registro = "Short Youngla Mujer: " + shymP;
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
	if (!String::IsNullOrEmpty(registro)) {
		labelRegistro->Text += registro + "\n";
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

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SIVA::MyForm^ myform = gcnew SIVA::MyForm();
	myform->Show();
}




private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxRegistro_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void factura_Click(System::Object^ sender, System::EventArgs^ e) {
}

public:
	int sughPT, plghPT, paghPT, shghPT, sugmPT, plgmPT, pagmPT, shgmPT;
	int suyhPT, plyhPT, payhPT, shyhPT, suymPT, plymPT, paymPT, shymPT;
	int Total = 0;

private:
	void calcularTotal() {
		sughPT = sughP * countSugh;
		plghPT = plghP * countPlgh;
		paghPT = paghP * countPagh;
		shghPT = shghP * countShgh;
		sugmPT = sugmP * countSugm;
		plgmPT = plgmP * countPlgm;
		pagmPT = pagmP * countPagm;
		shgmPT = shgmP * countShgm;
		suyhPT = suyhP * countSuyh;
		plyhPT = plyhP * countPlyh;
		payhPT = payhP * countPayh;
		shyhPT = shyhP * countShyh;
		suymPT = suymP * countSuym;
		plymPT = plymP * countPlym;
		paymPT = paymP * countPaym;
		shymPT = shymP * countShym;

		Total = sughPT + plghPT + paghPT + shghPT + sugmPT + plgmPT + pagmPT + shgmPT + suyhPT + plyhPT + payhPT + shyhPT + suymPT + plymPT + paymPT + shymPT;
	}

public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	calcularTotal();
	factura->Text += "Total: " + Total + "\n";
}

public: System::Void limpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	factura->Text = "";
	countSugh = 0;
	countPlgh = 0;
	countPagh = 0;
	countShgh = 0;
	countSugm = 0;
	countPlgm = 0;
	countPagm = 0;
	countShgm = 0;
	countSuyh = 0;
	countPlyh = 0;
	countPayh = 0;
	countShyh = 0;
	countSuym = 0;
	countPlym = 0;
	countPaym = 0;
	countShym = 0;
	labelRegistro->Text = "";
}
private: System::Void salir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
