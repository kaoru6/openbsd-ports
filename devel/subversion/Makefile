COMMENT=		"Subversion revision control system"
DISTNAME=		subversion-1.0.4
CATEGORIES=		devel

HOMEPAGE=		http://subversion.tigris.org/
MAINTAINER=		Michael Paddon <michael@paddon.org>

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM= Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=		http://subversion.tigris.org/tarballs/

LIB_DEPENDS+=		neon.24:neon->=0.24:net/neon
LIB_DEPENDS+=		db.4:db->=4:databases/db/v4
LIB_DEPENDS+=		expat.4:expat->=4:textproc/expat

SEPARATE_BUILD=		simple
CONFIGURE_ENV+=		INSTALL_DATA= INSTALL_MAN=
CONFIGURE_ENV+=		INSTALL_PROGRAM= INSTALL_SCRIPT=
CONFIGURE_ENV+=		LDFLAGS=-pthread
CONFIGURE_ARGS+=	--with-neon=/usr/local --with-expat=/usr/local
CONFIGURE_ARGS+=	--with-berkeley-db=${LOCALBASE}/include:${LOCALBASE}/lib
CONFIGURE_STYLE=	gnu
CONFIGURE_ARGS+=	${CONFIGURE_SHARED}
MAKE_ENV+=		LD_LIBRARY_PATH=${WRKINST}${LOCALBASE}/lib

REGRESS_DEPENDS+=	:python->=2:lang/python/2.2
REGRESS_FLAGS+=		LD_LIBRARY_PATH=`find ${WRKBUILD} -name .libs | tr '\012' :`

.include <bsd.port.mk>
