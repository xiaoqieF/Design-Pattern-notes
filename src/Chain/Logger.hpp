//
// Created by fxd on 22-9-29.
//

#ifndef DESIGNPATTERNS_NOTES_LOGGER_HPP
#define DESIGNPATTERNS_NOTES_LOGGER_HPP

#include <memory>
#include <iostream>

namespace chain {
    enum class LoggerLevel {
        INFO,
        DEBUG,
        ERROR
    };

    class AbstractLogger {
    public:
        explicit AbstractLogger(LoggerLevel level) : level_(level) {}
        virtual ~AbstractLogger() = default;
        void setNextLogger(const std::shared_ptr<AbstractLogger>& nextLogger) {
            nextLogger_ = nextLogger;
        }
        void logMessage(LoggerLevel level, const std::string& message) {
            if (level_ <= level) {
                log(message);
            }
            if (nextLogger_) {
                nextLogger_->logMessage(level, message);
            }
        }
    protected:
        virtual void log(const std::string& message) = 0;

        LoggerLevel level_;
        std::shared_ptr<AbstractLogger> nextLogger_;
    };

    class ConsoleLogger : public AbstractLogger {
    public:
        explicit ConsoleLogger(LoggerLevel level) : AbstractLogger(level) { }

        void log(const std::string &message) override {
            std::cout << "Console log:" << message << std::endl;
        }
    };

    class ErrorLogger: public AbstractLogger {
    public:
        explicit ErrorLogger(LoggerLevel level) : AbstractLogger(level) { }

        void log(const std::string &message) override {
            std::cout << "Error log:" << message << std::endl;
        }
    };

    class FileLogger: public AbstractLogger {
    public:
        explicit FileLogger(LoggerLevel level) : AbstractLogger(level) { }

        void log(const std::string &message) override {
            std::cout << "File log:" << message << std::endl;
        }
    };

}

#endif //DESIGNPATTERNS_NOTES_LOGGER_HPP
