# $OpenBSD$

COMMENT=	module that embeds a Python interpreter into Apache2

DISTNAME=	mod_python-3.3.1
PKGNAME=	ap2-${DISTNAME}
CATEGORIES=	www net

HOMEPAGE=	http://www.modpython.org/

WANTLIB=	m util
MASTER_SITES=	${MASTER_SITE_APACHE:=httpd/modpython/}
EXTRACT_SUFX=	.tgz

MAINTAINER=	Matt Jibson <matt.jibson@gmail.com>

# Apache Software License
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MODULES=        lang/python

CONFIGURE_STYLE=	gnu
CONFIGURE_ARGS+=	--with-apxs=${LOCALBASE}/sbin/apxs2 \
			--with-python=${LOCALBASE}/bin/python${MODPY_VERSION}
USE_GMAKE=		Yes

RUN_DEPENDS=		::www/apache-httpd
BUILD_DEPENDS=		${RUN_DEPENDS}

.include <bsd.port.mk>
