# $OpenBSD$
# $FreeBSD: ports/devel/ruby-bsearch/Makefile,v 1.13 2009/06/16 15:53:06 stas Exp $
# Original from: Akinori MUSHA <knu@freebsd.org>
#

COMMENT=	A binary search library for Ruby

DISTNAME=	ruby-bsearch-1.5
CATEGORIES=	devel

MASTER_SITES=	http://0xcc.net/ruby-bsearch/
HOMEPAGE=	${MASTER_SITES}
MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

MODULES=                lang/ruby

#LIB_DEPENDS=            ruby.>=1.84::lang/ruby

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

NO_BUILD=YES

INSTALLDIR= ${PREFIX}/lib/ruby/site_ruby/${MODRUBY_REV}
do-install:
	mkdir -p ${INSTALLDIR}
	cd ${WRKSRC} && ${INSTALL_SCRIPT} bsearch.rb ${INSTALLDIR}

.include <bsd.port.mk>
