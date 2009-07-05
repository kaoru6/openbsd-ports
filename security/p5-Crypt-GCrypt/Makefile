# $OpenBSD$

SHARED_ONLY=	Yes

COMMENT=	"Perl interface to the GNU Cryptographic library"

DISTNAME=	Crypt-GCrypt-1.21
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	security perl5

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

# Perl
PERMIT_PACKAGE_CDROM=   Yes
PERMIT_PACKAGE_FTP=     Yes
PERMIT_DISTFILES_CDROM= Yes
PERMIT_DISTFILES_FTP=   Yes

MODULES=	cpan
LIB_DEPENDS=	gcrypt.>=14::security/libgcrypt
WANTLIB=	gcrypt

CONFIGURE_ARGS+=	GCRYPTLIBPATH=${LOCALBASE}/lib \
			GCRYPTINCPATH=${LOCALBASE}/include

NOT_FOR_ARCHS=      ${NO_SHARED_ARCHS}

.include <bsd.port.mk>
