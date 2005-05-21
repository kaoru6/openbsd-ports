# $OpenBSD$
# $FreeBSD: ports/japanese/ruby-romkan/Makefile,v 1.8 2003/02/18 05:25:29 knu Exp $
# Originally by: knu@freebsd.org

COMMENT=	"Romaji <-> Kana conversion library for Ruby"

DISTNAME=	ruby-romkan-0.4
CATEGORIES=	textproc

MASTER_SITES=	http://namazu.org/~satoru/ruby-romkan/
HOMEPAGE=	${MASTER_SITES}
MAINTAINER=	kaoru@kaisei.org

MODULES=                lang/ruby

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

NO_BUILD=YES

ROMKAN_INSTALLDIR= ${PREFIX}/lib/ruby/site_ruby/${REV}
do-install:
	mkdir -p ${ROMKAN_INSTALLDIR}
	cd ${WRKSRC} && ${INSTALL_SCRIPT} romkan.rb ${ROMKAN_INSTALLDIR}

.include <bsd.port.mk>
