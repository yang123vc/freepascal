{ Parsed from Appkit.framework NSText.h }

{$ifdef TYPES}
{$ifndef NSTEXT_PAS_T}
{$define NSTEXT_PAS_T}

{ Constants }

const
  NSEnterCharacter = $0003;
  NSBackspaceCharacter = $0008;
  NSTabCharacter = $0009;
  NSNewlineCharacter = $000a;
  NSFormFeedCharacter = $000c;
  NSCarriageReturnCharacter = $000d;
  NSBackTabCharacter = $0019;
  NSDeleteCharacter = $007f;
  NSLineSeparatorCharacter = $2028;
  NSParagraphSeparatorCharacter = $2029;

const
  NSLeftTextAlignment = 0;
  NSRightTextAlignment = 1;
  NSCenterTextAlignment = 2;
  NSJustifiedTextAlignment = 3;
  NSNaturalTextAlignment = 4;

const
  NSWritingDirectionNatural = -1;
  NSWritingDirectionLeftToRight = 0;
  NSWritingDirectionRightToLeft = 1;

const
  NSTextWritingDirectionEmbedding = 0 shl 1;
  NSTextWritingDirectionOverride = 1 shl 1;

const
  NSIllegalTextMovement = 0;
  NSReturnTextMovement = $10;
  NSTabTextMovement = $11;
  NSBacktabTextMovement = $12;
  NSLeftTextMovement = $13;
  NSRightTextMovement = $14;
  NSUpTextMovement = $15;
  NSDownTextMovement = $16;
  NSCancelTextMovement = $17;
  NSOtherTextMovement = 0;

{ Types }
type
  NSTextAlignment = NSUInteger;
  NSTextAlignmentPtr = ^NSTextAlignment;
  NSWritingDirection = NSInteger;
  NSWritingDirectionPtr = ^NSWritingDirection;

{$endif}
{$endif}

{$ifdef RECORDS}
{$ifndef NSTEXT_PAS_R}
{$define NSTEXT_PAS_R}

{$endif}
{$endif}

{$ifdef FUNCTIONS}
{$ifndef NSTEXT_PAS_F}
{$define NSTEXT_PAS_F}

{$endif}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
{$ifndef NSTEXT_PAS_S}
{$define NSTEXT_PAS_S}

{ External string constants }
var
  NSTextDidBeginEditingNotification: NSString; cvar; external;
  NSTextDidEndEditingNotification: NSString; cvar; external;
  NSTextDidChangeNotification: NSString; cvar; external;

{$endif}
{$endif}

{$ifdef FORWARD}
  NSTextDelegateProtocol = objcprotocol;
  NSText = objcclass;
  NSTextPointer = ^NSText;
  NSTextPtr = NSTextPointer;

{$endif}

{$ifdef CLASSES}
{$ifndef NSTEXT_PAS_C}
{$define NSTEXT_PAS_C}

