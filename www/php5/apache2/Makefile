# $OpenBSD: Makefile,v 1.55.2.1 2010/05/27 03:55:15 william Exp $

COMMENT=	server-side HTML-embedded scripting language

PKGNAME=	php5-apache2-${V}

DISTFILES=	php-${V}.tar.gz

CONFIGURE_ARGS+=--with-apxs2=/usr/local/sbin/apxs2 \
		--without-mysql \
		--enable-xml \
		--enable-wddx \
		--enable-cli \
		--with-iconv=${LOCALBASE} \
		--with-gettext=${LOCALBASE} \
		--enable-bcmath \
		--enable-session \
		--enable-calendar \
		--enable-ctype \
		--enable-ftp \
		--with-pcre-regex \
		--enable-sockets \
		--enable-sysvmsg \
		--enable-sysvsem \
		--enable-sysvshm \
		--enable-exif \
		--enable-zend-multibyte \
		--without-sqlite \
		--without-pdo-sqlite \
		--with-pear=${LOCALBASE}/share/php5 \
		--enable-fastcgi \
		--enable-force-cgi-redirect \
		--with-config-file-scan-dir=${PHP_CONFIG_PATH}/php5
		
MODULES=	devel/gettext

# some variables to substitute
SUBST_VARS=	PHP_CONFIG_FILE PHP_CONFIG_PATH
PHP_VERSION=	${V}

.for i in TRUEPREFIX PHP_CONFIG_FILE MODULES_DIR PHP_VERSION APACHE_MODULE_DIR
PHPXS_SUBST+= -e 's,${i},${${i}},'
.endfor

WANTLIB=	c crypto m ssl stdc++ z pthread
LIB_DEPENDS=	xml2.>=8::textproc/libxml

pre-fake:
	${INSTALL_DATA_DIR} ${PREFIX}/${APACHE_MODULE_SUBDIR}
INSTALL_TARGET= install-headers install-build install-programs
DESTDIRNAME=	INSTALL_ROOT

pre-configure:
	@perl -pi -e "s,OPENBSD_PEAR_ROOT,'${CHROOT_DIR}/pear',g" \
		${WRKSRC}/scripts/phpize.in \
		${WRKSRC}/scripts/php-config.in

post-install:
	${INSTALL_DATA} ${WRKBUILD}/.libs/libphp5.so \
		${PREFIX}/${APACHE_MODULE_SUBDIR}/libphp5ap2.so

.include <bsd.port.mk>