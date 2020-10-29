#include "Logger.hpp"
#include <ctime>
#include <chrono>
#include <sstream>

Logger::Logger(std::string filename)
{
    std::ofstream* outFile = new std::ofstream(filename);
    if (outFile->fail())
    {
        std::cout << "Error creating logfile!" << std::endl;
        exit(1);
    }
    this->logfile = outFile;
}

Logger::~Logger()
{
    if (this->logfile->is_open())
        this->logfile->close();
}

std::string Logger::makeLogEntry(std::string const str)
{
    std::ostringstream entry;

    time_t now = time(0);
    tm *ltm = localtime(&now);

    entry << "[" << ltm->tm_mday << "/";
    entry << 1 + ltm->tm_mon << "] ";
    entry << "[ " << 5+ltm->tm_hour << ":" << 30+ltm->tm_min << ":" << ltm->tm_sec << " ] - ";
    entry << str;
    return entry.str();
}

void Logger::logToConsole(std::string const str)
{
    std::cout << Logger::makeLogEntry(str) << std::endl;
}

void Logger::logToFile(std::string const str)
{
   *this->logfile << Logger::makeLogEntry(str) << std::endl;
}

void Logger::log(std::string const &dest, std::string const &msg)
{
    if (dest.compare("file") == 0)
        this->logToFile(msg);
    else
        this->logToConsole(msg);
}