# $OpenBSD: Makefile,v 1.3 2002/11/21 01:19:48 naddy Exp $

# Use /usr/ports/net/p5-Socket6 instead
COMES_WITH=             3.6

COMMENT=	"Perl module to support getaddrinfo() and getnameinfo()"

VERSION=	0.17
DISTNAME=	Socket6-${VERSION}
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	net perl5

MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Socket6/}

MAINTAINER=	Peter Galbavy <peter.galbavy@knowtion.net>

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

CONFIGURE_STYLE= perl

.include <bsd.port.mk>
