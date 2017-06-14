//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TRichEdit *RichEdit1;
	TMainMenu *MainMenu1;
	TMenuItem *File1;
	TMenuItem *Edit1;
	TMenuItem *Open1;
	TMenuItem *Save1;
	TMenuItem *Close1;
	TMenuItem *Font1;
	TMenuItem *Clearall1;
	TMenuItem *Selectall1;
	TPopupMenu *PopupMenu1;
	TMenuItem *Font2;
	TMenuItem *Clearall2;
	TOpenDialog *OpenDialog1;
	TSaveDialog *SaveDialog1;
	TFontDialog *FontDialog1;
	TMenuItem *Selectall2;
	TFindDialog *FindDialog1;
	TMenuItem *Findtext1;
	TStatusBar *StatusBar1;
	void __fastcall Open1Click(TObject *Sender);
	void __fastcall Save1Click(TObject *Sender);
	void __fastcall Close1Click(TObject *Sender);
	void __fastcall Font1Click(TObject *Sender);
	void __fastcall Clearall1Click(TObject *Sender);
	void __fastcall Selectall1Click(TObject *Sender);
	void __fastcall Findtext1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
