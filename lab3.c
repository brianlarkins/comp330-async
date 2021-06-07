#include <fcntl.h>
#include <netdb.h>
#include <poll.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>

#define MAXPATH 1024
#define MAXFDS    12
#define DEFAULT_PORT "8000"

void usage(void) {
  printf("usage: nc [-hlv] [-h host] [-p port]\n");
  printf("\t-H print this help message\n");
  printf("\t-l run in listen mode\n");
  printf("\t-v be verbose\n");
  printf("\t-h host - connect to specified host\n");
  printf("\t-p port - use specified port\n");
}

int main(int argc, char **argv) {
  return 0;
}
