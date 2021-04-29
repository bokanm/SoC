#include <iostream>
#include <systemc>
#include <time.h>

int sc_main(int argc, char* argv[])
{
	srand(time(0));

	sc_core::sc_time t1(rand()% 10 + 1, sc_core::SC_NS);
	sc_core::sc_time t2(rand()% 10 + 1, sc_core::SC_NS);

	sc_start(t1+t2);

	std::cout
		<< "\nt1="
		<< t1
		<< "\nt2="
		<< t2
		<< "\nCurrent simulation time: "
		<< sc_core::sc_time_stamp()
		<< "\n"
		<< std::endl;

	return 0;
}
