struct osd_config {
	int width;
	int height;
};

struct encoder {
	int port_id;
	char parameter_name[20];
	char updated_value[20];
	char portname[20];
	char ip_address[20];
	char macaddr[20];
	char type[20];
	char linktype[20];
	char audio[20];
	char format[20];
	char resolution[20];
	char framerate[20];
	char media[20];
	int	count;
};

program OSD_CONFIG_PROG{
	version OSD_CONFIG_VERS{
		encoder ConfigData(encoder)=2;
	}=1;
}=0x23451111;
