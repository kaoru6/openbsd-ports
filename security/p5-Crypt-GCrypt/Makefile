# $OpenBSD$

COMMENT=	"Perl interface to the GNU Cryptographic library"

DISTNAME=	Crypt-GCrypt-1.16
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	security perl5

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

# Perl
PERMIT_PACKAGE_CDROM=   Yes
PERMIT_PACKAGE_FTP=     Yes
PERMIT_DISTFILES_CDROM= Yes
PERMIT_DISTFILES_FTP=   Yes

MODULES=	cpan
LIB_DEPENDS=	gcrypt::security/libgcrypt
WANTLIB=	gcrypt

CONFIGURE_ARGS+=	GCRYPTLIBPATH=${LOCALBASE}/lib \
			GCRYPTINCPATH=${LOCALBASE}/include

NOT_FOR_ARCHS=      ${NO_SHARED_ARCHS}

post-extract:
	@rm -f ${WRKSRC}/._Makefile.PL
	@rm -f ${WRKSRC}/._GCrypt.pm
	@rm -f ${WRKSRC}/._GCrypt.xs

.include <bsd.port.mk>
