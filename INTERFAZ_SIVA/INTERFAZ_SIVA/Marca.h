#pragma once

namespace INTERFAZ_SIVA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Marca
	/// </summary>
	public ref class Marca : public System::Windows::Forms::Form
	{
	public:
		Marca(void)
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
		~Marca()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_SIVA;
	private: System::Windows::Forms::Button^ Gymshark;
	private: System::Windows::Forms::Button^ Youngla;
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
			this->Gymshark = (gcnew System::Windows::Forms::Button());
			this->Youngla = (gcnew System::Windows::Forms::Button());
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
			// Gymshark
			// 
			this->Gymshark->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Gymshark->Font = (gcnew System::Drawing::Font(L"Agency FB", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Gymshark->Location = System::Drawing::Point(57, 138);
			this->Gymshark->Name = L"Gymshark";
			this->Gymshark->Size = System::Drawing::Size(141, 39);
			this->Gymshark->TabIndex = 5;
			this->Gymshark->Text = L"GYMSHARK";
			this->Gymshark->UseVisualStyleBackColor = false;
			this->Gymshark->Click += gcnew System::EventHandler(this, &Marca::Gymshark_Click);
			// 
			// Youngla
			// 
			this->Youngla->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Youngla->Font = (gcnew System::Drawing::Font(L"Agency FB", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Youngla->Location = System::Drawing::Point(204, 138);
			this->Youngla->Name = L"Youngla";
			this->Youngla->Size = System::Drawing::Size(141, 39);
			this->Youngla->TabIndex = 6;
			this->Youngla->Text = L"YOUNGLA";
			this->Youngla->UseVisualStyleBackColor = false;
			// 
			// Marca
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 317);
			this->Controls->Add(this->Youngla);
			this->Controls->Add(this->Gymshark);
			this->Controls->Add(this->lbl_SIVA);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Marca";
			this->Text = L"Marca";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Gymshark_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
