//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Buttons.hpp>
#include <Graphics.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
//---------------------------------------------------------------------------
class TBirey : public TForm
{
__published:	// IDE-managed Components
        TToolBar *ToolBar1;
        TToolButton *ToolButton1;
        TImageList *ImageList1;
        TToolButton *ToolButton2;
        TImage *Image1;
        TBitBtn *BitBtn1;
        TImage *Image2;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn4;
        TBitBtn *BitBtn5;
        TBitBtn *BitBtn6;
        TBitBtn *BitBtn7;
        TMainMenu *MainMenu1;
        TMenuItem *Dosya1;
        TOpenPictureDialog *OpenPictureDialog1;
        TToolButton *ToolButton3;
        TToolButton *ToolButton4;
        TToolButton *ToolButton5;
        TSavePictureDialog *SavePictureDialog1;
        TMenuItem *Kaydet1;
        TMenuItem *FarklKaydet1;
        TMenuItem *YeniProje1;
        TMenuItem *Birey1;
        TMenuItem *MetrajCetveli1;
        TMenuItem *izimEditr1;
        TMenuItem *Betonarme1;
        TMenuItem *Karayolu1;
        TMenuItem *Hidroloji1;
        TMenuItem *N1;
        TMenuItem *LogoBelirle1;
        TMenuItem *N2;
        TMenuItem *OfficeExpress1;
        TMenuItem *Xlime1;
        TMenuItem *Paint1;
        TMenuItem *N3;
        TMenuItem *Programdank1;
        TMenuItem *Grnm1;
        TMenuItem *Klt1;
        TMenuItem *Ynetim1;
        TMenuItem *Veriler1;
        TMenuItem *Aralar1;
        TMenuItem *Pencere1;
        TMenuItem *Yardm1;
        TMenuItem *PersonelKaytKart1;
        TMenuItem *KaynakKaytKart1;
        TMenuItem *MteriKaytGirii1;
        TMenuItem *PersonelTantmKart1;
        TMenuItem *KaynakKart1;
        TMenuItem *KaytlMteri1;
        TMenuItem *N4;
        TMenuItem *KaytlMetrajBilgileri1;
        TMenuItem *N5;
        TMenuItem *KaytlBetonarmeBilgileri1;
        TMenuItem *ConvertB1;
        TMenuItem *ListB1;
        TMenuItem *Yanyana1;
        TMenuItem *Altalta1;
        TMenuItem *Grupla1;
        TMenuItem *KullanmKlavuzu1;
        TMenuItem *TG1;
        TMenuItem *ProjeBHakknda1;
        TMenuItem *SrmBilgileri1;
        TMenuItem *N6;
        TMenuItem *Kapat1;
        TMenuItem *N7;
        TMenuItem *YazcAyarlar1;
        TPrinterSetupDialog *PrinterSetupDialog1;
        void __fastcall ToolButton1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall ToolButton4Click(TObject *Sender);
        void __fastcall ToolButton3Click(TObject *Sender);
        void __fastcall Kaydet1Click(TObject *Sender);
        void __fastcall FarklKaydet1Click(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall BitBtn4Click(TObject *Sender);
        void __fastcall BitBtn5Click(TObject *Sender);
        void __fastcall BitBtn6Click(TObject *Sender);
        void __fastcall BitBtn7Click(TObject *Sender);
        void __fastcall Birey1Click(TObject *Sender);
        void __fastcall LogoBelirle1Click(TObject *Sender);
        void __fastcall MetrajCetveli1Click(TObject *Sender);
        void __fastcall izimEditr1Click(TObject *Sender);
        void __fastcall Betonarme1Click(TObject *Sender);
        void __fastcall Karayolu1Click(TObject *Sender);
        void __fastcall Hidroloji1Click(TObject *Sender);
        void __fastcall OfficeExpress1Click(TObject *Sender);
        void __fastcall Xlime1Click(TObject *Sender);
        void __fastcall Paint1Click(TObject *Sender);
        void __fastcall Programdank1Click(TObject *Sender);
        void __fastcall Klt1Click(TObject *Sender);
        void __fastcall PersonelKaytKart1Click(TObject *Sender);
        void __fastcall KaynakKaytKart1Click(TObject *Sender);
        void __fastcall MteriKaytGirii1Click(TObject *Sender);
        void __fastcall PersonelTantmKart1Click(TObject *Sender);
        void __fastcall KaynakKart1Click(TObject *Sender);
        void __fastcall KaytlMteri1Click(TObject *Sender);
        void __fastcall KaytlMetrajBilgileri1Click(TObject *Sender);
        void __fastcall KaytlBetonarmeBilgileri1Click(TObject *Sender);
        void __fastcall ConvertB1Click(TObject *Sender);
        void __fastcall ListB1Click(TObject *Sender);
        void __fastcall Yanyana1Click(TObject *Sender);
        void __fastcall Altalta1Click(TObject *Sender);
        void __fastcall Grupla1Click(TObject *Sender);
        void __fastcall KullanmKlavuzu1Click(TObject *Sender);
        void __fastcall TG1Click(TObject *Sender);
        void __fastcall ProjeBHakknda1Click(TObject *Sender);
        void __fastcall SrmBilgileri1Click(TObject *Sender);
        void __fastcall Kapat1Click(TObject *Sender);
        void __fastcall YazcAyarlar1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TBirey(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBirey *Birey;
//---------------------------------------------------------------------------
#endif