{ NSText }
  NSText = objcclass external (NSView, NSChangeSpellingProtocol, NSIgnoreMisspelledWordsProtocol)
  private
    _ivars: id;
    
  public
    function string_: NSString; message 'string';
    procedure setString(string__: NSString); message 'setString:';
    procedure replaceCharactersInRange_withString(range: NSRange; aString: NSString); message 'replaceCharactersInRange:withString:';
    procedure replaceCharactersInRange_withRTF(range: NSRange; rtfData: NSData); message 'replaceCharactersInRange:withRTF:';
    procedure replaceCharactersInRange_withRTFD(range: NSRange; rtfdData: NSData); message 'replaceCharactersInRange:withRTFD:';
    function RTFFromRange(range: NSRange): NSData; message 'RTFFromRange:';
    function RTFDFromRange(range: NSRange): NSData; message 'RTFDFromRange:';
    function writeRTFDToFile_atomically(path: NSString; flag: BOOL): BOOL; message 'writeRTFDToFile:atomically:';
    function readRTFDFromFile(path: NSString): BOOL; message 'readRTFDFromFile:';
    function delegate: NSTextDelegateProtocol; message 'delegate';
    procedure setDelegate(anObject: NSTextDelegateProtocol); message 'setDelegate:';
    function isEditable: BOOL; message 'isEditable';
    procedure setEditable(flag: BOOL); message 'setEditable:';
    function isSelectable: BOOL; message 'isSelectable';
    procedure setSelectable(flag: BOOL); message 'setSelectable:';
    function isRichText: BOOL; message 'isRichText';
    procedure setRichText(flag: BOOL); message 'setRichText:';
    function importsGraphics: BOOL; message 'importsGraphics';
    procedure setImportsGraphics(flag: BOOL); message 'setImportsGraphics:';
    function isFieldEditor: BOOL; message 'isFieldEditor';
    procedure setFieldEditor(flag: BOOL); message 'setFieldEditor:';
    function usesFontPanel: BOOL; message 'usesFontPanel';
    procedure setUsesFontPanel(flag: BOOL); message 'setUsesFontPanel:';
    function drawsBackground: BOOL; message 'drawsBackground';
    procedure setDrawsBackground(flag: BOOL); message 'setDrawsBackground:';
    function backgroundColor: NSColor; message 'backgroundColor';
    procedure setBackgroundColor(color: NSColor); message 'setBackgroundColor:';
    function isRulerVisible: BOOL; message 'isRulerVisible';
    function selectedRange: NSRange; message 'selectedRange';
    procedure setSelectedRange(range: NSRange); message 'setSelectedRange:';
    procedure scrollRangeToVisible(range: NSRange); message 'scrollRangeToVisible:';
    procedure setFont(obj: NSFont); message 'setFont:';
    function font: NSFont; message 'font';
    procedure setTextColor(color: NSColor); message 'setTextColor:';
    function textColor: NSColor; message 'textColor';
    function alignment: NSTextAlignment; message 'alignment';
    procedure setAlignment(mode: NSTextAlignment); message 'setAlignment:';
    function baseWritingDirection: NSWritingDirection; message 'baseWritingDirection';
    procedure setBaseWritingDirection(writingDirection: NSWritingDirection); message 'setBaseWritingDirection:';
    procedure setTextColor_range(color: NSColor; range: NSRange); message 'setTextColor:range:';
    procedure setFont_range(font_: NSFont; range: NSRange); message 'setFont:range:';
    function maxSize: NSSize; message 'maxSize';
    procedure setMaxSize(newMaxSize: NSSize); message 'setMaxSize:';
    function minSize: NSSize; message 'minSize';
    procedure setMinSize(newMinSize: NSSize); message 'setMinSize:';
    function isHorizontallyResizable: BOOL; message 'isHorizontallyResizable';
    procedure setHorizontallyResizable(flag: BOOL); message 'setHorizontallyResizable:';
    function isVerticallyResizable: BOOL; message 'isVerticallyResizable';
    procedure setVerticallyResizable(flag: BOOL); message 'setVerticallyResizable:';
    procedure sizeToFit; message 'sizeToFit';
    procedure copy_(sender: id); message 'copy:';
    procedure copyFont(sender: id); message 'copyFont:';
    procedure copyRuler(sender: id); message 'copyRuler:';
    procedure cut(sender: id); message 'cut:';
    procedure delete(sender: id); message 'delete:';
    procedure paste(sender: id); message 'paste:';
    procedure pasteFont(sender: id); message 'pasteFont:';
    procedure pasteRuler(sender: id); message 'pasteRuler:';
    procedure selectAll(sender: id); message 'selectAll:';
    procedure changeFont(sender: id); message 'changeFont:';
    procedure alignLeft(sender: id); message 'alignLeft:';
    procedure alignRight(sender: id); message 'alignRight:';
    procedure alignCenter(sender: id); message 'alignCenter:';
    procedure subscript(sender: id); message 'subscript:';
    procedure superscript(sender: id); message 'superscript:';
    procedure underline(sender: id); message 'underline:';
    procedure unscript(sender: id); message 'unscript:';
    procedure showGuessPanel(sender: id); message 'showGuessPanel:';
    procedure checkSpelling(sender: id); message 'checkSpelling:';
    procedure toggleRuler(sender: id); message 'toggleRuler:';

    { Adopted Protocols }
    procedure changeSpelling(sender: id);
    procedure ignoreSpelling(sender: id);
  end;

{$endif}
{$endif}
{$ifdef PROTOCOLS}
{$ifndef NSTEXT_PAS_P}
{$define NSTEXT_PAS_P}
  
{ NSTextDelegate Protocol }
  NSTextDelegateProtocol = objcprotocol external name 'NSTextDelegate'
  optional
    function textShouldBeginEditing(textObject: NSText): BOOL; message 'textShouldBeginEditing:';
    function textShouldEndEditing(textObject: NSText): BOOL; message 'textShouldEndEditing:';
    procedure textDidBeginEditing(notification: NSNotification); message 'textDidBeginEditing:';
    procedure textDidEndEditing(notification: NSNotification); message 'textDidEndEditing:';
    procedure textDidChange(notification: NSNotification); message 'textDidChange:';
  end;
{$endif}
{$endif}
