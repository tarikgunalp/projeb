//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit34.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTGinfo *TGinfo;
//---------------------------------------------------------------------------
__fastcall TTGinfo::TTGinfo(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTGinfo::Image1Click(TObject *Sender)
{
Close();         
}
//---------------------------------------------------------------------------
