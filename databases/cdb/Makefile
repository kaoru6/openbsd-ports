# $OpenBSD$

DISTNAME=		cdb-0.75
HOMEPAGE=		http://cr.yp.to/cdb.html

CATEGORIES=		databases
NEED_VERSION=		1.340
MAINTAINER=		David Lebel <lebel@lebel.org>

MASTER_SITES=		http://cr.yp.to/cdb/

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

ALL_TARGET=		default
INSTALL_TARGET=		setup check

pre-build:
	@echo ${CC} ${CFLAGS} > ${WRKSRC}/conf-cc
	@echo ${PREFIX} > ${WRKSRC}/conf-home

pre-install:
	@echo ${PREFIX} > ${WRKSRC}/conf-home

post-install:
	${INSTALL_DATA} ${WRKSRC}/cdb.h ${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/cdb.a ${PREFIX}/lib/libcdb.a

.include <bsd.port.mk>