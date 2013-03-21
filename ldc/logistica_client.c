/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "logistica.h"


void
logistica_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	char * pedir_gasolina_1_arg;
	char * *result_2;
	char * pedir_desafio_1_arg;
	int  *result_3;
	char * autenticar_1_arg;
	int  *result_4;
	char *pedir_tiempo_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, LOGISTICA, LOGISTICA_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = pedir_gasolina_1(&pedir_gasolina_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = pedir_desafio_1(&pedir_desafio_1_arg, clnt);
	if (result_2 == (char **) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_3 = autenticar_1(&autenticar_1_arg, clnt);
	if (result_3 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_4 = pedir_tiempo_1((void*)&pedir_tiempo_1_arg, clnt);
	if (result_4 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	logistica_1 (host);
exit (0);
}