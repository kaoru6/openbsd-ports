# $OpenBSD$
# $FreeBSD: ports/devel/py-gitosis/Makefile,v 1.3 2010/03/10 13:05:42 miwi Exp $
# Original from:	Douglas Thrift <douglas@douglasthrift.net>

COMMENT=	Software for hosting git repositories

DISTNAME=	gitosis-0.2.20090917
PKGNAME=	py-${DISTNAME}
CATEGORIES=	devel
HOMEPAGE=	http://eagain.net/gitweb/?p=gitosis.git;a=summary

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

# GPL2 or later
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=	http://apt.douglasthrift.net/files/gitosis/ \
	http://code.douglasthrift.net/files/gitosis/
EXTRACT_SUFX=	.tar.bz2

MODULES=	lang/python

MODPY_SETUPTOOLS=	Yes

NO_REGRESS=	Yes

WRKSRC=		${WRKDIR}/gitosis

.include <bsd.port.mk>
