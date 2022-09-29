//
// Created by fxd on 22-9-29.
//
#include "Logger.hpp"

using namespace chain;

std::shared_ptr<AbstractLogger> getChainOfLoggers() {
    std::shared_ptr<AbstractLogger> errorLogger = std::make_shared<ErrorLogger>(LoggerLevel::ERROR);
    std::shared_ptr<AbstractLogger> fileLogger = std::make_shared<FileLogger>(LoggerLevel::DEBUG);
    std::shared_ptr<AbstractLogger> consoleLogger = std::make_shared<ConsoleLogger>(LoggerLevel::INFO);
    errorLogger->setNextLogger(fileLogger);
    fileLogger->setNextLogger(consoleLogger);
    return errorLogger;
}


int main() {
    auto loggerChain = getChainOfLoggers();
    loggerChain->logMessage(LoggerLevel::INFO, "some message");
    loggerChain->logMessage(LoggerLevel::DEBUG, "debug message");
    loggerChain->logMessage(LoggerLevel::ERROR, "error message");
}