#include "../include/pi.h"

#include <mpi.h>
#include <cstdint>
#include <iostream>


auto pi (void) -> long double
{
	std::uint64_t points = 10000;
	std::int32_t size;
	MPI_Group group;
	MPI_Group_size (group, &size);
	return 0;
}
