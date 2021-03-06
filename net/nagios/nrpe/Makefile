# $OpenBSD: Makefile,v 1.10 2009/01/10 16:56:42 sturm Exp $

COMMENT=	Nagios Remote Plugin Executor

DISTNAME=	nrpe-2.12
PKGNAME=	${DISTNAME}p1
CATEGORIES=	net

MAINTAINER=	Stuart Henderson <sthen@openbsd.org>
HOMEPAGE=	http://www.nagios.org/

# GPL
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes
WANTLIB=		c crypto ssl wrap

MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=nagios/}

RUN_DEPENDS=	::net/nagios/plugins

CONFIGURE_STYLE= gnu
CONFIGURE_ARGS+=--enable-command-args
CONFIGURE_ARGS+=--libexecdir=${LOCALBASE}/libexec/nagios
CONFIGURE_ARGS+=--with-nrpe-user=_nrpe
CONFIGURE_ARGS+=--with-nrpe-group=_nrpe
CONFIGURE_ARGS+=--with-kerberos-inc=/usr/include/kerberosV/

pre-configure:
	@${SUBST_CMD} ${WRKSRC}/src/nrpe.c

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/libexec/nagios
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/nrpe
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/nrpe
	${INSTALL_DATA} ${WRKSRC}/README ${PREFIX}/share/doc/nrpe
	${INSTALL_DATA} ${WRKSRC}/SECURITY ${PREFIX}/share/doc/nrpe
	${INSTALL_DATA} ${WRKSRC}/sample-config/nrpe.cfg ${PREFIX}/share/examples/nrpe
	${INSTALL_PROGRAM} ${WRKSRC}/src/check_nrpe ${PREFIX}/libexec/nagios
	${INSTALL_PROGRAM} ${WRKSRC}/src/nrpe ${PREFIX}/sbin

NO_REGRESS=	Yes

.include <bsd.port.mk>
