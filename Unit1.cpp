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
//main menu button executes open dialog appearance
//and adds opened file's dir to statusbar
void __fastcall TForm1::Open1Click(TObject *Sender)
{
	if (OpenDialog1->Execute() )
	RichEdit1->Lines->LoadFromFile (OpenDialog1->FileName) ;
	StatusBar1->Panels->Items[7]->Text = "File directory: " + OpenDialog1->FileName;
}
//---------------------------------------------------------------------------
//main menu button executes save dialog appearance
void __fastcall TForm1::Save1Click(TObject *Sender)
{
	if (SaveDialog1->Execute() )
	RichEdit1->Lines-> SaveToFile (SaveDialog1->FileName) ;
}
//---------------------------------------------------------------------------
//Main menu button closes the programm
void __fastcall TForm1::Close1Click(TObject *Sender)
{
	Form1->Close();
}
//---------------------------------------------------------------------------
//main menu and popup menu executes font dialog appearance
void __fastcall TForm1::Font1Click(TObject *Sender)
{
	if (FontDialog1->Execute() )
	RichEdit1-> Font=FontDialog1-> Font;
}
//---------------------------------------------------------------------------
//Main menu an popup menu button executes cleanse
void __fastcall TForm1::Clearall1Click(TObject *Sender)
{
	RichEdit1->Clear();
}
//---------------------------------------------------------------------------
//Mainmenu and popup menu button executes selection of the whole text
void __fastcall TForm1::Selectall1Click(TObject *Sender)
{
	RichEdit1->SelectAll();
}
//---------------------------------------------------------------------------
//Mainmenu button executes search
void __fastcall TForm1::Findtext1Click(TObject *Sender)
{
	FindDialog1->Execute();

}
//---------------------------------------------------------------------------
//Code for adding statusbar values
void __fastcall TForm1::RichEdit1SelectionChange(TObject *Sender)
{
	int LNumber = 0;
	LNumber = SendMessage(RichEdit1->Handle, EM_LINEFROMCHAR, -1, 0);

	StatusBar1->Panels->Items[1]->Text = RichEdit1->SelStart;
	StatusBar1->Panels->Items[2]->Text = LNumber;
	StatusBar1->Panels->Items[4]->Text = RichEdit1->SelLength;
	StatusBar1->Panels->Items[6]->Text = RichEdit1->Lines->Count;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FindDialog1Find(TObject *Sender)
{
int FoundAt, StartPos, ToEnd;
  TSearchTypes mySearchTypes = TSearchTypes();
  // begin the search after the current selection
  // if there is one
  // otherwise, begin at the start of the text
  if (FindDialog1->Options.Contains(frMatchCase))
    mySearchTypes << stMatchCase;
  if (FindDialog1->Options.Contains(frWholeWord))
    mySearchTypes << stWholeWord;
  if (RichEdit1->SelLength)
    StartPos = RichEdit1->SelStart + RichEdit1->SelLength;
  else
    StartPos = 0;
  // ToEnd is the length from StartPos
  // to the end of the text in the rich edit control
  ToEnd = RichEdit1->Text.Length() - StartPos;
  FoundAt = RichEdit1->FindText(FindDialog1->FindText, StartPos, ToEnd, mySearchTypes);
  if (FoundAt != -1)
  {
    RichEdit1->SetFocus();
    RichEdit1->SelStart = FoundAt;
    RichEdit1->SelLength = FindDialog1->FindText.Length();
  }
  else Beep();
}
//---------------------------------------------------------------------------

