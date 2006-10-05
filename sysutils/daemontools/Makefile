# $OpenBSD: Makefile,v 1.10 2001/05/06 03:59:00 lebel Exp $

COMMENT=	"collection of tools for managing UNIX services"

DISTNAME=	daemontools-0.76
CATEGORIES=	sysutils

MAINTAINER=	Camiel Dobbelaar <cd@sentia.nl>
HOMEPAGE=	http://cr.yp.to/daemontools.html

MASTER_SITES=	http://cr.yp.to/daemontools/ \
		ftp://ftp.id.wustl.edu/pub/qmail/
MASTER_SITES0=	http://smarden.org/pape/djb/manpages/
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} ${DISTNAME}-man${EXTRACT_SUFX}:0

PERMIT_PACKAGE_CDROM=	No
PERMIT_PACKAGE_FTP=	No
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes
WANTLIB=	c

WRKSRC=         ${WRKDIR}/admin/${DISTNAME}/src
WRKDIST=	${WRKSRC}

ALL_TARGET=	it
#jINSTALL_TARGET=	setup check

MAN8LIST=	envuidgid multilog setuidgid supervise svok svstat \
		pgrphack readproctitle svscanboot \
		tai64nlocal envdir fghack setlock softlimit svc svscan tai64n

pre-build:
	@echo ${CC} ${CFLAGS} > ${WRKSRC}/conf-cc
	@echo ${PREFIX} > ${WRKSRC}/conf-home

pre-install:
	@echo ${PREFIX} > ${WRKSRC}/conf-home

do-install:
	(while read cmd; do \
		if file ${WRKSRC}/$$cmd | grep -q "shell script"; then \
			${INSTALL_SCRIPT} ${WRKSRC}/$$cmd ${PREFIX}/bin; \
		else \
			${INSTALL_PROGRAM} ${WRKSRC}/$$cmd ${PREFIX}/bin; \
		fi \
	done) < ${WRKSRC}/../package/commands
.for i in ${MAN8LIST}
	${INSTALL_MAN} ${WRKDIR}/daemontools-man/$i.8 ${PREFIX}/man/man8
.endfor

.include <bsd.port.mk>
