//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit33.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TProduct *Product;
//---------------------------------------------------------------------------
__fastcall TProduct::TProduct(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------