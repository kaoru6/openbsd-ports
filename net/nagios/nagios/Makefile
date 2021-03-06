# $OpenBSD: Makefile,v 1.38 2010/08/28 09:20:13 sthen Exp $

COMMENT-main=	host and service monitor
COMMENT-web=	cgis and webpages for nagios

V=		3.2.3
DISTNAME=	nagios-${V}
PKGNAME-main=	nagios-${V}
PKGNAME-web=	nagios-web-${V}
CATEGORIES=	net

HOMEPAGE=	http://www.nagios.org/

MAINTAINER=	Stuart Henderson <sthen@openbsd.org>

# GPL
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MULTI_PACKAGES=	-main -web

MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=nagios/}

BUILD_DEPENDS=	:gd-*:graphics/gd
LIB_DEPENDS=	ltdl.>=4::devel/libtool,-ltdl
RUN_DEPENDS=	:nagios-plugins-*:net/nagios/plugins \
		::www/php5/core

CONFIGURE_STYLE=gnu
CONFIGURE_ARGS+=--datadir=/var/www/nagios \
		--libexecdir=${PREFIX}/libexec/nagios \
		--localstatedir=/var/nagios \
		--sbindir=/var/www/cgi-bin/nagios \
		--with-cgiurl=/cgi-bin/nagios \
		--with-checkresult-dir=/var/spool/nagios \
		--with-command-group=www \
		--with-gd-inc=${LOCALBASE}/include \
		--with-gd-lib=${LOCALBASE}/lib \
		--with-lockfile=/var/run/nagios/nagios.pid \
		--with-nagios-group=_nagios \
		--with-nagios-user=_nagios
CONFIGURE_ENV+=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${X11BASE}/lib"

FLAVORS=	chroot
FLAVOR?=

.if ${FLAVOR:L:Mchroot}
CHROOT=		/var/www
PATCH_LIST=	patch-* chroot-*
.else
CHROOT=
.endif

WANTLIB=	c m

PREFIX-web=	/var/www
# overwrite RUN_DEPENDS in order to only depend on the base package
.if ${FLAVOR:L:Mchroot}
WANTLIB-web=
LIB_DEPENDS-web=
RUN_DEPENDS-web=:nagios-${V}-chroot:net/nagios/nagios,chroot
.else
USE_X11=	Yes
WANTLIB-web=	${WANTLIB} fontconfig freetype jpeg png z
LIB_DEPENDS-web=gd::graphics/gd
RUN_DEPENDS-web=:nagios-${V}-!chroot:net/nagios/nagios
.endif

WANTLIB-main=	${WANTLIB} pthread

NO_REGRESS=	Yes

CFLAGS+=	-D_DIRENT_HAVE_D_TYPE

CONFIG_FILES0=	cgi.cfg httpd.conf mrtg.cfg nagios.cfg resource.cfg
CONFIG_FILES1=	commands.cfg contacts.cfg localhost.cfg printer.cfg switch.cfg \
		templates.cfg timeperiods.cfg windows.cfg
EXDIR=		${PREFIX}/share/examples/nagios

INSTALL_TARGET=	install-unstripped
SUBST_VARS=	CHROOT

post-install:
	${INSTALL_DATA_DIR} ${EXDIR}/objects
	@perl -i -pe "s,%%SYSCONFDIR%%,${SYSCONFDIR}," \
		${WRKSRC}/sample-config/httpd.conf
.for f in ${CONFIG_FILES0}
	${INSTALL_DATA} ${WRKSRC}/sample-config/${f} ${EXDIR}
.endfor
.for f in ${CONFIG_FILES1}
	${INSTALL_DATA} ${WRKSRC}/sample-config/template-object/${f} \
		${EXDIR}/objects
.endfor

.include <bsd.port.mk>
