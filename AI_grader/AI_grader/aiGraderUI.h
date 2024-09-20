#pragma once
#include <iostream>

using namespace std;

namespace AIGrader {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for aiGraderUI
	/// </summary>
	public ref class aiGraderUI : public System::Windows::Forms::Form
	{
	public:
		aiGraderUI(void)
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
		~aiGraderUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ buttonCreateNewChat;
	private: System::Windows::Forms::Button^ MainMenuButton;
	private: System::Windows::Forms::PictureBox^ chatBackground;
	private: System::Windows::Forms::GroupBox^ messagesBox;
	private: System::Windows::Forms::TextBox^ userInput;
	private: System::Windows::Forms::Button^ submitToTheServer;

	private: System::Windows::Forms::Panel^ chats2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(aiGraderUI::typeid));
			this->chatBackground = (gcnew System::Windows::Forms::PictureBox());
			this->messagesBox = (gcnew System::Windows::Forms::GroupBox());
			this->userInput = (gcnew System::Windows::Forms::TextBox());
			this->submitToTheServer = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonCreateNewChat = (gcnew System::Windows::Forms::Button());
			this->MainMenuButton = (gcnew System::Windows::Forms::Button());
			this->chats2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chatBackground))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// chatBackground
			// 
			this->chatBackground->Location = System::Drawing::Point(0, 0);
			this->chatBackground->Name = L"chatBackground";
			this->chatBackground->Size = System::Drawing::Size(100, 50);
			this->chatBackground->TabIndex = 0;
			this->chatBackground->TabStop = false;
			// 
			// messagesBox
			// 
			this->messagesBox->Location = System::Drawing::Point(0, 0);
			this->messagesBox->Name = L"messagesBox";
			this->messagesBox->Size = System::Drawing::Size(200, 100);
			this->messagesBox->TabIndex = 0;
			this->messagesBox->TabStop = false;
			// 
			// userInput
			// 
			this->userInput->Location = System::Drawing::Point(0, 0);
			this->userInput->Name = L"userInput";
			this->userInput->Size = System::Drawing::Size(100, 20);
			this->userInput->TabIndex = 0;
			// 
			// submitToTheServer
			// 
			this->submitToTheServer->Location = System::Drawing::Point(0, 0);
			this->submitToTheServer->Name = L"submitToTheServer";
			this->submitToTheServer->Size = System::Drawing::Size(75, 23);
			this->submitToTheServer->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1027, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(166, 166);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// buttonCreateNewChat
			// 
			this->buttonCreateNewChat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->buttonCreateNewChat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonCreateNewChat->ForeColor = System::Drawing::Color::White;
			this->buttonCreateNewChat->Location = System::Drawing::Point(12, 75);
			this->buttonCreateNewChat->Name = L"buttonCreateNewChat";
			this->buttonCreateNewChat->Size = System::Drawing::Size(125, 57);
			this->buttonCreateNewChat->TabIndex = 1;
			this->buttonCreateNewChat->Text = L"Create new chat";
			this->buttonCreateNewChat->UseVisualStyleBackColor = false;
			this->buttonCreateNewChat->Click += gcnew System::EventHandler(this, &aiGraderUI::buttonCreateNewChat_Click);
			// 
			// MainMenuButton
			// 
			this->MainMenuButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->MainMenuButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuButton->ForeColor = System::Drawing::Color::White;
			this->MainMenuButton->Location = System::Drawing::Point(12, 12);
			this->MainMenuButton->Name = L"MainMenuButton";
			this->MainMenuButton->Size = System::Drawing::Size(158, 57);
			this->MainMenuButton->TabIndex = 3;
			this->MainMenuButton->Text = L"Main Menu";
			this->MainMenuButton->UseVisualStyleBackColor = false;
			this->MainMenuButton->Click += gcnew System::EventHandler(this, &aiGraderUI::MainMenuButton_Click);
			// 
			// chats2
			// 
			this->chats2->AutoScroll = true;
			this->chats2->Location = System::Drawing::Point(1027, 196);
			this->chats2->Name = L"chats2";
			this->chats2->Size = System::Drawing::Size(166, 300);
			this->chats2->TabIndex = 5;
			// 
			// aiGraderUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->ClientSize = System::Drawing::Size(1200, 800);
			this->Controls->Add(this->chats2);
			this->Controls->Add(this->MainMenuButton);
			this->Controls->Add(this->buttonCreateNewChat);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"aiGraderUI";
			this->Text = L"AIGrader";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chatBackground))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void buttonCreateNewChat_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//deleting copies 
		if (this->chatBackground != nullptr)
		{
			this->Controls->Remove(this->chatBackground);
			this->chatBackground = nullptr;
		}
		if (this->messagesBox != nullptr)
		{
			this->Controls->Remove(this->messagesBox);
			delete this->messagesBox; // optional - cleanup if needed
			this->messagesBox = nullptr;
		}
		if (this->userInput != nullptr)
		{
			this->Controls->Remove(this->userInput);
			delete this->userInput; 
			this->userInput = nullptr;
		}
		if (this->submitToTheServer != nullptr)
		{
			this->Controls->Remove(this->submitToTheServer);
			delete this->submitToTheServer;
			this->submitToTheServer = nullptr;
		}


		// Creating messagesBox
		{
			this->messagesBox = (gcnew System::Windows::Forms::GroupBox());
			this->messagesBox->BackColor = System::Drawing::Color::FromArgb(40, 40, 36);
			this->messagesBox->Location = System::Drawing::Point(189, 0);
			this->messagesBox->Name = L"messagesBox";
			this->messagesBox->Size = System::Drawing::Size(832, 728);
			this->messagesBox->TabIndex = 3;
			this->messagesBox->TabStop = false;
			this->messagesBox->Text = L"Messages";
			this->Controls->Add(this->messagesBox);
			std::cout << "group box was created" << std::endl;
		}

		// creating userInput	
		{
			this->userInput = (gcnew System::Windows::Forms::TextBox());
			this->userInput->BackColor = System::Drawing::Color::FromArgb(40, 44, 40);
			this->userInput->Font = (gcnew System::Drawing::Font(L"Freestyle Script", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userInput->ForeColor = System::Drawing::SystemColors::Window;
			this->userInput->Location = System::Drawing::Point(189, 734);
			this->userInput->Multiline = true;
			this->userInput->Name = L"userInput";
			this->userInput->Size = System::Drawing::Size(741, 54);
			this->userInput->TabIndex = 5;
			this->Controls->Add(this->userInput);
		}

		//creating submitToTheServer button
		{
			this->submitToTheServer = (gcnew System::Windows::Forms::Button());
			this->submitToTheServer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->submitToTheServer->Font = (gcnew System::Drawing::Font(L"Dubai", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitToTheServer->ForeColor = System::Drawing::Color::White;
			this->submitToTheServer->Location = System::Drawing::Point(936, 734);
			this->submitToTheServer->Name = L"submitToTheServer";
			this->submitToTheServer->Size = System::Drawing::Size(85, 54);
			this->submitToTheServer->TabIndex = 6;
			this->submitToTheServer->Text = L"->";
			this->submitToTheServer->UseVisualStyleBackColor = false;
			this->submitToTheServer->Click += gcnew System::EventHandler(this, &aiGraderUI::submitToTheServer_Click);
			this->Controls->Add(this->submitToTheServer);
		}

		// Creating background
		{
			this->chatBackground = (gcnew System::Windows::Forms::PictureBox());
			this->chatBackground->BackColor = System::Drawing::Color::FromArgb(40, 36, 36);
			this->chatBackground->Location = System::Drawing::Point(176, 0);
			this->chatBackground->Name = L"chatBackground";
			this->chatBackground->Size = System::Drawing::Size(856, 813);
			this->chatBackground->TabIndex = 2;
			this->chatBackground->TabStop = false;
			this->Controls->Add(this->chatBackground);
		}

		
		//CREATING BUTTON IN "CHATS" HERE
		{
			Button^ newChatButton = gcnew Button();
			newChatButton->Text = L"Chat " + (this->chats2->Controls->Count + 1).ToString();
			newChatButton->Font = (gcnew System::Drawing::Font(L"Dubai", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			newChatButton->ForeColor = System::Drawing::SystemColors::Window;
			newChatButton->Size = System::Drawing::Size(100, 35);
			newChatButton->Location = System::Drawing::Point(10, this->chats2->Controls->Count * 40 + 10); // Positioning the button
			newChatButton->Click += gcnew System::EventHandler(this, &aiGraderUI::OpenChat_Click);
			this->chats2->Controls->Add(newChatButton);
		}
		
		
		
		
		


	}

	private: System::Void MainMenuButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		if (this->chatBackground != nullptr)
		{
			this->Controls->Remove(this->chatBackground);
			this->chatBackground = nullptr;
		}
		if (this->messagesBox != nullptr)
		{
			this->Controls->Remove(this->messagesBox);
			delete this->messagesBox; 
			this->messagesBox = nullptr;
		}
		if (this->userInput != nullptr)
		{
			this->Controls->Remove(this->userInput);
			delete this->userInput; 
			this->userInput = nullptr;
		}
		if (this->submitToTheServer != nullptr)
		{
			this->Controls->Remove(this->submitToTheServer);
			delete this->submitToTheServer;
			this->submitToTheServer = nullptr;
		}
	}


	private: System::Void submitToTheServer_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
	}

	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void OpenChat_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ clickedButton = safe_cast<Button^>(sender);
		String^ chatName = clickedButton->Text;

		// Implement logic to load the chat associated with 'chatName'
		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
