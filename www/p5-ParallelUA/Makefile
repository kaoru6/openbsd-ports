# $OpenBSD$
# $FreeBSD: ports/www/p5-ParallelUA/Makefile,v 1.26 2004/06/13 22:38:09 ache Exp $
# Original from:  ache@freebsd.org

COMMENT=	"Perl5 Parallel LWP User Agent for WWW access"

DISTNAME=	ParallelUserAgent-2.57
PKGNAME=	p5-ParallelUA
CATEGORIES=	www perl5

HOMEPAGE=	http://www.inf.ethz.ch/personal/langhein/ParallelUA/

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=LWP/}

BUILD_DEPENDS=	::www/p5-libwww	\
	::www/p5-URI \
	::www/p5-HTML-Parser
RUN_DEPENDS=	${BUILD_DEPENDS}

CONFIGURE_STYLE=	perl

#NO_REGRESS=		Yes

.include <bsd.port.mk>
