#include <stdio.h>
#include "osd_config.h"
#include <string.h>
#include <stdbool.h>
#include <mysql/mysql.h>

#define Decoder_msg(fmt, ...) do {\
    time_t t = time(NULL);\
    struct tm *timestamp = localtime(&t);\
    char buffer[26];\
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timestamp);\
    printf("[%s] " fmt, buffer, ##__VA_ARGS__);\
} while (0)

char *virtual_media, *resolution, *connectedDecoder, *name;
char *ip_addr, *mac_addr, *enc_type, *link_type, *audio, *framerate;
char *format, *kvm_type, *parameter_name, *updated_value; 
int id, count, switch_id;
char *encoder_ip;
		MYSQL *con;
		MYSQL_RES *result;
		MYSQL_RES *result_ip;
		MYSQL_ROW row, row_ip;
		MYSQL_FIELD *fields;
		const char *trigger;
		const char *column_name;
		const char *new_value;
		int set_bit = 0;
		unsigned int num_fields;
		pid_t childpid;
		int encId;
