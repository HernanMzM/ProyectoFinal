#pragma once

namespace SIVA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ sugh;
	private: System::Windows::Forms::Button^ plgh;
	private: System::Windows::Forms::Button^ pagh;
	private: System::Windows::Forms::Button^ shgh;



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
			this->sugh = (gcnew System::Windows::Forms::Button());
			this->plgh = (gcnew System::Windows::Forms::Button());
			this->pagh = (gcnew System::Windows::Forms::Button());
			this->shgh = (gcnew System::Windows::Forms::Button());
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
			this->label1->TabIndex = 1;
			this->label1->Text = L"JP SHOP";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"PMingLiU-ExtB", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(348, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L"GymShark";
			this->label2->Click += gcnew System::EventHandler(this, &Form3::label2_Click);
			// 
			// sugh
			// 
			this->sugh->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->sugh->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sugh->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sugh->Location = System::Drawing::Point(160, 313);
			this->sugh->Name = L"sugh";
			this->sugh->Size = System::Drawing::Size(133, 51);
			this->sugh->TabIndex = 3;
			this->sugh->Text = L"AGREGAR";
			this->sugh->UseVisualStyleBackColor = false;
			this->sugh->Click += gcnew System::EventHandler(this, &Form3::vsugh_Click);
			// 
			// plgh
			// 
			this->plgh->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->plgh->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plgh->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->plgh->Location = System::Drawing::Point(299, 313);
			this->plgh->Name = L"plgh";
			this->plgh->Size = System::Drawing::Size(133, 51);
			this->plgh->TabIndex = 4;
			this->plgh->Text = L"AGREGAR";
			this->plgh->UseVisualStyleBackColor = false;
			// 
			// pagh
			// 
			this->pagh->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pagh->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pagh->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->pagh->Location = System::Drawing::Point(438, 313);
			this->pagh->Name = L"pagh";
			this->pagh->Size = System::Drawing::Size(133, 51);
			this->pagh->TabIndex = 5;
			this->pagh->Text = L"AGREGAR";
			this->pagh->UseVisualStyleBackColor = false;
			// 
			// shgh
			// 
			this->shgh->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->shgh->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->shgh->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->shgh->Location = System::Drawing::Point(577, 313);
			this->shgh->Name = L"shgh";
			this->shgh->Size = System::Drawing::Size(133, 51);
			this->shgh->TabIndex = 6;
			this->shgh->Text = L"AGREGAR";
			this->shgh->UseVisualStyleBackColor = false;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(884, 461);
			this->Controls->Add(this->shgh);
			this->Controls->Add(this->pagh);
			this->Controls->Add(this->plgh);
			this->Controls->Add(this->sugh);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form3";
			this->Text = L"Form3";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void vsugh_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
