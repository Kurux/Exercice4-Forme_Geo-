#pragma once
#include "cercle.h"
#include "carre.h"
#include "donnees.h"

namespace formes_geo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	Figure* figureCourante;
	Donnees lesFigures;


	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBoxFigures;
	private: System::Windows::Forms::Button^  btnPerimetre;

	private: System::Windows::Forms::TextBox^  textCote;

	private: System::Windows::Forms::TextBox^  textY;
	private: System::Windows::Forms::TextBox^  textX;

	private: System::Windows::Forms::ComboBox^  comboFigure;
	private: System::Windows::Forms::Button^  btnCreerFigure;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textRayon;

	private: System::Windows::Forms::Button^  btnModifie;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBoxFigures = (gcnew System::Windows::Forms::ListBox());
			this->btnPerimetre = (gcnew System::Windows::Forms::Button());
			this->textCote = (gcnew System::Windows::Forms::TextBox());
			this->textY = (gcnew System::Windows::Forms::TextBox());
			this->textX = (gcnew System::Windows::Forms::TextBox());
			this->comboFigure = (gcnew System::Windows::Forms::ComboBox());
			this->btnCreerFigure = (gcnew System::Windows::Forms::Button());
			this->btnModifie = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textRayon = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(176, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 22);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Côté:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Y:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"X:";
			// 
			// listBoxFigures
			// 
			this->listBoxFigures->FormattingEnabled = true;
			this->listBoxFigures->Location = System::Drawing::Point(459, 10);
			this->listBoxFigures->Name = L"listBoxFigures";
			this->listBoxFigures->Size = System::Drawing::Size(180, 82);
			this->listBoxFigures->TabIndex = 18;
			// 
			// btnPerimetre
			// 
			this->btnPerimetre->Location = System::Drawing::Point(304, 15);
			this->btnPerimetre->Name = L"btnPerimetre";
			this->btnPerimetre->Size = System::Drawing::Size(121, 23);
			this->btnPerimetre->TabIndex = 17;
			this->btnPerimetre->Text = L"Périmètre des figures";
			this->btnPerimetre->UseVisualStyleBackColor = true;
			this->btnPerimetre->Click += gcnew System::EventHandler(this, &MyForm::btnPerimetre_Click);
			// 
			// textCote
			// 
			this->textCote->Location = System::Drawing::Point(226, 13);
			this->textCote->Name = L"textCote";
			this->textCote->Size = System::Drawing::Size(37, 20);
			this->textCote->TabIndex = 13;
			// 
			// textY
			// 
			this->textY->Location = System::Drawing::Point(38, 63);
			this->textY->Name = L"textY";
			this->textY->Size = System::Drawing::Size(38, 20);
			this->textY->TabIndex = 12;
			// 
			// textX
			// 
			this->textX->Location = System::Drawing::Point(39, 37);
			this->textX->Name = L"textX";
			this->textX->Size = System::Drawing::Size(37, 20);
			this->textX->TabIndex = 11;
			// 
			// comboFigure
			// 
			this->comboFigure->FormattingEnabled = true;
			this->comboFigure->Location = System::Drawing::Point(12, 12);
			this->comboFigure->Name = L"comboFigure";
			this->comboFigure->Size = System::Drawing::Size(99, 21);
			this->comboFigure->TabIndex = 24;
			// 
			// btnCreerFigure
			// 
			this->btnCreerFigure->Location = System::Drawing::Point(15, 88);
			this->btnCreerFigure->Name = L"btnCreerFigure";
			this->btnCreerFigure->Size = System::Drawing::Size(127, 23);
			this->btnCreerFigure->TabIndex = 25;
			this->btnCreerFigure->Text = L"Créer la figure";
			this->btnCreerFigure->UseVisualStyleBackColor = true;
			this->btnCreerFigure->Click += gcnew System::EventHandler(this, &MyForm::btn_CreerFigure);
			// 
			// btnModifie
			// 
			this->btnModifie->Location = System::Drawing::Point(304, 44);
			this->btnModifie->Name = L"btnModifie";
			this->btnModifie->Size = System::Drawing::Size(121, 23);
			this->btnModifie->TabIndex = 26;
			this->btnModifie->Text = L"Déplacer/Dimensionner";
			this->btnModifie->UseVisualStyleBackColor = true;
			this->btnModifie->Click += gcnew System::EventHandler(this, &MyForm::btnModifie_Click);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(176, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 22);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Rayon:";
			// 
			// textRayon
			// 
			this->textRayon->Location = System::Drawing::Point(226, 41);
			this->textRayon->Name = L"textRayon";
			this->textRayon->Size = System::Drawing::Size(37, 20);
			this->textRayon->TabIndex = 27;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 490);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textRayon);
			this->Controls->Add(this->btnModifie);
			this->Controls->Add(this->btnCreerFigure);
			this->Controls->Add(this->comboFigure);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBoxFigures);
			this->Controls->Add(this->btnPerimetre);
			this->Controls->Add(this->textCote);
			this->Controls->Add(this->textY);
			this->Controls->Add(this->textX);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 comboFigure->Items->Add("");
			 comboFigure->Items->Add("Carre");
			 comboFigure->Items->Add("Cercle");
			 figureCourante = NULL;
			 InitialiserTextBox();
		 }

		 void InitialiserTextBox()
		 {
			 textX->Text = "0";
			 textY->Text = "0";
			 textCote->Text = "0";
			 textRayon->Text = "0";
		 }

