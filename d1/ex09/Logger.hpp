#ifndef __LOGGER__H__
#define __LOGGER__H__
#include <string>
#include <iostream>
#include <fstream>

class Logger
{
private:
    std::ofstream* logfile;
    void logToConsole(std::string const str);
    void logToFile(std::string const str);
    std::string makeLogEntry(std::string const str);
public:
    Logger(std::string filename);
    ~Logger();
    void log(std::string const &dest, std::string const &message);
};

#endif  //!__LOGGER__H__