#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>

#define SERVER_IP  "127.0.0.1"
#define PORT 8012

int main(int argc, char const *argv[])
{
    int sock = 0, len_send,ret;
	struct sockaddr_in serv_addr;
	char buffer[131072]={0};
	printf("sock0\n");
	if ((sock = socket(AF_INET, SOCK_STREAM, 0 )) < 0){
		printf("\n socket creation error \n");
		return -1;
	}
	printf("sock1\n");
	
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(PORT);
	printf("sin_port %d\n" , serv_addr.sin_port);    
	if(inet_pton(AF_INET,SERVER_IP,&serv_addr.sin_addr)<=0){
		printf("\n Invaild address/address not supported\n");
		return -1;
	}
	printf("conn0\n");
    	if(connect(sock, (struct sockaddr *)&serv_addr,sizeof(serv_addr))<0){
		printf("\nconnection failed \n ");
		return -1;
	}
	else
		printf("connect successed\n");
printf("hello from client\n");
//	sleep (1);
	printf("======================================\n");
	ret = write(sock,buffer ,131072);
	printf("ret = %d======================================\n",ret);
	//sleep (5);
	printf("======================================\n");
        ret =  write(sock, buffer ,131072);
	printf("ret = %d======================================\n",ret);
	//sleep (3);
        ret =  write(sock, buffer ,131072);
	printf("ret =%d======================================\n",ret);
//	printf("ret = %d\n",ret);
	close(sock);
	return 0;
}
