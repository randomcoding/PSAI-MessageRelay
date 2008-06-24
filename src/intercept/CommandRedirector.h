#ifndef COMMANDREDIRECTOR_H_
#define COMMANDREDIRECTOR_H_

class CommandRedirector
{
public:
	CommandRedirector();
	virtual ~CommandRedirector();
	
	void redirect(const char* cmd);
	
	const char* getCommandType(const char* cmd);
};

#endif /*COMMANDREDIRECTOR_H_*/
