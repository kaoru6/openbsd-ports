# $Id: Makefile,v 1.3 2004/10/13 19:15:51 kaoru Exp $
# Originally by: taka@trans-nt.com

COMMENT=	"fast scanning library for ruby program"

DISTNAME=	strscan-0.6.7
PKGNAME=	ruby-${DISTNAME}
CATEGORIES=	textproc ruby

MASTER_SITES=	http://i.loveruby.net/archive/strscan/
HOMEPAGE=	http://i.loveruby.net/en/strscan.html
MAINTAINER=	taka@trans-nt.com

MODULES=                lang/ruby
CONFIGURE_STYLE=        simple
CONFIGURE_SCRIPT?=      ${LOCALBASE}/bin/ruby install.rb config

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

#do-configure:
#	@cd ${WRKSRC}; ruby install.rb config --prefix=${PREFIX}

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
