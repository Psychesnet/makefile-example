#ifndef HELLO_H
#define HELLO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>

class Hello
{
public:
	Hello (const std::string s);
	virtual ~Hello ();
	void print(std::ostream& out);

	friend std::ostream& operator<<(std::ostream& out, Hello& h);

private:
	std::string data;
};

#endif
