#pragma once

namespace INTERFAZ_SIVA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inventarios
	/// </summary>
	public ref class Inventarios : public System::Windows::Forms::Form
	{
	public:
		Inventarios(void)
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
		~Inventarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_SIVA;
	private: System::Windows::Forms::Label^ Sudaderas;
	private: System::Windows::Forms::Label^ Playeras;
	private: System::Windows::Forms::Label^ Pants;
	private: System::Windows::Forms::Label^ Shorts;
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
			this->Sudaderas = (gcnew System::Windows::Forms::Label());
			this->Playeras = (gcnew System::Windows::Forms::Label());
			this->Pants = (gcnew System::Windows::Forms::Label());
			this->Shorts = (gcnew System::Windows::Forms::Label());
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
			// Sudaderas
			// 
			this->Sudaderas->AutoSize = true;
			this->Sudaderas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sudaderas->Location = System::Drawing::Point(123, 120);
			this->Sudaderas->Name = L"Sudaderas";
			this->Sudaderas->Size = System::Drawing::Size(162, 16);
			this->Sudaderas->TabIndex = 4;
			this->Sudaderas->Text = L"Sudaderas en inventario : ";
			// 
			// Playeras
			// 
			this->Playeras->AutoSize = true;
			this->Playeras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Playeras->Location = System::Drawing::Point(133, 150);
			this->Playeras->Name = L"Playeras";
			this->Playeras->Size = System::Drawing::Size(149, 16);
			this->Playeras->TabIndex = 5;
			this->Playeras->Text = L"Playeras en inventario : ";
			// 
			// Pants
			// 
			this->Pants->AutoSize = true;
			this->Pants->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pants->Location = System::Drawing::Point(153, 180);
			this->Pants->Name = L"Pants";
			this->Pants->Size = System::Drawing::Size(129, 16);
			this->Pants->TabIndex = 6;
			this->Pants->Text = L"Pants en inventario : ";
			// 
			// Shorts
			// 
			this->Shorts->AutoSize = true;
			this->Shorts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Shorts->Location = System::Drawing::Point(149, 208);
			this->Shorts->Name = L"Shorts";
			this->Shorts->Size = System::Drawing::Size(133, 16);
			this->Shorts->TabIndex = 7;
			this->Shorts->Text = L"Shorts en inventario : ";
			// 
			// Inventarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 317);
			this->Controls->Add(this->Shorts);
			this->Controls->Add(this->Pants);
			this->Controls->Add(this->Playeras);
			this->Controls->Add(this->Sudaderas);
			this->Controls->Add(this->lbl_SIVA);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inventarios";
			this->Text = L"Inventarios";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
