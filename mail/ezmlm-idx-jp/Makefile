# $OpenBSD: Makefile,v 1.7 2000/03/28 07:22:31 camield Exp $

DISTNAME=	ezmlm-idx-0.53.40-tnt-1
HOMEPAGE=	http://ftp.ezmlm.org
CATEGORIES=	mail
NEED_VERSION=	1.230
MAINTAINER=	cas@trans-nt.com

MASTER_SITES=	http://ftp.ezmlm.org/pub/patches/ \
		ftp://ftp.jp.qmail.org/ezmlm/
DISTFILES=	ezmlm-0.53.tar.gz ezmlm-idx-0.40.tar.gz



PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes


# choose one of cz, da, de, en_US, fr, jp, pl, pt_BR, sv.
DEFAULT_IDX_LANG=	jp


QMAILDIR=	/var/qmail
NO_CONFIGURE=	Yes
ALL_TARGET=	default man ${DEFAULT_IDX_LANG}
INSTALL_TARGET=	setup WRKINST=${WRKINST}

FAKE=	Yes

RUN_DEPENDS=	${QMAILDIR}/bin/qmail-local::mail/qmail

post-extract:
	@echo "merging ezmlm and idx..."
	@rm -rf ${WRKDIST}
	@mkdir ${WRKDIST}
	@cp -r ${WRKDIR}/ezmlm-0.53/* ${WRKDIST}
	@cp -r ${WRKDIR}/ezmlm-idx-0.40/* ${WRKDIST}
	@cd ${WRKDIST}; ${PATCH} < idx.patch

pre-build:
	@echo ${CC} ${CFLAGS} > ${WRKSRC}/conf-cc
	@echo ${PREFIX}/bin > ${WRKSRC}/conf-bin
	@echo ${PREFIX}/man > ${WRKSRC}/conf-man
	@echo ${QMAILDIR} > ${WRKSRC}/conf-qmail

.include <bsd.port.mk>
