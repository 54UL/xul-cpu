
4.9 Assembler Directives
Assembler directives, or pseudo-ops, are used in a similar way to instruction mnemonics. With the exception of
PAGESEL and BANKSEL, these directives do not generate instructions. The DB, DW and DDW directives place data
bytes into the current psect. The directives are listed in the following sections.
Table 4-6. Assembler Directives
Directive Purpose

ARCH                                   Architecture working on
ALIGN                                  Aligns output to the specified boundary.
ASMOPT                                 Controls whether subsequent code is optimized by the assembler.
BANKSEL                                Generates code to select bank of operand.
CALLSTACK                              Indicates the call stack depth remaining.
[NO]COND                               Controls inclusion of conditional code in the listing file.
CONFIG                                 Specifies configuration bits.
DB                                     Defines constant byte(s).
DW                                     Defines constant word(s).
DS                                     Reserves storage.
DABS                                   Defines absolute storage.
DLABS                                  Define linear-memory absolute storage.
DDW                                    Defines double-width constant word(s).
ELSE                                   Alternates conditional assembly.
ELSIF                                  Alternates conditional assembly.
ENDIF                                  Ends conditional assembly.
END                                    Ends assembly.
ENDM                                   Ends macro definition.
EQU                                    Defines symbol value.
ERROR                                  Generates a user-defined error.
[NO]EXPAND                             Controls expansion of assembler macros in the listing file.
EXTRN                                  Links with global symbols defined in other modules.
FNADDR                                 Indicates a routine's address has been taken.
INCLUDE                                Textually includes the content of the specified file.
MACRO                                  Macro definition
ORG                                    Sets location counter within current psect