# $OpenBSD: Makefile,v 1.24 2003/05/12 18:02:45 sturm Exp $
# KAME Id: Makefile,v 1.5 1999/09/13 16:27:41 itojun Exp
# Originally by: peter.galbavy@knowledge.com

COMMENT=	"multi-threaded routing daemon with patch"

DISTNAME=	quagga-0.96.4
CATEGORIES=	net
MASTER_SITES=	http://quagga.net/download/

HOMEPAGE=	http://www.quagga.net/

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

#WRKDIST=	${WRKDIR}/${DISTNAME}

# you might need debugging, it's a developer release !
#CFLAGS+=	-g

USE_GMAKE=	Yes
CONFDIR=	${SYSCONFDIR}/quagga
SEPARATE_BUILD=	concurrent
CONFIGURE_STYLE= gnu old
CONFIGURE_ARGS+= --enable-vtysh --sysconfdir=${CONFDIR} --enable-user=_quagga --enable-group=_quagga
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
.for f in vtysh.1 bgpd.8 ospf6d.8 ospfd.8 ripd.8 ripngd.8 zebra.8 quagga.info
	@cd ${WRKSRC}/doc; sed \
		-e s#/usr/local/etc#@sysconfdir@#g \
		-e s#/usr/local/sbin#@prefix@/sbin#g \
			${f} > ${f}.in && \
	rm -f ${f}
.endfor

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/quagga
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/quagga
	${INSTALL_DATA} ${WRKSRC}/README ${PREFIX}/share/doc/quagga
	${INSTALL_DATA} ${WRKINST}${CONFDIR}/* ${PREFIX}/share/examples/quagga

.include <bsd.port.mk>
