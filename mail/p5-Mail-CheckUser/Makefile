# $OpenBSD$
# $FreeBSD: ports/mail/p5-Mail-CheckUser/Makefile,v 1.1 2004/01/02 23:15:40 erwin Exp $
# Original from: Attila Nagy <bra@fsn.hu>

COMMENT=	"Perl module to check email addresses for validity"

DISTNAME=	Mail-CheckUser-1.21
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	mail perl5	

HOMEPAGE=	http://sourceforge.net/projects/mail-checkuser/

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

# Perl
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Mail/} \
		${MASTER_SITE_SOURCEFORGE:=mail-checkuser/}

BUILD_DEPENDS=	:p5-Net-DNS-*:net/p5-Net-DNS
RUN_DEPENDS=	${BUILD_DEPENDS}

CONFIGURE_STYLE=	perl

#NO_REGRESS=		Yes

.include <bsd.port.mk>
