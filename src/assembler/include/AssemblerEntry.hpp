#ifndef ASSEMBLER_ENTRY_H
#define ASSEMBLER_ENTRY_H

#include <QIODevice>
#include <QDataStream>
#include <QVector>

namespace xul::assembler
{
    class AssemblerEntry
    {
        public:
        AssemblerEntry(int argc, char *argv[]){
            
        }
        ~AssemblerEntry();

        int exec();
    };
}

#endif // ASSEMBLER_ENTRY_H
