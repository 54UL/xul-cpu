#include <QApplication>
#include <QQmlApplicationEngine>
#include "AssemblerEntry.hpp"

int main(int argc, char *argv[])
{
    AssemblerEntry asmEntry(argc, argv);
    return asmEntry.exec();
}
