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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ comprar;
	private: System::Windows::Forms::Button^ devolver;



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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comprar = (gcnew System::Windows::Forms::Button());
			this->devolver = (gcnew System::Windows::Forms::Button());
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(165, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 46);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Sudadera\r\n$1500";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &Form3::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(324, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 46);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Playera\r\n$850\r\n";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &Form3::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(472, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 46);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Pants\r\n$1500";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &Form3::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(603, 145);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 46);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Short\r\n$1500";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comprar
			// 
			this->comprar->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comprar->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comprar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->comprar->Location = System::Drawing::Point(207, 396);
			this->comprar->Name = L"comprar";
			this->comprar->Size = System::Drawing::Size(208, 47);
			this->comprar->TabIndex = 11;
			this->comprar->Text = L"COMPRAR";
			this->comprar->UseVisualStyleBackColor = false;
			// 
			// devolver
			// 
			this->devolver->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->devolver->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->devolver->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->devolver->Location = System::Drawing::Point(452, 396);
			this->devolver->Name = L"devolver";
			this->devolver->Size = System::Drawing::Size(208, 47);
			this->devolver->TabIndex = 12;
			this->devolver->Text = L"DEVOLVER";
			this->devolver->UseVisualStyleBackColor = false;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(884, 461);
			this->Controls->Add(this->devolver);
			this->Controls->Add(this->comprar);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
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
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
