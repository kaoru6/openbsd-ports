# $OpenBSD: Makefile,v 1.33 2003/10/16 22:22:00 brad Exp $

COMMENT=	"GNU parser generator"

DISTNAME=       bison-1.875
PKGNAME=	${DISTNAME}
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNU:=bison/}

HOMEPAGE=	http://www.gnu.org/software/bison/

MODULES=	gettext

# GPL
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

BUILD_DEPENDS=	:m4->=1.4:devel/m4

# Info included tarball
#MAKE_ENV=	MAKEINFOFLAGS="--no-split"

# XXX workaround gcc bugs on sparc64
.if ${MACHINE_ARCH:Msparc64}
CFLAGS+=	-O0
.endif

CONFIGURE_STYLE= gnu
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"

.include <bsd.port.mk>
