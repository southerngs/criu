#ifndef __CR_PROC_POSIX_TIMER_H__
#define __CR_PROC_POSIX_TIMER_H__

struct str_posix_timer {
	long it_id;
	int clock_id;
	int si_signo;
	int it_sigev_notify;
	void * sival_ptr;
};

struct proc_posix_timer {
	struct list_head list;
	struct str_posix_timer spt;
};

struct proc_posix_timers_stat {
	int timer_n;
	struct list_head timers;
};

extern int parse_posix_timers(pid_t pid, struct proc_posix_timers_stat * args);

#endif