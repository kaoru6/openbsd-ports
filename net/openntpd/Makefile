# $OpenBSD$
# $FreeBSD: ports/net/openntpd/Makefile,v 1.2 2004/07/12 00:14:16 naddy Exp $
# Original from: Christian Weisgerber <naddy@FreeBSD.org>

COMES_WITH=		3.6

COMMENT=                "OpenBSD-3.6's Network Time Protocol daemon"

#
# What port/package will be created
#
DISTNAME=		openntpd-20040718p
#PKGNAME=		openntpd
CATEGORIES=		net

HOMEPAGE=	http://www.openntpd.org/

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

# BSD
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=	http://www.zip.com.au/~dtucker/openntpd/ \
		http://dtucker.freeshell.org/openntpd/ \
		http://www.openntpd.org/dist/portable/

#FETCH_DEPENDS=		???
#BUILD_DEPENDS=		???
#RUN_DEPENDS=		???
#LIB_DEPENDS=		???
#REGRESS_DEPENDS=	???

#MAKE_FLAGS=		???
#MAKE_ENV=		???
#FAKE_FLAGS=		???
#REGRESS_FLAGS=		???

CONFIGURE_STYLE=	gnu
#CONFIGURE_SCRIPT=	??? (if other than configure)
#CONFIGURE_ARGS+=	${CONFIGURE_SHARED}
#CONFIGURE_ENV=		???

# Things that we don't want to do for this port/package
# Generally, DON'T set anything to No if it's not needed.
# The time gained is not worth it.
#
#NO_DEPENDS=		Yes
NO_REGRESS=		Yes

# Overrides for default values
#
#CFLAGS=		???
#LDFLAGS=		???
#MAKE_FILE=		???
#PKG_ARCH=		???
#SCRIPTS_ENV=		???
#WRKDIST=		??? if other than ${WRKDIR}/$DISTNAME
#WRKSRC=		??? if other than ${WRKDIST}
#WRKBUILD=		??? if other than ${WRKSRC}

#ALL_TARGET=		???
#INSTALL_TARGET=	???
#REGRESS_TARGET=	???

.include <bsd.port.mk>
