//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit21.h"
#include "stdio.h"
#include "string.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSatis *Satis;
struct Yapis
{
char Ad[20];
char Soyad[20];
char Musteri[10];
char Hesap[10];
char Kayit[10];
char Kayityapan[20];
char Gorevi[20];
char Birimi[20];
char Dogum[10];
char Dogumyer[20];
char Meslek[20];
char Sektor[20];
char Ev[100];
char Evtel[20];
char is[100];
char istel[20];
char Ceptel[20];
char email[20];
char Odeme[400];
char SayfaNo[10];
};
struct Yapis Adres_kaydis;
FILE *Dosyas;
//---------------------------------------------------------------------------
__fastcall TSatis::TSatis(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSatis::FormCreate(TObject *Sender)
{
int Tus;
    if ((Dosyas = fopen("Data\\Musteri.prjb", "r+b"))== NULL)
    {
     ShowMessage("Data klas�r�nde dosya bulunamad�.");
     Tus = Application->MessageBoxA("Musteri.prjb adl� dosya haz�rlans�n m�?",
     "Dosya Haz�rlama Onay�", 3);
     if( Tus == 6)
         Dosyas = fopen("Data\\Musteri.prjb", "w+t");
         }
}
//---------------------------------------------------------------------------

void __fastcall TSatis::ToolButton1Click(TObject *Sender)
{
strcpy(Adres_kaydis.Ad, Edit1->Text.c_str());
strcpy(Adres_kaydis.Soyad, Edit2->Text.c_str());
strcpy(Adres_kaydis.Musteri, Edit3->Text.c_str());
strcpy(Adres_kaydis.Hesap, Edit4->Text.c_str());
strcpy(Adres_kaydis.Kayit, Edit5->Text.c_str());
strcpy(Adres_kaydis.Kayityapan, Edit6->Text.c_str());
strcpy(Adres_kaydis.Gorevi, Edit7->Text.c_str());
strcpy(Adres_kaydis.Birimi, Edit8->Text.c_str());
strcpy(Adres_kaydis.Dogum, Edit9->Text.c_str());
strcpy(Adres_kaydis.Dogumyer, Edit10->Text.c_str());
strcpy(Adres_kaydis.Meslek, Edit11->Text.c_str());
strcpy(Adres_kaydis.Sektor, Edit12->Text.c_str());
strcpy(Adres_kaydis.Ev, Memo2->Text.c_str());
strcpy(Adres_kaydis.Evtel, Edit13->Text.c_str());
strcpy(Adres_kaydis.is, Memo3->Text.c_str());
strcpy(Adres_kaydis.istel, Edit14->Text.c_str());
strcpy(Adres_kaydis.Ceptel, Edit15->Text.c_str());
strcpy(Adres_kaydis.email, Edit16->Text.c_str());
strcpy(Adres_kaydis.Odeme, Memo1->Text.c_str());
strcpy(Adres_kaydis.SayfaNo, Edit17->Text.c_str());

if (MessageDlg("Bilgiler Kaydedilsin mi?",
              mtConfirmation, TMsgDlgButtons()
              <<mbYes<<mbNo, 0) == mrYes)
{
  fseek(Dosyas, 0, SEEK_END);
  fwrite(&Adres_kaydis, sizeof(Yapis), 1, Dosyas);
  }
        Edit1->Text = "";
        Edit2->Text = "";
        Edit3->Text = "";
        Edit4->Text = "";
        Edit5->Text = "";
        Edit6->Text = "";
        Edit7->Text = "";
        Edit8->Text = "";
        Edit9->Text = "";
        Edit10->Text = "";
        Edit11->Text = "";
        Edit12->Text = "";
        Edit13->Text = "";
        Edit14->Text = "";
        Edit15->Text = "";
        Edit16->Text = "";
        Edit17->Text = "No:";
        Memo1->Text = "";
        Memo2->Text = "";
        Memo3->Text = "";
}
//---------------------------------------------------------------------------
