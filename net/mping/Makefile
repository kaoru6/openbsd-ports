# New ports collection makefile for:	mping
# Date Created:				19 Dec 2005
# Whom:					Babak Farrokhi <babak@farrokhi.net>
#
# $FreeBSD: ports/net/mping/Makefile,v 1.4 2009/07/11 15:52:01 miwi Exp $
#

COMMENT=	"Mping network statistics collector"

DISTNAME=	mping-2.01
CATEGORIES=	net ipv6

MASTER_SITES=	http://mping.uninett.no/
HOMEPAGE=	${MASTER_SITES}
MAINTAINER=	ports@FreeBSD.org

CONFIGURE_STYLE=	gnu
USE_GMAKE=	Yes

CONFIGURE_ARGS+= ${CONFIGURE_SHARED}

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

.include <bsd.port.mk>
