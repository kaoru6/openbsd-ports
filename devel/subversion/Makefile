COMMENT=		"Subversion revision control system"
DISTNAME=		subversion-1.1.1
CATEGORIES=		devel

HOMEPAGE=		http://subversion.tigris.org/

MODULES=		devel/gettext

MAINTAINER=		Michael Paddon <michael@paddon.org>

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM= Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=		http://subversion.tigris.org/tarballs/

LIB_DEPENDS+=		neon.24.7:neon->=0.24.7:net/neon
LIB_DEPENDS+=		db.4:db->=4:databases/db/v4
LIB_DEPENDS+=		expat.4:expat->=4:textproc/expat

SEPARATE_BUILD=		simple
CONFIGURE_ENV+=		INSTALL_DATA= INSTALL_MAN=
CONFIGURE_ENV+=		INSTALL_PROGRAM= INSTALL_SCRIPT=
CONFIGURE_ENV+=		LDFLAGS=-pthread
CONFIGURE_ARGS+=	--with-neon=${LOCALBASE} --with-expat=${LOCALBASE}
CONFIGURE_ARGS+=	--with-berkeley-db=${LOCALBASE} --with-gdbm=no
CONFIGURE_STYLE=	gnu
CONFIGURE_ARGS+=	${CONFIGURE_SHARED}
MAKE_ENV+=		LD_LIBRARY_PATH=${WRKINST}${LOCALBASE}/lib

REGRESS_DEPENDS+=	:python->=2:lang/python/2.2
REGRESS_FLAGS+=		LD_LIBRARY_PATH=`find ${WRKBUILD} -name .libs | tr '\012' :`

post-patch:
	rm -rf ${WRKSRC}/apr-util/autom4te.cache

.include <bsd.port.mk>
