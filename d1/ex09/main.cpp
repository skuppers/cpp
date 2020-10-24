#include "Logger.hpp"

int main(void)
{
    Logger logger = Logger("file.log");
    logger.log("console", "Programm startup");
    logger.log("file", "Program started.");
    logger.log("file", "Logger is online.");
    return 0;
}