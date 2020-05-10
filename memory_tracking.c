#include "memory_tracking.h"

void tools_memory_init (void)
{
	GLOBAL_ALLOC_MEMORY = 0;
}

void* tools_malloc(int alloc)
{
	void* ptr = malloc (alloc);
	GLOBAL_ALLOC_MEMORY += alloc;
	return ptr;
}

void tools_free (void* ptr, int alloc)
{
	free (ptr);
	GLOBAL_ALLOC_MEMORY -= alloc;
}

void tools_memory_check_at_end_of_app(void)
{
	if (GLOBAL_ALLOC_MEMORY != 0)
		printf ("this program has one or many memory leaks.\n %d bytes weren't freed", GLOBAL_ALLOC_MEMORY);
}