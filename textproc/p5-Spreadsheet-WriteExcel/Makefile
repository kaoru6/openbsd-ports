# $OpenBSD$
# $FreeBSD: ports/textproc/p5-Spreadsheet-WriteExcel/Makefile,v 1.21 2004/11/09 14:05:13 skv Exp $
# Original from: Sergey Skvortsov <skv@protey.ru>

COMMENT=		"Write to a cross-platform Excel binary file"

DISTNAME=	Spreadsheet-WriteExcel-2.11
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	textproc perl5	

HOMEPAGE=	http://search.cpan.org/dist/Spreadsheet-WriteExcel/

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Spreadsheet/}

BUILD_DEPENDS=	::devel/p5-Parse-RecDescent	\
	::devel/p5-Date-Calc
#RUN_DEPENDS=	${BUILD_DEPENDS}

CONFIGURE_STYLE=	perl

#NO_REGRESS=		Yes

.include <bsd.port.mk>
