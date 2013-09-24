#ifndef __CR_SERVICE_H__
#define __CR_SERVICE_H__

#include "protobuf/rpc.pb-c.h"

#define CR_DEFAULT_SERVICE_ADDRESS "/tmp/criu_service.socket"
#define MAX_MSG_SIZE 1024

int cr_service(bool deamon_mode);

int send_criu_dump_resp(int socket_fd, bool success, bool restored);

struct _cr_service_client {
	int sk_ino;
	int uid;
	int pid;
	int sk_fd;
};

extern struct _cr_service_client *cr_service_client;

#endif