private: System::Void btn_CreerFigure(System::Object^  sender, System::EventArgs^  e) {
			 	int cpt=0;

				if (comboFigure->SelectedIndex != 0)
				{					
					if (comboFigure->SelectedIndex == 1)
					{
						figureCourante = new Carre(Convert::ToInt32(textX->Text), Convert::ToInt32(textY->Text),Convert::ToInt32(textCote->Text));
					}
					if (comboFigure->SelectedIndex == 2)
					{
						figureCourante = new Cercle(Convert::ToInt32(textX->Text), Convert::ToInt32(textY->Text), Convert::ToInt32(textRayon->Text));
					}
					if ( figureCourante != NULL)
					{
						
						lesFigures.AjouterFigure(figureCourante);
						DessinerFigure();
					}
					comboFigure->SelectedIndex = 0;
					InitialiserTextBox();
				}
				else
				{
					MessageBox::Show("Choisissez le type de figure que vous voulez créer");
				}
		 }

		 void DessinerFigure()
		 {

			int x = figureCourante->getX();
			int y = figureCourante->getY();
			int rayon = figureCourante->getRayon();
			int cote = figureCourante->getCote();
			 Graphics^ objetGraphique = CreateGraphics();
			 Pen^ crayon;
			 if (figureCourante->EstSelectionne()==true)
			 {
				 crayon = gcnew Pen(Color::Red);
				 textX->Text = x.ToString();
				 textY->Text = y.ToString();
				 textCote->Text = cote.ToString();
				 textRayon->Text = rayon.ToString();
			 }
			 else
			 {
				crayon = gcnew Pen(Color::Black);
			 }
					
			//donnez les bonnes valeurs à ces variables
			//vous devez utiliser les valeurs qui se trouvent dans figureCourante
			

			if (cote != 0)
			 {
				 objetGraphique->DrawRectangle(crayon, x, y, cote, cote);
			 }
			 else
			 {
				 objetGraphique->DrawEllipse(crayon, x, y, rayon * 2, rayon * 2);
			 }
			 delete crayon;
			 delete objetGraphique;
		 }

private: System::Void btnPerimetre_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cptFigure=0;
			 listBoxFigures->Items->Clear();
			 listBoxFigures->Items->Add("Périmètre des figures:");
			 figureCourante = lesFigures.ObtenirFigure(cptFigure);
			 while (figureCourante != nullptr)
			 {
				 listBoxFigures->Items->Add(figureCourante->CalculerPerimetre());
				 cptFigure++;
				 figureCourante = lesFigures.ObtenirFigure(cptFigure);
			 }
		 }

		void DessinerTout() 
		{
			 int cptFigure=0;
			 figureCourante = lesFigures.ObtenirFigure(cptFigure);
			 while (figureCourante != nullptr)
			 {
				 DessinerFigure();
				 cptFigure++;
				 figureCourante = lesFigures.ObtenirFigure(cptFigure);
			 }
		 }

private: System::Void MyForm_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 int cptFigure=0;
			 InitialiserTextBox();
			 listBoxFigures->Items->Clear();
			 figureCourante = lesFigures.ObtenirFigure(cptFigure);
			 while (figureCourante != NULL)
			 {
				 figureCourante->Deselectionner();
				 figureCourante->Selectionner(e->X, e->Y);
				 cptFigure++;     
				 figureCourante = lesFigures.ObtenirFigure(cptFigure);
			 }
			 DessinerTout();
		 }

private: System::Void btnModifie_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cptFigure=0; 
			 listBoxFigures->Items->Clear();
			 figureCourante = lesFigures.ObtenirFigure(cptFigure);
			 while (figureCourante != NULL)
			 {
				 if (figureCourante->EstSelectionne()==true)
				 {
					 figureCourante->setPoint(Convert::ToInt32(textX->Text), Convert::ToInt32(textY->Text));
					 figureCourante->setRayon(Convert::ToInt32(textRayon->Text));
					 figureCourante->setCote(Convert::ToInt32(textCote->Text));
				 }

				 cptFigure++;
				 figureCourante = lesFigures.ObtenirFigure(cptFigure);
			 }

			 //tout effacer pour tout redessiner selon les nouvelles dimensions ou positions
			 this->Refresh();
			 DessinerTout();
		 }

};
}
