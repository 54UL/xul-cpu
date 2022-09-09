# XU16 Assembler spec.



# Assembler Directives

DIRECTIVE  | DESCRIPTION
-----------|-----------------------------------------------------------------|
ARCH       | Architecture working on
VAR_16     | Reserves space in ram to allocate an value
CONST      | Defines a numerical constant in the assembler context
ALIGN      | Aligns output to the specified boundary.
STACKDEPTH | Indicates the call stack depth remaining.
DB         | Defines constant byte(s).
DW         | Defines constant word(s).
IF         | Conditional assembly.
ELSE       | Alternates conditional assembly.
ELSIF      | Alternates conditional assembly.
ENDIF      | Ends conditional assembly.
END        | Ends assembly.
ENDM       | Ends macro definition.
INCLUDE    | Textually includes the content of the specified file.
MACRO      | Macro definition
ORG        | Sets location counter within current psect