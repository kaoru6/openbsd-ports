# $OpenBSD$

COMMENT=		IPC library used by GnuPG and gpgme

VERSION=		1.0.4
DISTNAME=		libassuan-${VERSION}
CATEGORIES=		security
#SHARED_LIBS=		assuan	13.0

HOMEPAGE=		http://www.gnu.org/directory/security/libassuan.html

# ???
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=	ftp://ftp.gnupg.org/gcrypt/libassuan/ \
		ftp://gd.tuwien.ac.at/privacy/gnupg/libassuan/ \
		http://ftp.planetmirror.com/pub/gnupg/libassuan/ \
		http://sunsite.dk/pub/security/gcrypt/libassuan/ \
		http://ftp.linux.it/pub/mirrors/gnupg/libassuan/
EXTRACT_SUFX=   .tar.bz2

LIB_DEPENDS=		pth::devel/pth

SEPARATE_BUILD=		simple

CONFIGURE_STYLE=	gnu

.include <bsd.port.mk>
