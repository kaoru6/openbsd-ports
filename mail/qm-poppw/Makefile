# New ports collection makefile for:	qm-poppw
# Version required:	1.0
# Date created:		12 August 1999
# Whom:			Hironori Ikura <hikura@trans-nt.com>
#
# $Id: Makefile,v 1.2 2002/07/01 19:57:36 kaoru Exp $
#

COMMENT=	"qmail-popup passwd checking agent with APOP support"

DISTNAME=	qm-poppw-0.3
CATEGORIES=	mail
MASTER_SITES=	ftp://ftp.cas.trans-nt.com/pub/network/qmail/

MAINTAINER=	hikura@trans-nt.com

.if exists(${PREFIX}/qmail/bin/qmail-send)
QMAIL_DIR?=	${PREFIX}/qmail
.else
QMAIL_DIR?=	/var/qmail
.endif

#RUN_DEPENDS=	${QMAIL_DIR}/bin/qmail-popup::/mail/qmail
RUN_DEPENDS=	qmail-popup::mail/qmail

post-install:
	@mkdir -p ${PREFIX}/share/doc/qm-poppw
	@cp ${WRKSRC}/COPYRIGHT ${PREFIX}/share/doc/qm-poppw
	@cp ${WRKSRC}/README.en ${PREFIX}/share/doc/qm-poppw
	@cp ${WRKSRC}/README.ja ${PREFIX}/share/doc/qm-poppw

.include <bsd.port.mk>
