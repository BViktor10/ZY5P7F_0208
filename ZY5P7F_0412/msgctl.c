#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

//  Kulcs
#define MSGKEY 646464L

int main()
{
	int msgid, msgflg,ret;
	key_t key;

	key = MSGKEY;
	msgflg = 00666 | IPC_CREAT; 

	msgid = msgget(key, msgflg);

	ret = msgctl(msgid, IPC_RMID, NULL);
	printf ("\n Visszatert: %d\n", ret);

	exit(0);
}
