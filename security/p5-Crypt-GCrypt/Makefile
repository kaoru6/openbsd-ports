# $OpenBSD$

COMMENT=	"Perl interface to the GNU Cryptographic library"

DISTNAME=	Crypt-GCrypt-1.16
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	security perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Crypt/}

LIB_DEPENDS=	gcrypt::security/libgcrypt
WANTLIB=	gcrypt

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

# Perl
PERMIT_PACKAGE_CDROM=   Yes
PERMIT_PACKAGE_FTP=     Yes
PERMIT_DISTFILES_CDROM= Yes
PERMIT_DISTFILES_FTP=   Yes

CONFIGURE_STYLE=	perl
CONFIGURE_ARGS+=	GCRYPTLIBPATH=${LOCALBASE}/lib \
			GCRYPTINCPATH=${LOCALBASE}/include

NOT_FOR_ARCHS=      ${NO_SHARED_ARCHS}

post-extract:
	@rm -f ${WRKSRC}/._Makefile.PL

.include <bsd.port.mk>
