# $OpenBSD$

COMMENT=		"Compelling replacement for CVS"

DISTNAME=		subversion-0.34.0
CATEGORIES=		devel

HOMEPAGE=		http://subversion.tigris.org/

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

# where the source files and patches can be fetched
#
MASTER_SITES=		http://svn.collab.net/tarballs/

#BUILD_DEPENDS=		???
#RUN_DEPENDS=		???
#LIB_DEPENDS=		???
LIB_DEPENDS=		neon.24:neon->=0.24.0:net/neon
#REGRESS_DEPENDS=	???

#MAKE_FLAGS=		???
#MAKE_ENV=		???
#FAKE_FLAGS=		???
#REGRESS_FLAGS=		???

#USE_GMAKE=		Yes
#USE_LIBTOOL=		Yes

CONFIGURE_STYLE=	gnu
#CONFIGURE_ARGS+=	${CONFIGURE_SHARED}
#CONFIGURE_ENV=		???

# Assume you have one multiple choice flavor: 1 2 3 and switches a b.
# You would write
#
#FLAVORS=
#FLAVOR?=

.include <bsd.port.mk>
