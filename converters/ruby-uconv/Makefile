# $OpenBSD$

SHARED_ONLY=	Yes

COMMENT=	Unicode conversion library for Ruby

DISTNAME=	uconv-0.4.12
PKGNAME=	ruby-${DISTNAME}
CATEGORIES=	converters

HOMEPAGE=	http://www.yoshidam.net/Ruby_ja.html#uconv

MAINTAINER=	kaoru@kaisei.org

# Ruby License
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

WANTLIB=	c m

MASTER_SITES=	http://www.yoshidam.net/

MODULES=	lang/ruby
LIB_DEPENDS=	${MODRUBY_LIB_DEPENDS}

CONFIGURE_STYLE=	extconf

WRKSRC=		${WRKDIR}/uconv

.include <bsd.port.mk>
