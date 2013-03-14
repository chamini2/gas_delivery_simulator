/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _LOGISTICA_H_RPCGEN
#define _LOGISTICA_H_RPCGEN

#define RPCGEN_VERSION	199506

#include <rpc/rpc.h>


#define LOGISTICA ((rpc_uint)1)
#define LOGISTICA_VERS ((rpc_uint)1)

#ifdef __cplusplus
#define pedir_gasolina ((rpc_uint)1)
extern "C" int * pedir_gasolina_1(int *, CLIENT *);
extern "C" int * pedir_gasolina_1_svc(int *, struct svc_req *);
#define pedir_desafio ((rpc_uint)2)
extern "C" char ** pedir_desafio_1(void *, CLIENT *);
extern "C" char ** pedir_desafio_1_svc(void *, struct svc_req *);
#define autenticar ((rpc_uint)3)
extern "C" int * autenticar_1(char **, CLIENT *);
extern "C" int * autenticar_1_svc(char **, struct svc_req *);

#elif __STDC__
#define pedir_gasolina ((rpc_uint)1)
extern  int * pedir_gasolina_1(int *, CLIENT *);
extern  int * pedir_gasolina_1_svc(int *, struct svc_req *);
#define pedir_desafio ((rpc_uint)2)
extern  char ** pedir_desafio_1(void *, CLIENT *);
extern  char ** pedir_desafio_1_svc(void *, struct svc_req *);
#define autenticar ((rpc_uint)3)
extern  int * autenticar_1(char **, CLIENT *);
extern  int * autenticar_1_svc(char **, struct svc_req *);

#else /* Old Style C */
#define pedir_gasolina ((rpc_uint)1)
extern  int * pedir_gasolina_1();
extern  int * pedir_gasolina_1_svc();
#define pedir_desafio ((rpc_uint)2)
extern  char ** pedir_desafio_1();
extern  char ** pedir_desafio_1_svc();
#define autenticar ((rpc_uint)3)
extern  int * autenticar_1();
extern  int * autenticar_1_svc();
#endif /* Old Style C */

#endif /* !_LOGISTICA_H_RPCGEN */
