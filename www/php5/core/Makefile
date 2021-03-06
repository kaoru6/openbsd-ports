# $OpenBSD: Makefile,v 1.64 2011/01/03 15:03:03 robert Exp $

# doesn't set USE_LIBTOOL but use the bundled one because it needs some
# specific options we don't have.

COMMENT-main=	server-side HTML-embedded scripting language
COMMENT-fastcgi=stand-alone FastCGI version of PHP

PKGNAME=	php5-core-${V}
PKGNAME-main=	php5-core-${V}
PKGNAME-fastcgi=php5-fastcgi-${V}

DISTFILES=	php-${V}.tar.gz

MULTI_PACKAGES=	-main -fastcgi

CONFIGURE_ARGS+=--with-apxs=/usr/sbin/apxs \
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
USE_GROFF =	Yes
		
MODULES=	devel/gettext

# some variables to substitute
SUBST_VARS=	PHP_CONFIG_FILE PHP_CONFIG_PATH
PHP_VERSION=	${V}

.for i in TRUEPREFIX PHP_CONFIG_FILE MODULES_DIR PHP_VERSION APACHE_MODULE_DIR
PHPXS_SUBST+= -e 's,${i},${${i}},'
.endfor

WANTLIB=	c crypto m ssl z pthread xml2>=8
LIB_DEPENDS=	textproc/libxml

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
		${PREFIX}/${APACHE_MODULE_SUBDIR}
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/php5
	${INSTALL_PROGRAM} ${WRKBUILD}/sapi/cli/php ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKBUILD}/sapi/cgi/php-cgi ${PREFIX}/bin/php-fastcgi
	${INSTALL_DATA} ${FILESDIR}/php5.conf \
		${PREFIX}/share/examples/php5/php5.conf
	@perl -pi -e "s,!!PREFIX!!,${TRUEPREFIX},g" \
		${PREFIX}/share/examples/php5/php5.conf
	
.for i in dist recommended
	@sed -e 's,MODULES_DIR,${MODULES_DIR},' \
	     -e 's,OPENBSD_INCLUDE_PATH,/pear/lib:${CHROOT_DIR}/pear/lib,' \
		<${WRKSRC}/php.ini-${i} \
		>${PREFIX}/share/examples/php5/php.ini-${i}
.endfor
	${INSTALL_MAN} ${WRKSRC}/sapi/cli/php.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
