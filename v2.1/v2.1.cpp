#include <systemc>
#include <iostream>
#include <time.h>

int sc_main(int argc, char* argv[])
{
	srand(time(0));

	sc_core :: sc_time t(rand()% 91 + 10, sc_core :: SC_NS); //interval 10 to 100

	sc_start(t); //simulacija

	std::cout
		<< "Current simulation time = "
		<< sc_core::sc_time_stamp()
		<< std::endl;

    return 0;
}
