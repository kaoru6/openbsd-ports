# $OpenBSD: Makefile,v 1.33 2006/06/04 20:21:35 jakob Exp $

COMMENT=	"authoritative-only name server daemon"

VERSION=	3.0.1
DISTNAME=	nsd-${VERSION}
PKGNAME=	nsd-${VERSION}
CATEGORIES=	net

MASTER_SITES=	http://www.nlnetlabs.nl/downloads/nsd/

HOMEPAGE=	http://www.nlnetlabs.nl/nsd/

MAINTAINER=     Jakob Schlyter <jakob@openbsd.org>

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes
WANTLIB=		c wrap crypto

# gcc 3.3.5, Bus errors
.if ${MACHINE_ARCH} == "sparc64"
CFLAGS=	-O0
.endif

CONFIGURE_STYLE=	gnu
CONFIGURE_ARGS+=	--enable-dnssec \
			--enable-bind8-stats \
			--with-libwrap=/usr/lib \
			--with-ssl=/usr \
			--with-user=named \
			--with-pidfile=/var/run/nsd.pid \
			--with-zonesdir=/var/nsd \
			--with-dbfile=/var/nsd/nsd.db

NO_REGRESS=	Yes

EXE=		nsd nsd-checkconf nsd-notify nsd-patch nsd-xfer zonec
MAN5=		nsd.conf.5
MAN8=		nsd.8 nsd-checkconf.8 nsd-notify.8 nsd-patch.8 nsd-xfer.8 \
		zonec.8 nsdc.8
DOCDIR=		share/doc/nsd
DOCFILES=	README README.icc RELNOTES CREDITS REQUIREMENTS \
		LICENSE UPGRADING TESTPLAN TODO \
		NSD-DATABASE NSD-DIFFFILE NSD-FOR-BIND-USERS \
		ChangeLog coding-style differences.tex

EXAMPLESDIR=	share/examples/nsd

do-install:
.for f in ${EXE}
	${INSTALL_PROGRAM} ${WRKSRC}/${f} ${PREFIX}/sbin
.endfor
	${INSTALL_SCRIPT} ${WRKSRC}/nsdc.sh ${PREFIX}/sbin/nsdc
.for f in ${MAN5}
	${INSTALL_MAN} ${WRKSRC}/${f} ${PREFIX}/man/man5
.endfor
.for f in ${MAN8}
	${INSTALL_MAN} ${WRKSRC}/${f} ${PREFIX}/man/man8
.endfor
	${INSTALL_DATA_DIR} ${PREFIX}/${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/nsd.conf.sample ${PREFIX}/${EXAMPLESDIR}
	${INSTALL_DATA_DIR} ${PREFIX}/${DOCDIR}
.for f in ${DOCFILES}
	${INSTALL_DATA} ${WRKSRC}/doc/${f} ${PREFIX}/${DOCDIR}
.endfor

.include <bsd.port.mk>
