# $OpenBSD: Makefile,v 1.17 2001/05/06 01:46:43 lebel Exp $

COMMENT=	"secure, reliable, efficient, simple MTA"

DISTNAME=	qmail-1.03
HOMEPAGE=	http://cr.yp.to/qmail.html
CATEGORIES=	mail
NEED_VERSION=	1.402
MAINTAINER=	Camiel Dobbelaar <cd@sentia.nl>

PERMIT_PACKAGE_CDROM=	No
PERMIT_PACKAGE_FTP=	No
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=	ftp://ftp.net.ohio-state.edu/pub/networking/mail/qmail/ \
		ftp://ftp.ntnu.no/pub/unix/mail/qmail/ \
		ftp://ftp.mira.net.au/unix/mail/qmail/ \
		ftp://ftp.id.wustl.edu/pub/qmail/ \
		ftp://mirror.uk.uu.net/pub/qmail/ \
		ftp://ftp.jp.qmail.org/qmail/ \
		ftp://ftp.rifkin.technion.ac.il/pub/qmail/ \
		http://koobera.math.uic.edu/www/software/ \
		http://pobox.com/~djb/software/
MASTER_SITES0=	http://www.nlc.net.au/pub/unix/mail/qmail/

#DISTFILES=	${DISTNAME}${EXTRACT_SUFX} qmail-date-localtime.patch:0
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

# Override prefix here or on the 'make' commandline.
# Using the prefix option of pkg_add will not work, because
# the prefix is hardwired in the qmail installer.
PREFIX?=	/var/qmail
ALL_TARGET=	it man
INSTALL_TARGET=	setup check
IS_INTERACTIVE= "if qmail users/groups do not exist yet"

# We can use inetd instead.
#RUN_DEPENDS=    tcpserver::net/ucspi-tcp

SETUPBINARIES=	${WRKSRC}/dnsfq		${WRKSRC}/dnsip		\
		${WRKSRC}/dnsptr	${WRKSRC}/hostname	\
		${WRKSRC}/ipmeprint	${WRKSRC}/install
SETUPSCRIPTS=	${WRKSRC}/config	${WRKSRC}/config-fast

## flavor
FLAVORS=	localtime tarpit
FLAVOR?=	localtime tarpit

PATCH_LIST=	patch-Makefile  patch-qmail-smtpd-relay-reject \
	patch-Makefile-mandoc \
	patch-long-smtp-session patch-outgoingip \
	patch-dns-packetsz-ckd patch-qmail-local.c \
	patch-0.0.0.0  patch-sendmail-flagf patch-qmailqueue

PATCH_LIST+=	patch-qmail-1.03-rfc2821.diff

.if ${FLAVOR:L:Mtarpi}
PATCH_LIST+=	patch-tarpit
.endif

.if ${FLAVOR:L:Mlocaltime}
PATCH_LIST+=   patch-qmail-date-localtime
#PATCH_DIST_STRIP=	-p1
.endif


pre-build:
	@echo ${CC} ${CFLAGS} > ${WRKSRC}/conf-cc
	@echo ${PREFIX} > ${WRKSRC}/conf-qmail
	@PREFIX=${PREFIX} ${SUDO} ${SH} ${FILESDIR}/USERADD ${DISTNAME} PRE-INSTALL

pre-install:
	# preserve installer with correct prefix so it can be used by the
	# the package later (we create the queue directories with it)
	mv ${WRKSRC}/install ${WRKSRC}/install.nonfake
	# rebuild install utilities with fake prefix
	echo ${PREFIX} > ${WRKSRC}/conf-qmail
	# needed when using a different prefix 
	${INSTALL_DATA_DIR} ${PREFIX}

post-install:
	# restore original installer
	mv ${WRKSRC}/install.nonfake ${WRKSRC}/install
	${INSTALL_PROGRAM_DIR} ${PREFIX}/setup 
	${INSTALL_PROGRAM} ${SETUPBINARIES} ${PREFIX}/setup
	${INSTALL_SCRIPT} ${SETUPSCRIPTS} ${PREFIX}/setup

.include <bsd.port.mk>
