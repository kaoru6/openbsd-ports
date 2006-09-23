# $OpenBSD$

COMMENT=		"Powerful Multilingual File Viewer"

VERSION=		4.51
DISTNAME=		lv${VERSION:S/.//g}
PKGNAME=		lv-${VERSION}
CATEGORIES=		misc

HOMEPAGE=		http://www.ff.iij4u.or.jp/~nrt/lv/
MAINTAINER=		TAKAHASHI Kaoru <kaoru@kaisei.org>

# GPL
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes
WANTLIB=		c termcap

MASTER_SITES=		http://www.ff.iij4u.or.jp/~nrt/freeware/

CONFIGURE_STYLE=	GNU

WRKSRC=			${WRKDIST}/src

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/lv ${PREFIX}/bin/
	cd ${PREFIX}/bin && ln lv lgrep
	mkdir -p ${PREFIX}/lib/lv
	${INSTALL_DATA} ${WRKDIST}/lv.hlp ${PREFIX}/lib/lv/
	${INSTALL_MAN} ${WRKDIST}/lv.1 ${PREFIX}/man/man1/

.include <bsd.port.mk>
