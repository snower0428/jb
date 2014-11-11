
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#define FILE "/var/mobile/Library/com.apple.itunesstored/itunesstored2.sqlitedb"

int main()
{
	int fd = open(FILE, O_RDONLY);
	char buf[128];
	int ret = 0;
	
	if(fd < 0)
		return -1;
	while (( ret = read(fd, buf, sizeof(buf))) > 0){
		write( fileno(stdout), buf, ret);
	}
	close(fd);
	return 0;
}