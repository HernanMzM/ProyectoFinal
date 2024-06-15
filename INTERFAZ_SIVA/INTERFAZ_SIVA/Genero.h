#pragma once

namespace INTERFAZ_SIVA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Genero
	/// </summary>
	public ref class Genero : public System::Windows::Forms::Form
	{
	public:
		Genero(void)
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
		~Genero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_SIVA;
	private: System::Windows::Forms::Button^ Hombre;
	private: System::Windows::Forms::Button^ Mujer;
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
			this->lbl_SIVA = (gcnew System::Windows::Forms::Label());
			this->Hombre = (gcnew System::Windows::Forms::Button());
			this->Mujer = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_SIVA
			// 
			this->lbl_SIVA->AutoSize = true;
			this->lbl_SIVA->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_SIVA->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_SIVA->Location = System::Drawing::Point(125, 52);
			this->lbl_SIVA->Name = L"lbl_SIVA";
			this->lbl_SIVA->Size = System::Drawing::Size(160, 38);
			this->lbl_SIVA->TabIndex = 3;
			this->lbl_SIVA->Text = L"JPSHOP";
			// 
			// Hombre
			// 
			this->Hombre->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Hombre->Font = (gcnew System::Drawing::Font(L"Agency FB", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hombre->Location = System::Drawing::Point(57, 138);
			this->Hombre->Name = L"Hombre";
			this->Hombre->Size = System::Drawing::Size(135, 39);
			this->Hombre->TabIndex = 6;
			this->Hombre->Text = L"Hombre";
			this->Hombre->UseVisualStyleBackColor = false;
			// 
			// Mujer
			// 
			this->Mujer->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Mujer->Font = (gcnew System::Drawing::Font(L"Agency FB", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mujer->Location = System::Drawing::Point(204, 138);
			this->Mujer->Name = L"Mujer";
			this->Mujer->Size = System::Drawing::Size(135, 39);
			this->Mujer->TabIndex = 7;
			this->Mujer->Text = L"Mujer";
			this->Mujer->UseVisualStyleBackColor = false;
			// 
			// Genero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 317);
			this->Controls->Add(this->Mujer);
			this->Controls->Add(this->Hombre);
			this->Controls->Add(this->lbl_SIVA);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Genero";
			this->Text = L"Genero";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
