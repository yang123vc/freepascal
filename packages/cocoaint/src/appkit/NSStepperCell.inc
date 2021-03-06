{ Parsed from Appkit.framework NSStepperCell.h }

{$ifdef TYPES}
{$ifndef NSSTEPPERCELL_PAS_T}
{$define NSSTEPPERCELL_PAS_T}

{$endif}
{$endif}

{$ifdef RECORDS}
{$ifndef NSSTEPPERCELL_PAS_R}
{$define NSSTEPPERCELL_PAS_R}

{$endif}
{$endif}

{$ifdef FUNCTIONS}
{$ifndef NSSTEPPERCELL_PAS_F}
{$define NSSTEPPERCELL_PAS_F}

{$endif}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
{$ifndef NSSTEPPERCELL_PAS_S}
{$define NSSTEPPERCELL_PAS_S}

{$endif}
{$endif}

{$ifdef FORWARD}
  NSStepperCell = objcclass;
  NSStepperCellPointer = ^NSStepperCell;
  NSStepperCellPtr = NSStepperCellPointer;

{$endif}

{$ifdef CLASSES}
{$ifndef NSSTEPPERCELL_PAS_C}
{$define NSSTEPPERCELL_PAS_C}

{ NSStepperCell }
  NSStepperCell = objcclass external (NSActionCell)
  private
    _value: double;
    _minValue: double;
    _maxValue: double;
    _increment: double;
    __stFlags: record
      case byte of
       0: (_anonbitfield_NSStepperCell0: cuint);
       1: (data: bitpacked record
        _valueWraps: 0..1;
        _autorepeat: 0..1;
        drawing: 0..1;
        reserved: 0..((1 shl 29)-1);
       end;
      );
      end;
    _reserved1: cuint;
    _reserved2: cuint;
    _reserved3: cuint;
    _reserved4: cuint;
    
  public
    function minValue: double; message 'minValue';
    procedure setMinValue(minValue_: double); message 'setMinValue:';
    function maxValue: double; message 'maxValue';
    procedure setMaxValue(maxValue_: double); message 'setMaxValue:';
    function increment: double; message 'increment';
    procedure setIncrement(increment_: double); message 'setIncrement:';
    function valueWraps: BOOL; message 'valueWraps';
    procedure setValueWraps(valueWraps_: BOOL); message 'setValueWraps:';
    function autorepeat: BOOL; message 'autorepeat';
    procedure setAutorepeat(autorepeat_: BOOL); message 'setAutorepeat:';
  end;

{$endif}
{$endif}
