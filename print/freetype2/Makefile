# $OpenBSD: Makefile,v 1.33 2005/01/24 15:05:56 alek Exp $
# $FreeBSD: Makefile,v 1.6 1998/06/21 02:42:33 jseger Exp $

COMMENT=	"free and portable TrueType font rendering engine"

VERSION=	2.1.10
DISTNAME=	freetype-${VERSION}
SHARED_LIBS=	freetype	9.8


CATEGORIES=	print
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=freetype/}

HOMEPAGE=	http://www.freetype.org/

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

# See http://www.freetype.org/patents.html
# bytecode interpreter disabled
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes
WANTLIB=		z

USE_GMAKE=	Yes
SEPARATE_BUILD=	concurrent
CONFIGURE_STYLE= gnu dest
CONFIGURE_ARGS+= ${CONFIGURE_SHARED}
CONFIGURE_ARGS+= --enable-static --disable-nls

CONFIGURE_ENV+=	GNUMAKE=${GMAKE}

.include <bsd.port.mk>
