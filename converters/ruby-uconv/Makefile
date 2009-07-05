# $OpenBSD$

COMMENT=	"Unicode conversion library for Ruby"

SHARED_ONLY=	Yes

DISTNAME=	uconv-0.4.12
PKGNAME=	ruby-${DISTNAME}
CATEGORIES=	converters japanese ruby

MASTER_SITES=	http://www.yoshidam.net/
HOMEPAGE=	http://www.yoshidam.net/Ruby_ja.html#uconv

MAINTAINER=	kaoru@kaisei.org

MODULES=                lang/ruby

LIB_DEPENDS+=		ruby.>=1.84::lang/ruby

CONFIGURE_STYLE=	extconf

# Ruby license
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes
WANTLIB=	c m

WRKSRC=		${WRKDIR}/uconv

.include <bsd.port.mk>
