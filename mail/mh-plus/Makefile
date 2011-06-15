# $OpenBSD$
# $FreeBSD: ports/japanese/mh/Makefile,v 1.23 2003/07/19 05:55:00 motoyuki Exp $
# Original from: Akito FUJITA <fujita@zoo.ncl.omron.co.jp>

COMMENT=	"Rand MH mail handling system + Japanese patches"

PKGNAME=	mh-6.8.4
DISTNAME=	mh-6.8.4-JP-3.05
REVISION=	5
CATEGORIES=	mail

HOMEPAGE=	http://media.laic.u-hyogo.ac.jp/%7Ehayashi/internet/mh-plus.html

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

DISTFILES=	${DISTNAME}${EXTRACT_SUFX}	\
	${DISTNAME}-20030114.patch.gz:0	\
	${DISTNAME}-20030326.patch.gz:0	\
	${DISTNAME}-20031023.patch.gz:0	\
	${DISTNAME}-20031106.patch.gz:0

# ???
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

# where the source files and patches can be fetched
#
MASTER_SITES=	ftp://ftp.laic.u-hyogo.ac.jp/pub/net/mh/
MASTER_SITES0=	ftp://ftp.laic.u-hyogo.ac.jp/pub/net/mh/mh-6.8.4-JP-3.05-patch/

PATCHFILES=	${DISTNAME}-20030114.patch.gz	\
	${DISTNAME}-20030326.patch.gz	\
	${DISTNAME}-20031023.patch.gz	\
	${DISTNAME}-20031106.patch.gz

#RUN_DEPENDS=	jless::japanese/less

USE_GROFF=	Yes
CONFIGURE_STYLE=gnu
CONFIGURE_ARGS+=	--enable-batchmode \
	--enable-apop --enable-rpop --with-pager=${PREFIX}/bin/jless

NO_REGRESS=	Yes

.include <bsd.port.mk>
