#pragma once
#include <string>

class Logger {
public:
	static Logger& getInstance();
	bool log(std::string message);

	// To avoid accidental copying the singleton instances:
	Logger(const Logger&) = delete;
	void operator=(const Logger&) = delete;

private:
	//Logger(std::string serverName, std::string appName, std::string externalServerIPAddress,
		//std::string externalServerPortNumber);
	Logger();
	void printLogEntry(std::string message);
	bool send(std::string message);

	std::string serverName_;
	std::string appName_;
	std::string externalServerIPAddress_;
	std::string externalServerPortNumber_;

};

