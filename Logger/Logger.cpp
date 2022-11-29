#include "framework.h"
#include "Logger.h"

Logger& Logger::getInstance() {
    static Logger instance_;
    return instance;
}
