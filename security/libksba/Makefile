# $OpenBSD$

COMMENT=		KSBA is an X.509 Library

VERSION=		1.0.2
DISTNAME=		libksba-${VERSION}
CATEGORIES=		security
SHARED_LIBS=		ksba	17.2

HOMEPAGE=	http://www.gnupg.org/aegypten2/

# ???
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=	ftp://ftp.gnupg.org/gcrypt/libksba/ \
		ftp://gd.tuwien.ac.at/privacy/gnupg/libksba/ \
		http://ftp.planetmirror.com/pub/gnupg/libksba/ \
		http://sunsite.dk/pub/security/gcrypt/libksba/ \
		http://ftp.linux.it/pub/mirrors/gnupg/libksba/
EXTRACT_SUFX=   .tar.bz2

LIB_DEPENDS=		gpg-error::security/libgpg-error

#SEPARATE_BUILD=		simple

CONFIGURE_STYLE=	gnu

.include <bsd.port.mk>
