#ifndef __MEMORY_TRACKING__
# define __MEMORY_TRACKING__

# include <stdio.h>
# include <stdlib.h>

int GLOBAL_ALLOC_MEMORY;

int tool_random_int (int vmin, int vmax);
void tools_memory_init (void);
void* tools_malloc(int alloc);
void tools_free (void * ptr, int alloc);
void tools_memory_check_at_end_of_app(void);

#endif