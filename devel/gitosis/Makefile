# $OpenBSD$
# Original from:	TAKAHASHI Kaoru <kaoru@kaisei.org>

COMMENT=	git repository hosting application

DISTNAME=	gitosis-0.2.20090917
CATEGORIES=	devel
HOMEPAGE=	http://eagain.net/gitweb/?p=gitosis.git;a=summary

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

# GPL2 or later
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=	http://code.douglasthrift.net/files/gitosis/
EXTRACT_SUFX=	.tar.bz2

MODULES=	lang/python

BUILD_DEPENDS=	::devel/py-setuptools
#RUN_DEPENDS =          ???
#LIB_DEPENDS =          ???
#REGRESS_DEPENDS =      ???


#NO_BUILD =		Yes
NO_REGRESS =		Yes

WRKSRC=	${WRKDIR}/gitosis
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

#do-build:
#	cd ${WRKSRC} && python setup.py


.include <bsd.port.mk>
