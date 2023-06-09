#pragma once
#include "User.h"

namespace LoginRegisterform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::TextBox^ tbPassword;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnOK;

	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(22, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(678, 72);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(372, 137);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(428, 38);
			this->tbName->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 32);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Email";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(372, 194);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(428, 38);
			this->tbEmail->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 259);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 32);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Phone";
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(372, 253);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(428, 38);
			this->tbPhone->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 313);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 32);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Address";
			this->label5->Click += gcnew System::EventHandler(this, &RegisterForm::label5_Click);
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(372, 307);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(428, 38);
			this->tbAddress->TabIndex = 2;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(372, 363);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(428, 38);
			this->tbPassword->TabIndex = 2;
			this->tbPassword->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox5_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 424);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(244, 32);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Confirm Password";
			this->label6->Click += gcnew System::EventHandler(this, &RegisterForm::label6_Click);
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(372, 418);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(428, 38);
			this->tbConfirmPassword->TabIndex = 2;
			this->tbConfirmPassword->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox5_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 369);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(138, 32);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Password";
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(372, 505);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(200, 41);
			this->btnOK->TabIndex = 3;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(600, 505);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(200, 41);
			this->btnCancel->TabIndex = 4;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::button2_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(715, 577);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(85, 32);
			this->llLogin->TabIndex = 5;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(824, 618);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6); 
			this->Name = L"RegisterForm"; 
			this->Text = L"Register Form"; 
			this->ResumeLayout(false);  
			this->PerformLayout(); 

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   public: bool switchToLogin = false;
private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}

	   public: User^ user = nullptr;  
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = tbName->Text;
	String^ email = tbEmail->Text;
	String^ phone = tbPhone->Text; 
	String^ address = tbAddress->Text; 
	String^ password = tbPassword->Text;  
	String^ confirmPassowrd = tbConfirmPassword->Text;  

	if (name->Length == 0 || email->Length == 0 || phone->Length == 0 || address->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please enter all the fields", "One or more empty fields", MessageBoxButtons::OK);
		return;
	}

	if (String::Compare(password, confirmPassowrd) != 0) {
		MessageBox::Show("The password you have entered and the Confirm Password do not match", "Password Error", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=EmployeeNames,IDs,Pass;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = " INSERT INTO users " + "(name, email, phone, address, password) VALUES " + "(@name, @email, @phone, @address, @password);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@email", email); 
		command.Parameters->AddWithValue("@phone", phone); 
		command.Parameters->AddWithValue("@address", address); 
		command.Parameters->AddWithValue("@password", password);  
		
		command.ExecuteNonQuery();
		user = gcnew User;
		user->name = name;
		user->email = email;
		user->phone = phone; 
		user->address = address;
		user->password = password;
		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to register new user", "Register Failure", MessageBoxButtons::OK);
	}
    }
};
}
