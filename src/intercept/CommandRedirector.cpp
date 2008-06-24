#include <psconfig.h>

//#include <iostream>

#include <stdio.h>

#include<util/strutil.h>

#include "CommandRedirector.h"

CommandRedirector::CommandRedirector()
{
}

CommandRedirector::~CommandRedirector()
{
}

void CommandRedirector::redirect(const char* cmd)
{
	WordArray words(cmd);
	csString commandString = words[0];

	const char* cmdType = getCommandType(cmd);

	printf("Command Redirector received command: %s. Type Identified as: ", commandString.GetDataSafe(), cmdType);
	//std::cout << "Command Redirector Received Command: " << commandString.GetDataSafe() << " Type Identified as: " << cmdType;
}

const char* CommandRedirector::getCommandType(const char* cmd)
{
	char* command;

	// Get first word of line if there is a space, or get entire line if one word
	const char *space = strchr(cmd, ' ');
	if (space)
	{
		int len = space - cmd;
		if (len > 99)
		{
			len = 99;
		}
		strncpy(command, cmd, len);
		command[len] = 0;
	}
	else
	{
		strncpy(command, cmd, 100);
		command[99] = 0;
	}

	return command;
}
