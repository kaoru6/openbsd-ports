# New ports collection makefile for:	qm-poppw
# Version required:	1.0
# Date created:		12 August 1999
# Whom:			Hironori Ikura <hikura@trans-nt.com>
#
# $Id: Makefile,v 1.1 2000/06/22 09:18:44 kaoru Exp $
#

DISTNAME=	qm-poppw-0.3
CATEGORIES=	mail
MASTER_SITES=	ftp://ftp.cas.trans-nt.com/pub/network/qmail/

MAINTAINER=	hikura@trans-nt.com

RUN_DEPENDS=	${QMAIL_DIR}/bin/qmail-popup:${PORTSDIR}/mail/qmail

.if exists(${PREFIX}/qmail/bin/qmail-send)
QMAIL_DIR?=	${PREFIX}/qmail
.else
QMAIL_DIR?=	/var/qmail
.endif

post-install:
	@mkdir -p ${PREFIX}/share/doc/qm-poppw
	@cp ${WRKSRC}/COPYRIGHT ${PREFIX}/share/doc/qm-poppw
	@cp ${WRKSRC}/README.en ${PREFIX}/share/doc/qm-poppw
	@cp ${WRKSRC}/README.ja ${PREFIX}/share/doc/qm-poppw

.include <bsd.port.mk>
