#pragma once

#include "Interface.hpp"

namespace My {
	Interface IRuntimeModule 
	{
	public:
		virtual ~IRuntimeModule(){};

		//Parse command line, read configuration,initialize all sub modules
		virtual int Initialize() = 0;

		//Finalize all sub modules and clean up all runtime temporary files.
		virtual void Finalize() = 0;

		//One cycle of the main loop
		virtual void Tick() = 0;
	};
}
