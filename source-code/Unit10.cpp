//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit10.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm10::Image2Click(TObject *Sender)
{
ShellExecute(0, "Open", "Paint\\Drawing1.dwg", NULL, NULL, SW_SHOW);
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Image3Click(TObject *Sender)
{
ShellExecute(0, "Open", "Paint\\Untitled.max", NULL, NULL, SW_SHOW);
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Image4Click(TObject *Sender)
{
ShellExecute(0, "Open", "Paint\\Untitled-1.psd", NULL, NULL, SW_SHOW);
}
//---------------------------------------------------------------------------
