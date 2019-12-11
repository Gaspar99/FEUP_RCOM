#pragma once

#include <string.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#define MAX_STRING_SIZE 256

typedef struct url_t {
	char user[MAX_STRING_SIZE]; 
	char password[MAX_STRING_SIZE]; 
	char host_name[MAX_STRING_SIZE]; 
	char ip_address[MAX_STRING_SIZE]; 
	char url_path[MAX_STRING_SIZE]; 
	char filename[MAX_STRING_SIZE]; 
	int port; 
} url_t;

void create_url_struct(url_t* url);
int get_url(url_t* url, const char* str);
int get_ip_address(url_t* url);
