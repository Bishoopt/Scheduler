#include <lib.h>
#define GROUP_NORMAL 1
#define GROUP_PRIVI 2
#define GROUP_BACKG 3
int getgroup(pid_t pid)
{
	message m;
	m.m1_i1 = pid;
	return _syscall(MM, GETGROUP, &m);
}

int setgroup(pid_t pid, unsigned short new_group)
{
	message m;
	m.m1_i1 = pid;
	m.m2_l2 = new_group;
	return _syscall(MM, SETGROUP, &m);
}
