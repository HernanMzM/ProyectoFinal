#pragma once
#include <iostream>
namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

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
    private: System::Windows::Forms::Label^ labelsiva;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ user;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ bLogin;

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
            this->labelsiva = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->user = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->bLogin = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // labelsiva
            // 
            this->labelsiva->AutoSize = true;
            this->labelsiva->BackColor = System::Drawing::SystemColors::WindowText;
            this->labelsiva->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelsiva->ForeColor = System::Drawing::SystemColors::Control;
            this->labelsiva->Location = System::Drawing::Point(325, 9);
            this->labelsiva->Name = L"labelsiva";
            this->labelsiva->Size = System::Drawing::Size(265, 128);
            this->labelsiva->TabIndex = 0;
            this->labelsiva->Text = L"SIVA";
            this->labelsiva->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->labelsiva->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label1->Location = System::Drawing::Point(342, 164);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(157, 30);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Ingrese Usuario";
            this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
            // 
            // user
            // 
            this->user->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->user->Location = System::Drawing::Point(347, 209);
            this->user->Name = L"user";
            this->user->Size = System::Drawing::Size(243, 25);
            this->user->TabIndex = 2;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
            this->label2->Location = System::Drawing::Point(342, 254);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(192, 30);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Ingrese Contraseña";
            this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(347, 297);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(243, 25);
            this->textBox1->TabIndex = 4;
            // 
            // bLogin
            // 
            this->bLogin->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bLogin->Location = System::Drawing::Point(347, 353);
            this->bLogin->Name = L"bLogin";
            this->bLogin->Size = System::Drawing::Size(243, 52);
            this->bLogin->TabIndex = 5;
            this->bLogin->Text = L"CONTINUAR";
            this->bLogin->UseVisualStyleBackColor = true;
            this->bLogin->Click += gcnew System::EventHandler(this, &Form1::bLogin_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->ClientSize = System::Drawing::Size(884, 461);
            this->Controls->Add(this->bLogin);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->user);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->labelsiva);
            this->Name = L"Form1";
            this->Text = L"SIVA";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void bLogin_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ username = user->Text;
        String^ password = textBox1->Text;
        if (username == "jpshop") {
            if (password == "skylex123") {
                MessageBox::Show("Bienvenido JP SHOP");

            }
            else {
                MessageBox::Show("Datos incorrectos");
            }
        }
        else {
            MessageBox::Show("Datos incorrectos");
        }
    }
    };
}
