# $OpenBSD: Makefile,v 1.24 2003/05/12 18:02:45 sturm Exp $
# KAME Id: Makefile,v 1.5 1999/09/13 16:27:41 itojun Exp
# Originally by: peter.galbavy@knowledge.com

COMMENT=	"multi-threaded routing daemon with patch"

DISTNAME=	zebra-pj-0.94-20030628
CATEGORIES=	net
MASTER_SITES=	http://zebra.dishone.st/snapshots/cvs/

HOMEPAGE=	http://zebra.dishone.st/

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

WRKDIST=	${WRKDIR}/zebra-0.94

# you might need debugging, it's a developer release !
#CFLAGS+=	-g

USE_GMAKE=	Yes
CONFDIR=	${SYSCONFDIR}/zebra
SEPARATE_BUILD=	concurrent
CONFIGURE_STYLE= gnu old
CONFIGURE_ARGS+= --enable-vtysh --sysconfdir=${CONFDIR}
#CONFIGURE_ENV=	LIBS=-lcurses

FLAVORS=	snmp
FLAVOR?=

.if ${FLAVOR:L:Msnmp}
LIB_DEPENDS=	snmp.42::net/ucd-snmp
CONFIGURE_ARGS+= --enable-snmp
.else
CONFIGURE_ARGS+= --disable-snmp
.endif

SUBST_VARS=	CONFDIR

post-extract:
.for f in vtysh.1 bgpd.8 ospf6d.8 ospfd.8 ripd.8 ripngd.8 zebra.8 zebra.info
	@cd ${WRKSRC}/doc; sed \
		-e s#/usr/local/etc#@sysconfdir@#g \
		-e s#/usr/local/sbin#@prefix@/sbin#g \
			${f} > ${f}.in && \
	rm -f ${f}
.endfor

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/zebra
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/zebra
	${INSTALL_DATA} ${WRKSRC}/README ${PREFIX}/share/doc/zebra
	${INSTALL_DATA} ${WRKINST}${SYSCONFDIR}/zebra/* ${PREFIX}/share/examples/zebra

.include <bsd.port.mk>
