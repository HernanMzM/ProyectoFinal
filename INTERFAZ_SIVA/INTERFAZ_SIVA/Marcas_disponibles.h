#pragma once
using namespace std;
#include "Genero.h"
#include "Marca.h"
#include "Devoluciones.h"
#include "Inventarios.h"
#include "Ventas.h"

namespace INTERFAZ_SIVA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Marcas_disponibles
	/// </summary>
	public ref class Marcas_disponibles : public System::Windows::Forms::Form
	{
	public:
		Marcas_disponibles(void)
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
		~Marcas_disponibles()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelLateral;
	private: System::Windows::Forms::Button^ Devoluciones;

	private: System::Windows::Forms::Button^ Ventas;
	private: System::Windows::Forms::Button^ Inventarios;
	private: System::Windows::Forms::Button^ Genero;
	private: System::Windows::Forms::Button^ marca;
	private: System::Windows::Forms::Panel^ margen;
	private: System::Windows::Forms::Panel^ panel_contenedor;
	protected:

	protected:







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
			this->panelLateral = (gcnew System::Windows::Forms::Panel());
			this->Devoluciones = (gcnew System::Windows::Forms::Button());
			this->Ventas = (gcnew System::Windows::Forms::Button());
			this->Inventarios = (gcnew System::Windows::Forms::Button());
			this->Genero = (gcnew System::Windows::Forms::Button());
			this->marca = (gcnew System::Windows::Forms::Button());
			this->margen = (gcnew System::Windows::Forms::Panel());
			this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
			this->panelLateral->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelLateral
			// 
			this->panelLateral->BackColor = System::Drawing::Color::DarkGray;
			this->panelLateral->Controls->Add(this->Devoluciones);
			this->panelLateral->Controls->Add(this->Ventas);
			this->panelLateral->Controls->Add(this->Inventarios);
			this->panelLateral->Controls->Add(this->Genero);
			this->panelLateral->Controls->Add(this->marca);
			this->panelLateral->Controls->Add(this->margen);
			this->panelLateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelLateral->Location = System::Drawing::Point(0, 0);
			this->panelLateral->Name = L"panelLateral";
			this->panelLateral->Size = System::Drawing::Size(146, 317);
			this->panelLateral->TabIndex = 0;
			// 
			// Devoluciones
			// 
			this->Devoluciones->BackColor = System::Drawing::Color::White;
			this->Devoluciones->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Devoluciones->Dock = System::Windows::Forms::DockStyle::Top;
			this->Devoluciones->FlatAppearance->BorderColor = System::Drawing::Color::Purple;
			this->Devoluciones->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Devoluciones->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Devoluciones->Location = System::Drawing::Point(0, 226);
			this->Devoluciones->Name = L"Devoluciones";
			this->Devoluciones->Size = System::Drawing::Size(146, 41);
			this->Devoluciones->TabIndex = 6;
			this->Devoluciones->Text = L"Devoluciones";
			this->Devoluciones->UseVisualStyleBackColor = false;
			this->Devoluciones->Click += gcnew System::EventHandler(this, &Marcas_disponibles::Deboluciones_Click);
			// 
			// Ventas
			// 
			this->Ventas->BackColor = System::Drawing::Color::White;
			this->Ventas->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Ventas->Dock = System::Windows::Forms::DockStyle::Top;
			this->Ventas->FlatAppearance->BorderColor = System::Drawing::Color::Purple;
			this->Ventas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ventas->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ventas->Location = System::Drawing::Point(0, 185);
			this->Ventas->Name = L"Ventas";
			this->Ventas->Size = System::Drawing::Size(146, 41);
			this->Ventas->TabIndex = 5;
			this->Ventas->Text = L"Ventas";
			this->Ventas->UseVisualStyleBackColor = false;
			this->Ventas->Click += gcnew System::EventHandler(this, &Marcas_disponibles::Ventas_Click);
			// 
			// Inventarios
			// 
			this->Inventarios->BackColor = System::Drawing::Color::White;
			this->Inventarios->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Inventarios->Dock = System::Windows::Forms::DockStyle::Top;
			this->Inventarios->FlatAppearance->BorderColor = System::Drawing::Color::Purple;
			this->Inventarios->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Inventarios->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Inventarios->Location = System::Drawing::Point(0, 144);
			this->Inventarios->Name = L"Inventarios";
			this->Inventarios->Size = System::Drawing::Size(146, 41);
			this->Inventarios->TabIndex = 4;
			this->Inventarios->Text = L"Inventarios";
			this->Inventarios->UseVisualStyleBackColor = false;
			this->Inventarios->Click += gcnew System::EventHandler(this, &Marcas_disponibles::Inventarios_Click);
			// 
			// Genero
			// 
			this->Genero->BackColor = System::Drawing::Color::White;
			this->Genero->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Genero->Dock = System::Windows::Forms::DockStyle::Top;
			this->Genero->FlatAppearance->BorderColor = System::Drawing::Color::Purple;
			this->Genero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Genero->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Genero->Location = System::Drawing::Point(0, 103);
			this->Genero->Name = L"Genero";
			this->Genero->Size = System::Drawing::Size(146, 41);
			this->Genero->TabIndex = 3;
			this->Genero->Text = L"Genero";
			this->Genero->UseVisualStyleBackColor = false;
			this->Genero->Click += gcnew System::EventHandler(this, &Marcas_disponibles::Genero_Click);
			// 
			// marca
			// 
			this->marca->BackColor = System::Drawing::Color::White;
			this->marca->Cursor = System::Windows::Forms::Cursors::Hand;
			this->marca->Dock = System::Windows::Forms::DockStyle::Top;
			this->marca->FlatAppearance->BorderColor = System::Drawing::Color::Purple;
			this->marca->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->marca->Font = (gcnew System::Drawing::Font(L"Agency FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->marca->Location = System::Drawing::Point(0, 62);
			this->marca->Name = L"marca";
			this->marca->Size = System::Drawing::Size(146, 41);
			this->marca->TabIndex = 2;
			this->marca->Text = L"Marca";
			this->marca->UseVisualStyleBackColor = false;
			this->marca->Click += gcnew System::EventHandler(this, &Marcas_disponibles::marca_Click);
			// 
			// margen
			// 
			this->margen->BackColor = System::Drawing::Color::DarkGray;
			this->margen->Dock = System::Windows::Forms::DockStyle::Top;
			this->margen->Location = System::Drawing::Point(0, 0);
			this->margen->Name = L"margen";
			this->margen->Size = System::Drawing::Size(146, 62);
			this->margen->TabIndex = 1;
			// 
			// panel_contenedor
			// 
			this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenedor->Location = System::Drawing::Point(146, 0);
			this->panel_contenedor->Name = L"panel_contenedor";
			this->panel_contenedor->Size = System::Drawing::Size(414, 317);
			this->panel_contenedor->TabIndex = 1;
			this->panel_contenedor->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Marcas_disponibles::panel_contenedor_Paint);
			// 
			// Marcas_disponibles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(560, 317);
			this->Controls->Add(this->panel_contenedor);
			this->Controls->Add(this->panelLateral);
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Name = L"Marcas_disponibles";
			this->Text = L"Marcas_disponibles";
			this->panelLateral->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	template<class T>
	void AbrirPanel(T FormHijo) {
		if (this->panel_contenedor->Controls->Count > 0)
			this->panel_contenedor->Controls->RemoveAt(0);
		FormHijo->TopLevel = false;
		FormHijo->Dock = DockStyle::Fill;
		this->panel_contenedor->Controls->Add(FormHijo);
		this->panel_contenedor->Tag = FormHijo;
		FormHijo->Show();
	}
	private: System::Void lbl_SIVA_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_siguiente2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void panel_contenedor_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void marca_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew INTERFAZ_SIVA::Marca);
	}
	private: System::Void Genero_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew INTERFAZ_SIVA::Genero);
	}

	private: System::Void Inventarios_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew INTERFAZ_SIVA::Inventarios);
	}
	private: System::Void Ventas_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew INTERFAZ_SIVA::Ventas);
	}
	private: System::Void Deboluciones_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirPanel(gcnew INTERFAZ_SIVA::Devoluciones);
	}
};
}
