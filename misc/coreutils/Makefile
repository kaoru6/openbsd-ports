# $OpenBSD$

COMMENT-main= 		GNU versions of core utilities
COMMENT-su=		GNU 'su'

V=			6.9
DISTNAME=		coreutils-$V
CATEGORIES=		misc

PKGNAME-main=		${DISTNAME}
PKGNAME-ls=		gnusu-$V

HOMEPAGE=		http://www.gnu.org/software/coreutils/

# GPL
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

WANTLIB=		c

MASTER_SITES=		${MASTER_SITE_GNU:=coreutils/}

MODULES=		devel/gettext

SEPARATE_BUILD=		concurrent
USE_GMAKE=		Yes
CONFIGURE_STYLE=	gnu
CONFIGURE_ENV=		CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include" \
			CFLAGS="${CFLAGS} -I${LOCALBASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"
CONFIGURE_ARGS=		--program-prefix=g --disable-nls

MULTI_PACKAGES=		-main -su

.include <bsd.port.mk>
