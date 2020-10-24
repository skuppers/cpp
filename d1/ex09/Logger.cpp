#include "Logger.hpp"
#include <ctime>
#include <chrono>
#include <sstream>

Logger::Logger(std::string filename)
{
    std::ofstream outFile(filename);
    if (outFile.fail())
    {
        std::cout << "Error creating logfile!" << std::endl;
        exit(1);
    }
    this->logfile = &outFile;
}

Logger::~Logger()
{
    this->logfile->close();
}

std::string Logger::makeLogEntry(std::string const str)
{
    std::ostringstream entry;

    auto time = std::chrono::system_clock::now();
    std::time_t tt = std::chrono::system_clock::to_time_t(time);
    entry << "[" << std::ctime(&tt) << "] - " << str;
    return entry.str();
}

void Logger::logToConsole(std::string const str)
{
    std::cout << Logger::makeLogEntry(str) << std::endl;
}

void Logger::logToFile(std::string const str)
{
    *(this->logfile) << Logger::makeLogEntry(str) << std::endl;
}

void Logger::log(std::string const &dest, std::string const &msg)
{
    void (Logger::*logfunc[2])(std::string const) {
        &Logger::logToConsole,
        &Logger::logToFile
    };
    if (dest.compare("file") == 0)
        this->logToFile(msg);
    else
        this->logToConsole(msg);
}