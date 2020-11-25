#ifndef PROC_H
#define PROC_H

#include "../types.h"

//* process state enumeration *
enum proc_states
{
    running=1,
    idle=2,
    ready=3
};

//* the process name *
string _proc_name;

//* state of proc *
int16 proc_state;


void set_proc_state(int16 new_proc_state);
void get_proc_state(string _proc_name);



#endif