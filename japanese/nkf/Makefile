# very loosely based on FreeBSD 2.2.7
# $OpenBSD: Makefile,v 1.13 2004/01/17 15:58:08 naddy Exp $

NOT_FOR_ARCHS=	${NO_SHARED_ARCHS}

COMMENT=	"Network Kanji code conversion Filter"

VERSION=	2.0.4
DISTNAME=	nkf204
PKGNAME=	ja-nkf-${VERSION}
CATEGORIES=	japanese textproc

HOMEPAGE=	http://www01.tcp-ip.or.jp/~furukawa/nkf_utf8/
MASTER_SITES=	http://www01.tcp-ip.or.jp/~furukawa/nkf_utf8/

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

#		BSD
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

WRKSRC=${WRKDIST}/NKF.mod

CONFIGURE_STYLE=perl

# make nkf binary
pre-build:
	cd ${WRKDIST} && ${MAKE} nkf

# original english man page was rather difficult to follow
post-install:	
	${INSTALL_PROGRAM} ${WRKDIST}/nkf ${PREFIX}/bin
	${INSTALL_MAN} ${WRKDIST}/nkf.1 ${PREFIX}/man/man1
	${INSTALL_MAN} ${WRKDIST}/nkf.doc ${PREFIX}/man/ja_JP.EUC/cat1/nkf.0

do-regress:
	cd ${WRKDIST} && make test

.include <bsd.port.mk>
