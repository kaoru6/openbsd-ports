# $Id: Makefile,v 1.4 2004/11/10 13:48:54 kaoru Exp $
# Originally by: taka@trans-nt.com

COMMENT=	" html/xhtml template library for Ruby"

DISTNAME=	amrita-1.0.2
PKGNAME=        ruby-${DISTNAME}
CATEGORIES=	textproc

MASTER_SITES=	http://www.brain-tokyo.jp/research/amrita/
HOMEPAGE=	http://www.brain-tokyo.jp/research/amrita/index_ja.html
MAINTAINER=	taka@trans-nt.com

MODULES=                lang/ruby

#RUN_DEPENDS=	::lang/ruby ::textproc/ruby-strscan

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

do-install:
	(cd ${WRKSRC}; \
	sd=`ruby -rrbconfig -e 'print Config::CONFIG["sitelibdir"]'`; \
	make PREFIX=${WRKINST}${LOCALBASE} SITE_DIR=${WRKINST}$${sd} install )

.include <bsd.port.mk>
