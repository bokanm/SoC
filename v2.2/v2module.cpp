#include "v2module.hpp"
#include <cstdlib>
#include <ctime>

using namespace sc_core;
using namespace std;

v2module::v2module(sc_core::sc_module_name name, int limit) : limit(limit)
{
	SC_THREAD(generate);
 	SC_THREAD(write);
	srand(time(NULL));
}

void v2module::generate()
{
	while(true)
	{
		sc_core::sc_time t(rand()% 100 +10, sc_core::SC_NS);
		
		int x,next=0;
		int y=1;

		for(int i=0;i<64;i++){ //generise fib niz
			next=y;
			y+=x;
			x=next;			
		}
	}
}

void v2module::write()
{
	/*for(;;)
	{
		wait(1500, SC_PS);
		while(ints.size() != 0)
		{
			int num = ints.front();
			ints.pop_front();
			std::cout <<
				"Number " << num <<
				" at time " << sc_time_stamp() <<
				".\n";
		}
	}
}


