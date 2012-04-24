#include <iostream>
//#include "boost/foreach.hpp"
#include "boost/thread.hpp"
using namespace boost;

int main(void)
{
	std::cerr<<"hello world"<<std::endl;
	std::cerr<<"my edits..."<<std::endl;
	std::string str= "test123";

	for( char c : str )
	{
		boost::thread worker;
		std::cerr<<c<<std::endl;
	}


	return 0;
}
