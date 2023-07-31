#include "LogIn.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		SMCA::LogIn  login;
		login.ShowDialog();
		User^ user = login.user;
		if (user != nullptr) {
			MessageBox::Show("Successful Authentication of " + user->Name,
				"Program.cpp", MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("Authentication Canceled",
				"Program.cpp", MessageBoxButtons::OK);
		}
	};
}