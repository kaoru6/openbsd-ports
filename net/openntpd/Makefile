# $OpenBSD$
# $FreeBSD: ports/net/openntpd/Makefile,v 1.2 2004/07/12 00:14:16 naddy Exp $
# Original from: Christian Weisgerber <naddy@FreeBSD.org>

COMES_WITH=		3.6

COMMENT=                "OpenBSD-3.6's Network Time Protocol daemon"

#
# What port/package will be created
#
DISTNAME=		openntpd-20040713p
#PKGNAME=		openntpd
CATEGORIES=		net

HOMEPAGE=	http://dtucker.freeshell.org/

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

# Licensing:  This determines what we can distribute.
# When you determine the license type, make sure to look at ALL distfiles.
# Every distfile can have a different license.  The PERMIT_* values are
# determined by the most restrictive license.  If you have two licenses
# that are in conflict, set PERMIT_* based on the most restrictive one.
# Make SURE you get these values right.

# BSD
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

# where the source files and patches can be fetched
#
MASTER_SITES=	http://www.zip.com.au/~dtucker/openntpd/ \
		http://dtucker.freeshell.org/openntpd/
#MASTER_SITES=		${MASTER_SITE_foo:=subdir/}
# if more master sites are needed...
#MASTER_SITES0=
# ...
#DISTFILES=		???
#EXTRACT_ONLY=		???
#EXTRACT_SUFX=		.tar.Z

#DIST_SUBDIR=		???

# PATCHFILES are also retrieved from MASTER_SITES*
#PATCHFILES=		???
#PATCH_DIST_STRIP=	-p0

# Dependencies
#
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
#NO_REGRESS=		Yes

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
