#pragma once
#include "User.h" 
namespace SMCA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LogIn
	/// </summary>
	public ref class LogIn : public System::Windows::Forms::Form
	{
	public:
		LogIn(void)
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
		~LogIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbPass;
	private: System::Windows::Forms::Button^ sign;
	protected:

	protected:


	private: System::Windows::Forms::Button^ log;

	private: System::Windows::Forms::Label^ label1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogIn::typeid));
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPass = (gcnew System::Windows::Forms::TextBox());
			this->sign = (gcnew System::Windows::Forms::Button());
			this->log = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbEmail
			// 
			this->tbEmail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbEmail->Location = System::Drawing::Point(87, 113);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(345, 20);
			this->tbEmail->TabIndex = 0;
			// 
			// tbPass
			// 
			this->tbPass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbPass->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbPass->Location = System::Drawing::Point(87, 139);
			this->tbPass->Name = L"tbPass";
			this->tbPass->PasswordChar = '*';
			this->tbPass->Size = System::Drawing::Size(345, 20);
			this->tbPass->TabIndex = 1;
			// 
			// sign
			// 
			this->sign->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->sign->BackColor = System::Drawing::Color::Gainsboro;
			this->sign->Font = (gcnew System::Drawing::Font(L"Caladea", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sign->ForeColor = System::Drawing::Color::Black;
			this->sign->Location = System::Drawing::Point(172, 224);
			this->sign->Name = L"sign";
			this->sign->Size = System::Drawing::Size(173, 28);
			this->sign->TabIndex = 2;
			this->sign->Text = L"Sign Up";
			this->sign->UseVisualStyleBackColor = false;
			this->sign->Click += gcnew System::EventHandler(this, &LogIn::button1_Click);
			// 
			// log
			// 
			this->log->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->log->BackColor = System::Drawing::Color::Gainsboro;
			this->log->Font = (gcnew System::Drawing::Font(L"Caladea", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->log->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->log->Location = System::Drawing::Point(172, 194);
			this->log->Name = L"log";
			this->log->Size = System::Drawing::Size(173, 24);
			this->log->TabIndex = 3;
			this->log->Text = L"Log In ";
			this->log->UseVisualStyleBackColor = false;
			this->log->Click += gcnew System::EventHandler(this, &LogIn::button2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Caladea", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(2, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(532, 34);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Smart Contact Manager ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &LogIn::label1_Click_1);
			// 
			// LogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(535, 348);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->log);
			this->Controls->Add(this->sign);
			this->Controls->Add(this->tbPass);
			this->Controls->Add(this->tbEmail);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"LogIn";
			this->Text = L"LogIn";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user = nullptr;
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Email = this->tbEmail->Text;
		String^ Password = this->tbPass->Text;
		if (Email->Length == 0 || Password->Length == 0) {
			MessageBox::Show("Please enter email and password",
				"Email or Password Empty", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=myrestaurant;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@pwd;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", Email);
			command.Parameters->AddWithValue("@pwd", Password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->Name = reader->GetString(1);
				user->Email = reader->GetString(2);
				user->Password = reader->GetString(3);

				this->Close();
			}
			else {
				MessageBox::Show("Email or password is incorrect",
					"Email or Password Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}
	};
	};
}
