#include "Hello.h"

Hello::Hello(const std::string s)
{
	data = s;
}

Hello::~Hello()
{

}

void Hello::print(std::ostream& out)
{
	out << "Hello, " << data << std::endl;
}

std::ostream& operator<<(std::ostream& out, Hello& h)
{
	h.print(out);
	return out;
}
