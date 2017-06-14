//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Open1Click(TObject *Sender)
{
	if (OpenDialog1->Execute() )
	RichEdit1->Lines->LoadFromFile (OpenDialog1->FileName) ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Save1Click(TObject *Sender)
{
	if (SaveDialog1->Execute() )
	RichEdit1->Lines-> SaveToFile (SaveDialog1->FileName) ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Close1Click(TObject *Sender)
{
	Form1->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Font1Click(TObject *Sender)
{
	if (FontDialog1->Execute() )
	RichEdit1-> Font=FontDialog1-> Font;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Clearall1Click(TObject *Sender)
{
	RichEdit1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Selectall1Click(TObject *Sender)
{
	RichEdit1->SelectAll();
}
//---------------------------------------------------------------------------
