#pragma once
#include <string>
#include "Marcas_disponibles.h"
namespace CppCLRWinFormsProject {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_SIVA;
	protected:

	private: System::Windows::Forms::Button^ btn_siguiente;
	private: System::Windows::Forms::TextBox^ txt_user;
	private: System::Windows::Forms::TextBox^ txt_pass;


	private: System::Windows::Forms::Label^ lbl_user;
	private: System::Windows::Forms::Label^ lbl_pass;

	protected:

	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_SIVA = (gcnew System::Windows::Forms::Label());
			this->btn_siguiente = (gcnew System::Windows::Forms::Button());
			this->txt_user = (gcnew System::Windows::Forms::TextBox());
			this->txt_pass = (gcnew System::Windows::Forms::TextBox());
			this->lbl_user = (gcnew System::Windows::Forms::Label());
			this->lbl_pass = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_SIVA
			// 
			this->lbl_SIVA->AutoSize = true;
			this->lbl_SIVA->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_SIVA->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_SIVA->Location = System::Drawing::Point(188, 46);
			this->lbl_SIVA->Name = L"lbl_SIVA";
			this->lbl_SIVA->Size = System::Drawing::Size(160, 38);
			this->lbl_SIVA->TabIndex = 0;
			this->lbl_SIVA->Text = L"JPSHOP";
			this->lbl_SIVA->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// btn_siguiente
			// 
			this->btn_siguiente->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btn_siguiente->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->btn_siguiente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_siguiente->Location = System::Drawing::Point(268, 241);
			this->btn_siguiente->Name = L"btn_siguiente";
			this->btn_siguiente->Size = System::Drawing::Size(80, 23);
			this->btn_siguiente->TabIndex = 1;
			this->btn_siguiente->Text = L"Siguiente";
			this->btn_siguiente->UseVisualStyleBackColor = false;
			this->btn_siguiente->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txt_user
			// 
			this->txt_user->Location = System::Drawing::Point(180, 137);
			this->txt_user->Name = L"txt_user";
			this->txt_user->Size = System::Drawing::Size(168, 20);
			this->txt_user->TabIndex = 2;
			this->txt_user->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// txt_pass
			// 
			this->txt_pass->Location = System::Drawing::Point(180, 194);
			this->txt_pass->Name = L"txt_pass";
			this->txt_pass->Size = System::Drawing::Size(168, 20);
			this->txt_pass->TabIndex = 3;
			// 
			// lbl_user
			// 
			this->lbl_user->AutoSize = true;
			this->lbl_user->Location = System::Drawing::Point(183, 121);
			this->lbl_user->Name = L"lbl_user";
			this->lbl_user->Size = System::Drawing::Size(43, 13);
			this->lbl_user->TabIndex = 4;
			this->lbl_user->Text = L"Usuario";
			// 
			// lbl_pass
			// 
			this->lbl_pass->AutoSize = true;
			this->lbl_pass->Location = System::Drawing::Point(183, 178);
			this->lbl_pass->Name = L"lbl_pass";
			this->lbl_pass->Size = System::Drawing::Size(61, 13);
			this->lbl_pass->TabIndex = 5;
			this->lbl_pass->Text = L"Contraseña";
			this->lbl_pass->Click += gcnew System::EventHandler(this, &Form1::lbl_pass_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(560, 317);
			this->Controls->Add(this->lbl_pass);
			this->Controls->Add(this->lbl_user);
			this->Controls->Add(this->txt_pass);
			this->Controls->Add(this->txt_user);
			this->Controls->Add(this->btn_siguiente);
			this->Controls->Add(this->lbl_SIVA);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"SIVA";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		INTERFAZ_SIVA::Marcas_disponibles^ Marcas_disponibles = gcnew INTERFAZ_SIVA::Marcas_disponibles();
		this->Visible = false;
		Marcas_disponibles->ShowDialog();

	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbl_pass_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: static string toStandardString(System::String^ string) {
		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;
	}
	private: static String^ toSystemString(string str) {
		return gcnew String (str.c_str());
	}




};
}
