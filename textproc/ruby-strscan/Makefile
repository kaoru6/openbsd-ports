# $OpenBSD: Makefile,v 1.23 2002/07/10 20:14:45 mickey Exp $
# KAME Id: Makefile,v 1.5 1999/09/13 16:27:41 itojun Exp
# Originally by: peter.galbavy@knowledge.com

COMMENT=	"fast scanning library for ruby program"

DISTNAME=	strscan-0.6.7
PKGNAME=	ruby-${DISTNAME}
CATEGORIES=	textproc ruby

MASTER_SITES=	http://i.loveruby.net/archive/strscan/
HOMEPAGE=	http://i.loveruby.net/en/strscan.html
MAINTAINER=	taka@trans-nt.com

BUILD_DEPENDS=	::lang/ruby

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

do-configure:
	@cd ${WRKSRC}; ruby install.rb config --prefix=${PREFIX}

do-build:
	@cd ${WRKSRC}; ruby install.rb setup

do-install:
	@cd ${WRKSRC}; ruby install.rb install --prefix=${WRKINST}

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/strscan
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/strscan/doc.ja
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/strscan/doc.en
	${INSTALL_DATA} ${WRKSRC}/doc.ja/* ${PREFIX}/share/doc/strscan/doc.ja
	${INSTALL_DATA} ${WRKSRC}/doc.en/* ${PREFIX}/share/doc/strscan/doc.en

.include <bsd.port.mk>
