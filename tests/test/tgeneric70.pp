{ %NORUN }

{ This tests that one can use a specialization of another generic which was
  introduced in the currently parsed generic can be used as a parameter type
  in a procedure variable introduced in the current generic as well }
program tgeneric70;

{$mode delphi}

type
  TSomeGeneric<T> = class

  end;

  TSomeOtherGeneric<T> = class
  type
    TSomeProc = procedure(aParam: TSomeGeneric<T>);
  end;

begin

end.
