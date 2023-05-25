#include "MainForm1.h" 
#include "LoginForm.h"
#include "RegisterForm.h" 


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		LoginRegisterform::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			LoginRegisterform::RegisterForm registerForm;  
			registerForm.ShowDialog();   
			if (registerForm.switchToLogin) {
				continue;
			}
			else {
				user = registerForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}

	}

	if (user != nullptr) { 
		LoginRegisterform::MainForm mainForm(user);
		Application::Run(% mainForm);
		
	}
	else {
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}
}
