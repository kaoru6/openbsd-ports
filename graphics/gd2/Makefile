# $OpenBSD: Makefile,v 1.51 2007/09/15 20:09:40 simon Exp $

COMMENT=	library for dynamic creation of images

DISTNAME=	gd-2.0.35
SHARED_LIBS=	gd	20.35
CATEGORIES=	graphics
MASTER_SITES=	${HOMEPAGE}releases/

HOMEPAGE=	http://www.libgd.org/

LIB_DEPENDS=	jpeg.>=62::graphics/jpeg \
		png.>=2::graphics/png

MODULES=	converters/libiconv

WANTLIB=	c expat m z

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

CONFIGURE_STYLE= gnu
CONFIGURE_ARGS+= --without-xpm

FLAVORS=	no_x11
FLAVOR?=	no_x11

.if ${FLAVOR:L:Mno_x11}
CONFIGURE_ARGS+= --without-x --without-freetype --without-fontconfig
WANTLIB+=	freetype fontconfig
.else
USE_X11=	Yes
.endif
USE_LIBTOOL=	Yes

post-install:
	@cd ${WRKSRC} && ./gddemo
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/gd
	cd ${WRKSRC} && ${INSTALL_DATA} demoin.png demoout.png index.html \
	    ${PREFIX}/share/examples/gd

.include <bsd.port.mk>
