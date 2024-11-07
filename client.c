#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

// IPv4

struct in_addr {
  uint32_t s_addr; // 4 bytes
};

struct sockaddr_in {
  short int sin_family; // AF_INET
  unsigned short int sin_port;
  struct in_addr sin_addr;
  unsigned char
      sin_zero[8]; // Only here to pad and maintain same size as struct sockaddr
};

struct sockaddr {
  unsigned short sa_family; // address family AF_XXXX
  char sa_data[14];         // 14 bytes protocol address
};

struct addrinfo {
  int ai_flags;
  int ai_family;            // AF_INET(IPv4) or AF_INET6 (IPv6) or AF_UNSPEC
                            // (Unspecified will accept both)
  int ai_socktype;          // SOCK_STRAM (TCP) or SOCK_DGRAM (UDP)
  int ai_protocol;          // use 0 for any
  size_t ai_addrlen;        // size of ai_addr in bytes
  struct sockaddr *ai_addr; // struct sockaddr_in or sockaddr_in6
  char *ai_canonname;       // full cannonical hostname

  struct addrinfo *ai_next; // linked list, next node
};

int main(void) { return EXIT_SUCCESS; }
