{ %opt=-gh }

{$ifdef go32v2}
  {$define USE_INTERNAL_UNICODE}
{$endif}

{$ifdef USE_INTERNAL_UNICODE}
  {$define USE_FPWIDESTRING_UNIT}
  {$define USE_UNICODEDUCET_UNIT}
  {$define USE_CPALL_UNIT}
{$endif}

program tw19701;
{$ifdef FPC}{$mode objfpc}{$h+}{$endif}
{$ifdef mswindows}{$apptype console}{$endif}
uses
 {$ifdef FPC}
  {$ifdef linux}
   cthreads,
  {$endif}
 {$endif}
 {$ifndef USE_INTERNAL_UNICODE}
  {$ifdef unix}
   {$ifdef darwin}iosxwstr{$else}cwstring{$endif},
  {$endif unix}
 {$endif ndef USE_INTERNAL_UNICODE}
 {$ifdef USE_UNICODEDUCET_UNIT}
  unicodeducet,
 {$endif}
 {$ifdef USE_FPWIDESTRING_UNIT}
  fpwidestring,
 {$endif}
 {$ifdef USE_CPALL_UNIT}
  cpall,
 {$endif}
 sysutils,uw19701;
begin
  HaltOnNotReleased:=True;
end.
