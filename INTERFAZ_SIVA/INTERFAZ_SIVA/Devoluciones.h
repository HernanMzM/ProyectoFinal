#pragma once

namespace INTERFAZ_SIVA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Devoluciones
	/// </summary>
	public ref class Devoluciones : public System::Windows::Forms::Form
	{
	public:
		Devoluciones(void)
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
		~Devoluciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_SIVA;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Sudadera;
	private: System::Windows::Forms::Button^ Playera;
	private: System::Windows::Forms::Button^ Pants;
	private: System::Windows::Forms::Button^ Shorts;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Sudadera = (gcnew System::Windows::Forms::Button());
			this->Playera = (gcnew System::Windows::Forms::Button());
			this->Pants = (gcnew System::Windows::Forms::Button());
			this->Shorts = (gcnew System::Windows::Forms::Button());
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(128, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Prenda a devolver:";
			this->label1->Click += gcnew System::EventHandler(this, &Devoluciones::label1_Click);
			// 
			// Sudadera
			// 
			this->Sudadera->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Sudadera->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sudadera->Location = System::Drawing::Point(12, 156);
			this->Sudadera->Name = L"Sudadera";
			this->Sudadera->Size = System::Drawing::Size(88, 40);
			this->Sudadera->TabIndex = 5;
			this->Sudadera->Text = L"Sudadera";
			this->Sudadera->UseVisualStyleBackColor = false;
			// 
			// Playera
			// 
			this->Playera->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Playera->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Playera->Location = System::Drawing::Point(106, 156);
			this->Playera->Name = L"Playera";
			this->Playera->Size = System::Drawing::Size(88, 40);
			this->Playera->TabIndex = 6;
			this->Playera->Text = L"Playera";
			this->Playera->UseVisualStyleBackColor = false;
			// 
			// Pants
			// 
			this->Pants->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Pants->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pants->Location = System::Drawing::Point(203, 156);
			this->Pants->Name = L"Pants";
			this->Pants->Size = System::Drawing::Size(88, 40);
			this->Pants->TabIndex = 7;
			this->Pants->Text = L"Pants";
			this->Pants->UseVisualStyleBackColor = false;
			// 
			// Shorts
			// 
			this->Shorts->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Shorts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Shorts->Location = System::Drawing::Point(297, 156);
			this->Shorts->Name = L"Shorts";
			this->Shorts->Size = System::Drawing::Size(88, 40);
			this->Shorts->TabIndex = 8;
			this->Shorts->Text = L"Shorts";
			this->Shorts->UseVisualStyleBackColor = false;
			// 
			// Devoluciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 317);
			this->Controls->Add(this->Shorts);
			this->Controls->Add(this->Pants);
			this->Controls->Add(this->Playera);
			this->Controls->Add(this->Sudadera);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl_SIVA);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Devoluciones";
			this->Text = L"Devoluciones";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
