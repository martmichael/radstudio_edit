object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 420
  ClientWidth = 695
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object RichEdit1: TRichEdit
    Left = 0
    Top = 0
    Width = 695
    Height = 420
    Align = alClient
    BorderStyle = bsNone
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Zoom = 100
  end
  object MainMenu1: TMainMenu
    Left = 648
    Top = 16
    object File1: TMenuItem
      Caption = '&File'
      object Open1: TMenuItem
        Caption = '&Open'
        ShortCut = 16463
        OnClick = Open1Click
      end
      object Save1: TMenuItem
        Caption = '&Save as...'
        ShortCut = 16467
        OnClick = Save1Click
      end
      object Close1: TMenuItem
        Caption = '&Quit'
        ShortCut = 16465
        OnClick = Close1Click
      end
    end
    object Edit1: TMenuItem
      Caption = '&Edit'
      object Font1: TMenuItem
        Caption = '&Font'
        OnClick = Font1Click
      end
      object Clearall1: TMenuItem
        Caption = '&Clear all'
        OnClick = Clearall1Click
      end
      object Selectall1: TMenuItem
        Caption = '&Select all'
        ShortCut = 16449
        OnClick = Selectall1Click
      end
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 648
    Top = 64
    object Font2: TMenuItem
      Caption = 'Font'
    end
    object Clearall2: TMenuItem
      Caption = 'Clear all'
    end
    object Selectall2: TMenuItem
      Caption = 'Select all'
      ShortCut = 16449
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Text files|*.txt|System files|*.sys; *.dat; *.dll;|All files|*.*'
    Left = 584
    Top = 64
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Text files|*.txt|System files|*.sys; *.dat; *.dll|All files|*.*'
    Left = 584
    Top = 16
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    Left = 648
    Top = 112
  end
end
