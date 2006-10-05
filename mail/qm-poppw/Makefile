# New ports collection makefile for:	qm-poppw
# Version required:	1.0
# Date created:		12 August 1999
# Whom:			Hironori Ikura <hikura@trans-nt.com>
#
# $Id: Makefile,v 1.5 2006/10/05 04:15:13 kaoru Exp $
#

COMMENT=	"qmail-popup passwd checking agent with APOP support"

DISTNAME=	qm-poppw-0.3
CATEGORIES=	mail

HOMEPAGE=	http://www.cas.trans-nt.com/~cas/

MAINTAINER=	kaoru@trans-nt.com

PERMIT_PACKAGE_CDROM=  No
PERMIT_PACKAGE_FTP=    No
PERMIT_DISTFILES_CDROM=No
PERMIT_DISTFILES_FTP=  Yes
WANTLIB=	c

MASTER_SITES=	ftp://ftp.cas.trans-nt.com/pub/network/qmail/

#RUN_DEPENDS=	qmail-popup::mail/qmail

#.if exists(${PREFIX}/qmail/bin/qmail-send)
#QMAIL_DIR?=	${PREFIX}/qmail
#.else
#QMAIL_DIR?=	/var/qmail
#.endif

post-install:
	@mkdir -p ${PREFIX}/share/doc/qm-poppw
	${INSTALL_DATA} ${WRKSRC}/COPYRIGHT ${PREFIX}/share/doc/qm-poppw
	${INSTALL_DATA} ${WRKSRC}/README.en ${PREFIX}/share/doc/qm-poppw
	${INSTALL_DATA} ${WRKSRC}/README.ja ${PREFIX}/share/doc/qm-poppw

.include <bsd.port.mk>
