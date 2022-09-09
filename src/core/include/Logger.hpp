#ifndef LOGGER_H
#define LOGGER_H
#include <string>
#include <iostream>

namespace xul::core
{

    class Logger
    {
        public:
        
        enum class LogType : int {normal, warning, error};
        
        Logger()
        {

        }

        ~Logger()
        {

        }

        static void log(LogType type, std::string log)
        {
            std::cout<<log<<std::endl;
        }
    };
}

#endif // ASSEMBLER_ENTRY_H
