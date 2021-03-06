struct TSRnnVAR{
    char __TSRnnPRIND;
    char __TSRnnRSIND;
    char __TSRnnSERNO[4];
	char __TSRnnSUBSER[2];
}*TSRnnPRMS;

struct SERVICE{
	short unsigned int __TRFSRNO;
    char __TRFSRTYPE;
    char __TRFSRNAME[3];
    char __TRFSRVETGP;
    char __TRFSRACTGP;
    char __TRFSRSEG;
    char __TRFSRSECT;
    char __TRFSRPSN;
    char __TRFSRSAI;
    char __TRFSRFTA;
    char __TRFSRCCA;
    char __TRFSRCT;
    char __TRFSRAPA;
    char __TRFSRDCA;
    char __TRFSRATA;
} *TRFSERVICE;

struct SUBSER{
    char __TRFSBSERNO[4];
    char __TRFSBSBNO[2];
    char __TRFSBST;
    char __TRFSBSF;
    char __TRFSBIBC;
    char __TRFSBCFCF;
    char __TRFSBCFCM;
    char __TRFSBCFCT[3];
    char __TRFSBWCB;
    char __TRFSBTCB;
    char __TRFSBCTT;
    char __TRFSBCOA[4];
    char __TRFSBCCAF;
    char __TRFSBCCAM;
    char __TRFSBTCW[10];
} *TRFSUBSER;

#define TSRnnPRIND TSRnnPRMS->__TSRnnPRIND
#define TSRnnRSIND TSRnnPRMS->__TSRnnRSIND
#define TSRnnSERNO TSRnnPRMS->__TSRnnSERNO
#define TSRnnSUBSER TSRnnPRMS->__TSRnnSUBSER

#define TRFSRNO TRFSERVICE->__TRFSRNO
#define TRFSRTYPE TRFSERVICE->__TRFSRTYPE
#define TRFSRNAME TRFSERVICE->__TRFSRNAME
#define TRFSRVETGP TRFSERVICE->__TRFSRVETGP
#define TRFSRACTGP TRFSERVICE->__TRFSRACTGP
#define TRFSRSEG TRFSERVICE->__TRFSRSEG
#define TRFSRSECT TRFSERVICE->__TRFSRSECT
#define TRFSRPSN TRFSERVICE->__TRFSRPSN
#define TRFSRSAI TRFSERVICE->__TRFSRSAI
#define TRFSRFTA TRFSERVICE->__TRFSRFTA
#define TRFSRCCA TRFSERVICE->__TRFSRCCA
#define TRFSRCT TRFSERVICE->__TRFSRCT
#define TRFSRAPA TRFSERVICE->__TRFSRAPA
#define TRFSRDCA TRFSERVICE->__TRFSRDCA
#define TRFSRATA TRFSERVICE->__TRFSRATA

#define TRFSBSERNO TRFSUBSER->__TRFSBSERNO
#define TRFSBSBNO TRFSUBSER->__TRFSBSBNO
#define TRFSBST TRFSUBSER->__TRFSBST
#define TRFSBSF TRFSUBSER->__TRFSBSF
#define TRFSBIBC TRFSUBSER->__TRFSBIBC
#define TRFSBCFCF TRFSUBSER->__TRFSBCFCF
#define TRFSBCFCM TRFSUBSER->__TRFSBCFCM
#define TRFSBCFCT TRFSUBSER->__TRFSBCFCT
#define TRFSBWCB TRFSUBSER->__TRFSBWCB
#define TRFSBTCB TRFSUBSER->__TRFSBTCB
#define TRFSBCTT TRFSUBSER->__TRFSBCTT
#define TRFSBCOA TRFSUBSER->__TRFSBCOA
#define TRFSBCCAF TRFSUBSER->__TRFSBCCAF
#define TRFSBCCAM TRFSUBSER->__TRFSBCCAM
#define TRFSBTCW TRFSUBSER->__TRFSBTCW

