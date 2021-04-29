#ifndef V2MODULE_H
#define V2MODULE_H

#include <systemc>
#include <deque>

SC_MODULE(v2module)
{
public:
	SC_HAS_PROCESS(v2module);

	v2module(sc_core::sc_module_name name, int limit = 10);

	void generate();
	void write();

protected:
	std::deque<int> ints;
	int limit;
};

#endif
