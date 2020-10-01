#pragma once
#include"Carta.h"
#include"Lista.h"
#include "Monton.h"
namespace Lab03KarlaLopez1059420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Lista *grupo1 =new Lista();
		Lista* grupo2 = new Lista();
		Lista* grupo3 = new Lista();
		Lista* grupo4 = new Lista();
		Lista* grupo5 = new Lista();
		Lista* grupo6 = new Lista();
		Lista* grupo7 = new Lista();
		Monton* monton = new Monton();
		int posicionmonton;
	private: System::Windows::Forms::DataGridView^ DTGTABLERO;
	private: System::Windows::Forms::TextBox^ TXTPOS;
	private: System::Windows::Forms::TextBox^ TXTORIGEN;
	private: System::Windows::Forms::TextBox^ TXTDESTINO;
	private: System::Windows::Forms::Button^ BTNMOVER;
	private: System::Windows::Forms::Button^ BTNCAMBIOM;
	private: System::Windows::Forms::Label^ LBLMONTON;
	public:
		array<String^>^ arreglo = gcnew array<String^>(52);
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->DTGTABLERO = (gcnew System::Windows::Forms::DataGridView());
			this->TXTPOS = (gcnew System::Windows::Forms::TextBox());
			this->TXTORIGEN = (gcnew System::Windows::Forms::TextBox());
			this->TXTDESTINO = (gcnew System::Windows::Forms::TextBox());
			this->BTNMOVER = (gcnew System::Windows::Forms::Button());
			this->BTNCAMBIOM = (gcnew System::Windows::Forms::Button());
			this->LBLMONTON = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DTGTABLERO))->BeginInit();
			this->SuspendLayout();
			// 
			// DTGTABLERO
			// 
			this->DTGTABLERO->AllowUserToAddRows = false;
			this->DTGTABLERO->AllowUserToDeleteRows = false;
			this->DTGTABLERO->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DTGTABLERO->Location = System::Drawing::Point(43, 141);
			this->DTGTABLERO->Name = L"DTGTABLERO";
			this->DTGTABLERO->ReadOnly = true;
			this->DTGTABLERO->RowHeadersWidth = 51;
			this->DTGTABLERO->RowTemplate->Height = 24;
			this->DTGTABLERO->Size = System::Drawing::Size(575, 277);
			this->DTGTABLERO->TabIndex = 0;
			// 
			// TXTPOS
			// 
			this->TXTPOS->Location = System::Drawing::Point(703, 103);
			this->TXTPOS->Name = L"TXTPOS";
			this->TXTPOS->Size = System::Drawing::Size(251, 22);
			this->TXTPOS->TabIndex = 1;
			// 
			// TXTORIGEN
			// 
			this->TXTORIGEN->Location = System::Drawing::Point(703, 198);
			this->TXTORIGEN->Name = L"TXTORIGEN";
			this->TXTORIGEN->Size = System::Drawing::Size(251, 22);
			this->TXTORIGEN->TabIndex = 2;
			// 
			// TXTDESTINO
			// 
			this->TXTDESTINO->Location = System::Drawing::Point(703, 286);
			this->TXTDESTINO->Name = L"TXTDESTINO";
			this->TXTDESTINO->Size = System::Drawing::Size(251, 22);
			this->TXTDESTINO->TabIndex = 3;
			// 
			// BTNMOVER
			// 
			this->BTNMOVER->Location = System::Drawing::Point(79, 50);
			this->BTNMOVER->Name = L"BTNMOVER";
			this->BTNMOVER->Size = System::Drawing::Size(164, 51);
			this->BTNMOVER->TabIndex = 4;
			this->BTNMOVER->Text = L"Iniciar";
			this->BTNMOVER->UseVisualStyleBackColor = true;
			this->BTNMOVER->Click += gcnew System::EventHandler(this, &MyForm::BTNMOVER_Click);
			// 
			// BTNCAMBIOM
			// 
			this->BTNCAMBIOM->Location = System::Drawing::Point(291, 44);
			this->BTNCAMBIOM->Name = L"BTNCAMBIOM";
			this->BTNCAMBIOM->Size = System::Drawing::Size(133, 62);
			this->BTNCAMBIOM->TabIndex = 5;
			this->BTNCAMBIOM->Text = L"Monton";
			this->BTNCAMBIOM->UseVisualStyleBackColor = true;
			this->BTNCAMBIOM->Click += gcnew System::EventHandler(this, &MyForm::BTNCAMBIOM_Click);
			// 
			// LBLMONTON
			// 
			this->LBLMONTON->AutoSize = true;
			this->LBLMONTON->Location = System::Drawing::Point(487, 52);
			this->LBLMONTON->Name = L"LBLMONTON";
			this->LBLMONTON->Size = System::Drawing::Size(0, 17);
			this->LBLMONTON->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1140, 510);
			this->Controls->Add(this->LBLMONTON);
			this->Controls->Add(this->BTNCAMBIOM);
			this->Controls->Add(this->BTNMOVER);
			this->Controls->Add(this->TXTDESTINO);
			this->Controls->Add(this->TXTORIGEN);
			this->Controls->Add(this->TXTPOS);
			this->Controls->Add(this->DTGTABLERO);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DTGTABLERO))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0;  i < 13;  i++)
		{
			arreglo[i] = "N" + (i+1);
		}
		for (int i = 13; i <=26; i++)
		{
			arreglo[i] = "N" + (i%13+1);
		}
		for (int i = 26; i < 39; i++)
		{
			arreglo[i] = "R" + (i % 13 + 1);
		}
		for (int i = 39; i < 52; i++)
		{
			arreglo[i] = "R" + (i % 13 + 1);
		}
		repartir();
		llenardata();
	}

		   void repartir() {
			   Random^ rdm = gcnew Random();
			   int pos = rdm->Next(0, 52);
			   String^ x = arreglo[pos];
			   int numero;
			   char color;
			   numero = Convert::ToInt32(x->Remove(0, 1));
			   color = Convert::ToChar(x->Substring(0, 1));
			   grupo1->agregar_carta(numero, color);
			   arreglo[pos] = "";
			   int k=0;
			   while (k<2)
			   {
				   pos = rdm->Next(0, 52);
				   if (arreglo[pos]!="")
				   {
					   x = arreglo[pos];
					   numero = Convert::ToInt32(x->Remove(0, 1));
					   color = Convert::ToChar(x->Substring(0, 1));
					   grupo2->agregar_carta(numero, color);
					   arreglo[pos] = "";
					   k++;
				   }
			   }
			   k = 0;
			   while (k < 3)
			   {
				   pos = rdm->Next(0, 52);
				   if (arreglo[pos] != "")
				   {
					   x = arreglo[pos];
					   numero = Convert::ToInt32(x->Remove(0, 1));
					   color = Convert::ToChar(x->Substring(0, 1));
					   grupo3->agregar_carta(numero, color);
					   arreglo[pos] = "";
					   k++;
				   }
			   }
			   k = 0;
			   while (k < 4)
			   {
				   pos = rdm->Next(0, 52);
				   if (arreglo[pos] != "")
				   {
					   x = arreglo[pos];
					   numero = Convert::ToInt32(x->Remove(0, 1));
					   color = Convert::ToChar(x->Substring(0, 1));
					   grupo4->agregar_carta(numero, color);
					   arreglo[pos] = "";
					   k++;
				   }
			   }
			   k = 0;
			   while (k < 5)
			   {
				   pos = rdm->Next(0, 52);
				   if (arreglo[pos] != "")
				   {
					   x = arreglo[pos];
					   numero = Convert::ToInt32(x->Remove(0, 1));
					   color = Convert::ToChar(x->Substring(0, 1));
					   grupo5->agregar_carta(numero, color);
					   arreglo[pos] = "";
					   k++;
				   }
			   }
			   k = 0;
			   while (k < 6)
			   {
				   pos = rdm->Next(0, 52);
				   if (arreglo[pos] != "")
				   {
					   x = arreglo[pos];
					   numero = Convert::ToInt32(x->Remove(0, 1));
					   color = Convert::ToChar(x->Substring(0, 1));
					   grupo6->agregar_carta(numero, color);
					   arreglo[pos] = "";
					   k++;
				   }
			   }
			   k = 0;
			   while (k < 7)
			   {
				   pos = rdm->Next(0, 52);
				   if (arreglo[pos] != "")
				   {
					   x = arreglo[pos];
					   numero = Convert::ToInt32(x->Remove(0, 1));
					   color = Convert::ToChar(x->Substring(0, 1));
					   grupo7->agregar_carta(numero, color);
					   arreglo[pos] = "";
					   k++;
				   }
			   }
			   k = 0;
			   while (k < 24)
			   {
				   pos = rdm->Next(0, 52);
				   if (arreglo[pos] != "")
				   {
					   x = arreglo[pos];
					   numero = Convert::ToInt32(x->Remove(0, 1));
					   color = Convert::ToChar(x->Substring(0, 1));
					   monton->agregar_carta(numero, color);
					   arreglo[pos] = "";
					   k++;
				   }
			   }
		   }

		   void llenardata() {
			   DTGTABLERO->ColumnCount = 7;
			   DTGTABLERO->RowCount = 10;
			   Carta *y = new Carta(1, 'c');
			   for (int i = 0; i < grupo1->cantidad; i++)
			   {
				   *y = grupo1->obtener_carta(i);
				   if (grupo1->carta1 != nullptr)
				   {
					   if (y->siguiente != nullptr && y->mostrar == false)
					   {
						   DTGTABLERO->Rows[i]->Cells[0]->Value = "-";
						   
					   }
					   else
					   {
						   y->mostrar = true;
						   DTGTABLERO->Rows[i]->Cells[0]->Value = y->color + y->numero;
					   }
				   }
				   
			   }
			   for (int i = 0; i < grupo2->cantidad; i++)
			   {
				   *y = grupo2->obtener_carta(i);
				   if (grupo2->carta1!=nullptr)
				   {
					   if (y->siguiente != nullptr && y->mostrar == false)
					   {
						   DTGTABLERO->Rows[i]->Cells[1]->Value = "-";
					   }
					   else
					   {
						   DTGTABLERO->Rows[i]->Cells[1]->Value = y->color + y->numero;
					   }
				   }
				   
			   }
			   for (int i = 0; i < grupo3->cantidad; i++)
			   {
				   *y = grupo3->obtener_carta(i);
				   if (grupo3->carta1 != nullptr)
				   {
					   if (y->siguiente != nullptr && y->mostrar == false)
					   {
						   DTGTABLERO->Rows[i]->Cells[2]->Value = "-";
					   }
					   else
					   {
						   DTGTABLERO->Rows[i]->Cells[2]->Value = y->color + y->numero;
					   }
				   }

			   }
			   for (int i = 0; i < grupo4->cantidad; i++)
			   {
				   *y = grupo4->obtener_carta(i);
				   if (grupo4->carta1 != nullptr)
				   {
					   if (y->siguiente != nullptr && y->mostrar == false)
					   {
						   DTGTABLERO->Rows[i]->Cells[3]->Value = "-";
					   }
					   else
					   {
						   DTGTABLERO->Rows[i]->Cells[3]->Value = y->color + y->numero;
					   }
				   }

			   }
			   for (int i = 0; i < grupo5->cantidad; i++)
			   {
				   *y = grupo5->obtener_carta(i);
				   if (grupo5->carta1 != nullptr)
				   {
					   if (y->siguiente != nullptr && y->mostrar == false)
					   {
						   DTGTABLERO->Rows[i]->Cells[4]->Value = "-";
					   }
					   else
					   {
						   DTGTABLERO->Rows[i]->Cells[4]->Value = y->color + y->numero;
					   }
				   }

			   }
			   for (int i = 0; i < grupo6->cantidad; i++)
			   {
				   *y = grupo6->obtener_carta(i);
				   if (grupo6->carta1 != nullptr)
				   {
					   if (y->siguiente != nullptr && y->mostrar == false)
					   {
						   DTGTABLERO->Rows[i]->Cells[5]->Value = "-";
					   }
					   else
					   {
						   DTGTABLERO->Rows[i]->Cells[5]->Value = y->color + y->numero;
					   }
				   }

			   }
			   for (int i = 0; i < grupo7->cantidad; i++)
			   {
				   *y = grupo7->obtener_carta(i);
				   if (grupo7->carta1 != nullptr)
				   {
					   if (y->siguiente != nullptr && y->mostrar == false)
					   {
						   DTGTABLERO->Rows[i]->Cells[6]->Value = "-";
					   }
					   else
					   {
						   DTGTABLERO->Rows[i]->Cells[6]->Value = y->color + y->numero;
					   }
				   }

			   }

		   }
	private: System::Void BTNMOVER_Click(System::Object^ sender, System::EventArgs^ e) {
		int posicion;
		posicion = Convert::ToInt32(TXTPOS->Text);
		int grupos;
		int destino=Convert::ToInt32(TXTDESTINO->Text);
		bool grupo = int::TryParse(TXTORIGEN->Text, grupos);
		if (grupo)
		{
			if (DTGTABLERO->Rows[posicion]->Cells[grupos-1]->Value!="-")
			{
				switch (grupos)
				{
				case 1:
				{
					Carta *z = &grupo1->obtener_carta(posicion);
					
					if (z->mostrar ==true&&mandar_carta(destino,z))
					{
						grupo1->quitar_carta(posicion);
					}
					break;
				}
				case 2:
				{
					Carta *z = &grupo2->obtener_carta(posicion);
					if (z->mostrar == true && mandar_carta(destino, z))
					{
						grupo2->quitar_carta(posicion);
					}
					break;
				}
				case 3:
				{
					Carta* z = &grupo3->obtener_carta(posicion);
					if (z->mostrar == true && mandar_carta(destino, z))
					{
						grupo3->quitar_carta(posicion);
					}
					break;
				}
				case 4:
				{
					Carta* z = &grupo4->obtener_carta(posicion);
					if (z->mostrar == true && mandar_carta(destino, z))
					{
						grupo4->quitar_carta(posicion);
					}
					break;
				}
				case 5:
				{
					Carta* z = &grupo5->obtener_carta(posicion);
					if (z->mostrar == true && mandar_carta(destino, z))
					{
						grupo5->quitar_carta(posicion);
					}
					break;
				}
				case 6:
				{
					Carta* z = &grupo6->obtener_carta(posicion);
					if (z->mostrar == true && mandar_carta(destino, z))
					{
						grupo6->quitar_carta(posicion);
					}
					break;
				}
				case 7:
				{
					Carta* z = &grupo7->obtener_carta(posicion);
					if (z->mostrar == true && mandar_carta(destino, z))
					{
						grupo7->quitar_carta(posicion);
					}
					break;
				}
				default:
				{
					//mensaje de grupo no valido
					break;
				}
			}
		
		}
		else
		{
			if (TXTORIGEN->Text=="Monton")
			{
					Carta* z = &monton->obtener_carta(posicion);
					if (mandar_carta(destino, z))
					{
						monton->quitar_carta(posicion);
					}
					else
					{
						//no se mueve mensaje 
					}
					
			}
			else
			{
					//no es origen valido 
			}
		}
			llenardata();
			//mensaje de gano 
			if (gano())
			{

			}
		}
		
	}
		   bool mandar_carta(int grupodestino, Carta *a) {
			   Carta *b = a;
			   switch (grupodestino)
			   {
			   case 1:
			   {
				   Carta* g = &grupo1->obtener_carta(grupo1->cantidad - 1);
				   if (b->numero == g->numero - 1 && b->color != g->color)
				   {
					   grupo1->agregar_carta(b->numero, b->color);
					   return true;
				   }
				   break;
			   }
			   case 2: {
				   Carta* g = &grupo2->obtener_carta(grupo2->cantidad - 1);
				   if (b->numero == g->numero - 1 && b->color != g->color)
				   {
					   grupo2->agregar_carta(b->numero, b->color);
					   return true;
				   }
				   break;
			   }
			   case 3: {
				   Carta* g = &grupo3->obtener_carta(grupo3->cantidad - 1);
				   if (b->numero == g->numero - 1 && b->color != g->color)
				   {
					   grupo3->agregar_carta(b->numero, b->color);
					   return true;
				   }
				   break;
			   }
			   case 4: {
				   Carta* g = &grupo4->obtener_carta(grupo4->cantidad - 1);
				   if (b->numero == g->numero - 1 && b->color != g->color)
				   {
					   grupo4->agregar_carta(b->numero, b->color);
					   return true;
				   }
				   break;
			   }
			   case 5: {
				   Carta* g = &grupo5->obtener_carta(grupo5->cantidad - 1);
				   if (b->numero == g->numero - 1 && b->color != g->color)
				   {
					   grupo5->agregar_carta(b->numero, b->color);
					   return true;
				   }
				   break;
			   }
			   case 6: {
				   Carta* g = &grupo6->obtener_carta(grupo6->cantidad - 1);
				   if (b->numero == g->numero - 1 && b->color != g->color)
				   {
					   grupo6->agregar_carta(b->numero, b->color);
					   return true;
				   }
				   break;
			   }
			   case 7: {
				   Carta* g = &grupo7->obtener_carta(grupo7->cantidad - 1);
				   if (b->numero == g->numero - 1 && b->color != g->color)
				   {
					   grupo7->agregar_carta(b->numero, b->color);
					   return true;
				   }
				   break;
			   }

			   }
			   return false;
		   }
		   bool gano() {
			   bool gano = true;
			   if (grupo1->cantidad==5)
			   {
				   Carta* e = grupo1->carta1;
				   while (e->siguiente!=nullptr)
				   {
					   if (e->mostrar==true&&e->numero==e->siguiente->numero-1)
					   {
						   e = e->siguiente;
					   }
					   else
					   {
						   gano = false;
					   }
				   }
			   }
			   else if (grupo2->cantidad == 5)
			   {
				   Carta* e = grupo2->carta1;
				   while (e->siguiente != nullptr)
				   {
					   if (e->mostrar == true && e->numero == e->siguiente->numero - 1)
					   {
						   e = e->siguiente;
					   }
					   else
					   {
						   gano = false;
					   }
				   }
			   }
			   else if (grupo3->cantidad == 5)
			   {
				   Carta* e = grupo3->carta1;
				   while (e->siguiente != nullptr)
				   {
					   if (e->mostrar == true && e->numero == e->siguiente->numero - 1)
					   {
						   e = e->siguiente;
					   }
					   else
					   {
						   gano = false;
					   }
				   }
			   }
			   else if (grupo4->cantidad == 5)
			   {
				   Carta* e = grupo4->carta1;
				   while (e->siguiente != nullptr)
				   {
					   if (e->mostrar == true && e->numero == e->siguiente->numero - 1)
					   {
						   e = e->siguiente;
					   }
					   else
					   {
						   gano = false;
					   }
				   }
			   }
			   else if (grupo5->cantidad == 5)
			   {
				   Carta* e = grupo5->carta1;
				   while (e->siguiente != nullptr)
				   {
					   if (e->mostrar == true && e->numero == e->siguiente->numero - 1)
					   {
						   e = e->siguiente;
					   }
					   else
					   {
						   gano = false;
					   }
				   }
			   }
			   else if (grupo6->cantidad == 5)
			   {
				   Carta* e = grupo6->carta1;
				   while (e->siguiente != nullptr)
				   {
					   if (e->mostrar == true && e->numero == e->siguiente->numero - 1)
					   {
						   e = e->siguiente;
					   }
					   else
					   {
						   gano = false;
					   }
				   }
			   }
			   else if (grupo7->cantidad == 5)
			   {
				   Carta* e = grupo7->carta1;
				   while (e->siguiente != nullptr)
				   {
					   if (e->mostrar == true && e->numero == e->siguiente->numero - 1)
					   {
						   e = e->siguiente;
					   }
					   else
					   {
						   gano = false;
					   }
				   }
			   }
			   else
				{
				gano = false;
				}
				return gano;
		   }

private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode==Keys::R)
	{
		grupo1->quitar_carta(0);
		grupo2->quitar_carta(0);
		grupo3->quitar_carta(0);
		grupo4->quitar_carta(0);
		grupo5->quitar_carta(0);
		grupo6->quitar_carta(0);
		grupo7->quitar_carta(0);
		repartir();
		llenardata();
	}
}
private: System::Void BTNCAMBIOM_Click(System::Object^ sender, System::EventArgs^ e) {
	if (posicionmonton<monton->cantidad)
	{
		Carta* f = &monton->obtener_carta(posicionmonton);
		String^ valor = Convert::ToString(f->color) + Convert::ToString(f->numero);
		LBLMONTON->Text = valor;
		posicionmonton++;
	}
	else
	{
		LBLMONTON->Text = "";
		posicionmonton = 0;
	}
}
};
}
