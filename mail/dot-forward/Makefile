# $OpenBSD: Makefile,v 1.15 2001/05/06 01:46:07 lebel Exp $

COMMENT=	"sendmail-style .forward support for qmail"

DISTNAME=	dot-forward-0.71
HOMEPAGE=	http://cr.yp.to/dot-forward.html
CATEGORIES=	mail
NEED_VERSION=	1.402
MAINTAINER=	Camiel Dobbelaar <cd@sentia.nl>

MASTER_SITES=	http://cr.yp.to/software/ \
		ftp://ftp.net.ohio-state.edu/pub/networking/mail/qmail/ \
		ftp://ftp.ntnu.no/pub/unix/mail/qmail/ \
		ftp://ftp.mira.net.au/unix/mail/qmail/ \
		ftp://ftp.id.wustl.edu/pub/qmail/ \
		ftp://mirror.uk.uu.net/pub/qmail/ \
		ftp://ftp.jp.qmail.org/qmail/ \
		http://ftp.rifkin.technion.ac.il/pub/qmail/ \
		http://koobera.math.uic.edu/www/software/

PERMIT_PACKAGE_CDROM=	No
PERMIT_PACKAGE_FTP=	No
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

PREFIX=		/var/qmail
ALL_TARGET=	default
INSTALL_TARGET=	setup check

RUN_DEPENDS=	${PREFIX}/bin/qmail-local::mail/qmail

pre-build:
	@echo ${CC} ${CFLAGS} > ${WRKSRC}/conf-cc
	@echo ${PREFIX} > ${WRKSRC}/conf-qmail

pre-install:
	@echo ${PREFIX} > ${WRKSRC}/conf-qmail

.include <bsd.port.mk>
