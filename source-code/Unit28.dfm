object Hidayar: THidayar
  Left = 266
  Top = 184
  BorderStyle = bsToolWindow
  Caption = 'Ayarlar'
  ClientHeight = 423
  ClientWidth = 290
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 103
    Height = 16
    Caption = 'Ya'#287#305#351' Y'#252'ksekli'#287'i'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clGray
    Font.Height = -13
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 32
    Width = 90
    Height = 14
    Caption = 'Ya'#287#305#351' Y'#252'k. (P):'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 88
    Width = 67
    Height = 14
    Caption = 'Zaman (t):'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 216
    Width = 111
    Height = 16
    Caption = 'Ya'#287#305#351' Hiyetograf'#305
    Font.Charset = TURKISH_CHARSET
    Font.Color = clGray
    Font.Height = -13
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 8
    Top = 240
    Width = 102
    Height = 14
    Caption = 'Ya'#287#305#351' '#350'iddeti (i):'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 8
    Top = 296
    Width = 67
    Height = 14
    Caption = 'Zaman (t):'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Label7: TLabel
    Left = 160
    Top = 32
    Width = 71
    Height = 14
    Caption = 'S'#305'kl'#305'k Ayar'#305':'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Label8: TLabel
    Left = 160
    Top = 240
    Width = 71
    Height = 14
    Caption = 'S'#305'kl'#305'k Ayar'#305':'
    Font.Charset = TURKISH_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Verdana'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 8
    Top = 56
    Width = 121
    Height = 21
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Text = '0'
  end
  object Edit2: TEdit
    Left = 8
    Top = 112
    Width = 121
    Height = 21
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Text = '0'
  end
  object Button1: TButton
    Left = 40
    Top = 176
    Width = 75
    Height = 25
    Caption = 'Ekle'
    TabOrder = 3
    OnClick = Button1Click
  end
  object ColorBox1: TColorBox
    Left = 8
    Top = 144
    Width = 145
    Height = 22
    Selected = clBlue
    ItemHeight = 16
    TabOrder = 2
  end
  object Edit3: TEdit
    Left = 8
    Top = 264
    Width = 121
    Height = 21
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    Text = '0'
  end
  object Edit4: TEdit
    Left = 8
    Top = 320
    Width = 121
    Height = 21
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    Text = '0'
  end
  object Button2: TButton
    Left = 40
    Top = 384
    Width = 75
    Height = 25
    Caption = 'Ekle'
    TabOrder = 9
    OnClick = Button2Click
  end
  object Edit5: TEdit
    Left = 160
    Top = 56
    Width = 121
    Height = 21
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MaxLength = 4
    ParentFont = False
    TabOrder = 4
    Text = '20'
  end
  object Button3: TButton
    Left = 184
    Top = 88
    Width = 75
    Height = 25
    Caption = 'Ayarla'
    TabOrder = 5
    OnClick = Button3Click
  end
  object ColorBox2: TColorBox
    Left = 8
    Top = 352
    Width = 145
    Height = 22
    Selected = clMoneyGreen
    ItemHeight = 16
    TabOrder = 8
  end
  object Edit6: TEdit
    Left = 160
    Top = 264
    Width = 121
    Height = 21
    Color = clMedGray
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MaxLength = 4
    ParentFont = False
    TabOrder = 10
    Text = '20'
  end
  object Button4: TButton
    Left = 184
    Top = 296
    Width = 75
    Height = 25
    Caption = 'Ayarla'
    TabOrder = 11
    OnClick = Button4Click
  end
end
