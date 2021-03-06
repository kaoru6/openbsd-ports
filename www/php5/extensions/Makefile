# $OpenBSD: Makefile,v 1.67 2011/01/17 11:47:19 sthen Exp $

FULLPKGNAME-main=	php5-extensions-${V}
FULLPKGPATH-main=	www/php5/extensions,-main
COMMENT-main=		informational package about PHP5 extensions

MULTI_PACKAGES=	-main

DISTFILES=		php-${V}.tar.gz

# extensions get installed under the apache chroot
PREFIX?=		${CHROOT_DIR}

FLAVORS=		no_x11
FLAVOR?=

#WANTLIB=		stdc++ m

MODULES=		devel/gettext

CONFIGURE_ARGS+=	--with-apxs=/usr/sbin/apxs \
			--with-iconv-dir=${LOCALBASE} \
			--with-iconv=${LOCALBASE} \
			--disable-dom \
			--disable-cgi

GRAPHIC_LIB_DEPENDS =	graphics/jpeg \
			graphics/png
GRAPHIC_WANTLIB =	jpeg>=62 png>=3

GRAPHIC_CONFIG=		--with-jpeg-dir=${LOCALBASE} \
			--with-png-dir=${LOCALBASE} \
			--with-zlib-dir=/usr

# bz2
PSEUDO_FLAVORS+=	no_bz2
.if ${FLAVOR:L:Mno_bz2}
CONFIGURE_ARGS+=	--without-bz2
.else
MULTI_PACKAGES+=	-bz2
COMMENT-bz2=		bzip2 compression extensions for php5
CONFIGURE_ARGS+=	--with-bz2=shared,${LOCALBASE}
LIB_DEPENDS-bz2 =	archivers/bzip2
WANTLIB-bz2 =		bz2>=10
.endif

# curl
PSEUDO_FLAVORS+=	no_curl
.if ${FLAVOR:L:Mno_curl}
CONFIGURE_ARGS+=	--without-curl
.else
MULTI_PACKAGES+=	-curl
COMMENT-curl=		curl URL library extensions for php5
CONFIGURE_ARGS+=	--with-curl=shared,${LOCALBASE}
LIB_DEPENDS-curl =	net/curl
WANTLIB-curl =		curl>=2 crypto idn ssl z
.endif

# dba
PSEUDO_FLAVORS+=	no_dba
.if ${FLAVOR:L:Mno_dba}
CONFIGURE_ARGS+=	--disable-dba
.else
MULTI_PACKAGES+=	-dba
COMMENT-dba=		dba GDBM access extensions for php5
CONFIGURE_ARGS+=	--enable-dba=shared --with-gdbm=${LOCALBASE}
LIB_DEPENDS-dba =	databases/gdbm
WANTLIB-dba =		gdbm>=2
.endif

# dbase
PSEUDO_FLAVORS+=	no_dbase
.if ${FLAVOR:L:Mno_dbase}
CONFIGURE_ARGS+=	--disable-dbase
.else
MULTI_PACKAGES+=	-dbase
COMMENT-dbase=		dBase database access extensions for php5
CONFIGURE_ARGS+=	--enable-dbase=shared
LIB_DEPENDS-dbase =
WANTLIB-dbase =
.endif

# gd
PSEUDO_FLAVORS+=	no_gd
.if ${FLAVOR:L:Mno_gd}
CONFIGURE_ARGS+=	--without-gd --without-xpm-dir --without-ttf \
			--without-freetype-dir 
.else
MULTI_PACKAGES+=	-gd
COMMENT-gd=		image manipulation extensions for php5
LIB_DEPENDS-gd =	${GRAPHIC_LIB_DEPENDS} devel/t1lib
WANTLIB-gd =		t1>=5 z ${GRAPHIC_WANTLIB}
CONFIGURE_ENV+=		CPPFLAGS="${LOCALBASE}/include/libpng"
CONFIGURE_ARGS+=	--with-gd=shared ${GRAPHIC_CONFIG} \
			--with-t1lib=${LOCALBASE} \
			--with-freetype-dir=${X11BASE}

. if ${FLAVOR:L:Mno_x11}
CONFIGURE_ARGS+=	--without-xpm-dir --without-freetype-dir
FULLPKGNAME-gd=		php5-gd-${V}-no_x11
FULLPKGPATH-gd=		www/php5/extensions,-gd,no_x11
. else
FULLPKGNAME-gd=		php5-gd-${V}
CONFIGURE_ARGS+=	--with-xpm-dir=${X11BASE}
WANTLIB-gd +=		X11 Xpm freetype
. endif
.endif

# gmp
PSEUDO_FLAVORS+=	no_gmp
.if ${FLAVOR:L:Mno_gmp}
CONFIGURE_ARGS+=	--without-gmp
.else
MULTI_PACKAGES+=	-gmp
COMMENT-gmp=		gmp math library support for php5
CONFIGURE_ARGS+=	--with-gmp=shared,${LOCALBASE}
LIB_DEPENDS-gmp =	devel/gmp
WANTLIB-gmp =		gmp>=4
.endif

# imap
PSEUDO_FLAVORS+=	no_imap
.if ${FLAVOR:L:Mno_imap}
CONFIGURE_ARGS+=	--without-imap --without-kerberos
.else
MULTI_PACKAGES+=	-imap
COMMENT-imap=		imap, pop3 and nntp extensions for php5
CONFIGURE_ARGS+=	--with-imap=shared,${LOCALBASE} \
			--with-kerberos=/usr --with-imap-ssl
LIB_DEPENDS-imap =	mail/imap-uw,-c-client
WANTLIB-imap =		c-client>=5 gssapi crypto krb5 ssl z

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/etc
	${INSTALL_DATA} ${FILESDIR}/master.passwd.imap ${PREFIX}/etc
	pwd_mkdb -d ${PREFIX}/etc master.passwd.imap
.endif

# ldap
PSEUDO_FLAVORS+=	no_ldap
.if ${FLAVOR:L:Mno_ldap}
CONFIGURE_ARGS+=	--without-ldap
.else
MULTI_PACKAGES+=	-ldap
COMMENT-ldap=		ldap protocol extensions for php5
CONFIGURE_ARGS+=	--with-ldap=shared,${LOCALBASE}
LIB_DEPENDS-ldap =	databases/openldap
WANTLIB-ldap =		ldap>=2 lber
.endif

# mbstring
PSEUDO_FLAVORS+=	no_mbstring
.if ${FLAVOR:L:Mno_mbstring}
CONFIGURE_ARGS+=	--disable-mbstring
.else
MULTI_PACKAGES+=	-mbstring
COMMENT-mbstring=	multibyte characters extensions for php5
CONFIGURE_ARGS+=	--enable-mbstring=shared
LIB_DEPENDS-mbstring =
WANTLIB-mbstring =
.endif

# mcrypt
PSEUDO_FLAVORS+=	no_mcrypt
.if ${FLAVOR:L:Mno_mcrypt}
CONFIGURE_ARGS+=	--without-mcrypt
.else
MULTI_PACKAGES+=	-mcrypt
COMMENT-mcrypt=		mcrypt encryption/decryption extensions for php5
CONFIGURE_ARGS+=	--with-mcrypt=shared,${LOCALBASE}
LIB_DEPENDS-mcrypt =	security/libmcrypt devel/libtool,-ltdl
WANTLIB-mcrypt =	mcrypt ltdl>=1
.endif

# mhash
PSEUDO_FLAVORS+=	no_mhash
.if ${FLAVOR:L:Mno_mhash}
CONFIGURE_ARGS+=	--without-mhash
.else
MULTI_PACKAGES+=	-mhash
COMMENT-mhash=		mhash extensions for php5
CONFIGURE_ARGS+=	--with-mhash=shared,${LOCALBASE}
LIB_DEPENDS-mhash =	security/mhash
WANTLIB-mhash =		mhash>=2
.endif

# mysql
PSEUDO_FLAVORS+=	no_mysql
.if ${FLAVOR:L:Mno_mysql}
CONFIGURE_ARGS+=	--without-mysql
.else
MULTI_PACKAGES+=	-mysql
COMMENT-mysql=		mysql database access extensions for php5
CONFIGURE_ARGS+=	--with-mysql=shared,${LOCALBASE}
LIB_DEPENDS-mysql =	databases/mysql
WANTLIB-mysql =		lib/mysql/mysqlclient>=10
.endif

# mysqli
PSEUDO_FLAVORS+=	no_mysqli
.if ${FLAVOR:L:Mno_mysqli}
CONFIGURE_ARGS+=	--without-mysqli
.else
MULTI_PACKAGES+=	-mysqli
COMMENT-mysqli=		mysql database access extensions for php5
CONFIGURE_ARGS+=	--with-mysqli=shared,${LOCALBASE}/bin/mysql_config
LIB_DEPENDS-mysqli =	databases/mysql
WANTLIB-mysqli =	lib/mysql/mysqlclient>=10 crypto m ssl z
.endif

# ncurses
PSEUDO_FLAVORS+=	no_ncurses
.if ${FLAVOR:L:Mno_ncurses}
CONFIGURE_ARGS+=	--without-ncurses
.else
MULTI_PACKAGES+=	-ncurses
COMMENT-ncurses=	ncurses extensions for php5
CONFIGURE_ARGS+=	--with-ncurses=shared,${LOCALBASE}
LIB_DEPENDS-ncurses =
WANTLIB-ncurses =	ncurses panel
.endif

# odbc
PSEUDO_FLAVORS+=	no_odbc
.if ${FLAVOR:L:Mno_odbc}
CONFIGURE_ARGS+=	--without-iodbc
.else
MULTI_PACKAGES+=	-odbc
COMMENT-odbc=		odbc database access extensions for php5
CONFIGURE_ARGS+=        --with-iodbc=shared
LIB_DEPENDS-odbc =	databases/iodbc
WANTLIB-odbc =		iodbc>=2
.endif

# pdo-mysql
PSEUDO_FLAVORS+=	no_pdo_mysql
.if ${FLAVOR:L:Mno_pdo_mysql}
CONFIGURE_ARGS+=	--without-pdo-mysql
.else
MULTI_PACKAGES+=	-pdo_mysql
COMMENT-pdo_mysql=	PDO mysql database access extensions for php5
CONFIGURE_ARGS+=	--with-pdo-mysql=shared,${LOCALBASE}
LIB_DEPENDS-pdo_mysql =	databases/mysql
WANTLIB-pdo_mysql =	lib/mysql/mysqlclient>=10 crypto m ssl z
.endif

# pdo-pgsql
PSEUDO_FLAVORS+=	no_pdo_pgsql
.if ${FLAVOR:L:Mno_pdo_pgsql}
CONFIGURE_ARGS+=	--without-pdo-pgsql
.else
MULTI_PACKAGES+=	-pdo_pgsql
COMMENT-pdo_pgsql=	PDO database access extensions for php5
CONFIGURE_ARGS+=        --with-pdo-pgsql=shared,${LOCALBASE}
LIB_DEPENDS-pdo_pgsql =	databases/postgresql
WANTLIB-pdo_pgsql =	pq>=2
.endif

# pdo-sqlite
PSEUDO_FLAVORS+=	no_pdo_sqlite
.if ${FLAVOR:L:Mno_pdo_sqlite}
CONFIGURE_ARGS+=	--without-pdo-sqlite
.else
MULTI_PACKAGES+=	-pdo_sqlite
COMMENT-pdo_sqlite=	PDO sqlite database access extensions for php5
CONFIGURE_ARGS+=	--with-pdo-sqlite=shared,${LOCALBASE} --enable-sqlite-utf8
LIB_DEPENDS-pdo_sqlite=	databases/sqlite3
WANTLIB-pdo_sqlite =	sqlite3>=8
.endif

# pgsql
PSEUDO_FLAVORS+=	no_pgsql
.if ${FLAVOR:L:Mno_pgsql}
CONFIGURE_ARGS+=	--without-pgsql
.else
MULTI_PACKAGES+=	-pgsql
COMMENT-pgsql=		pgsql database access extensions for php5
CONFIGURE_ARGS+=	--with-pgsql=shared,${LOCALBASE}
LIB_DEPENDS-pgsql =	databases/postgresql
WANTLIB-pgsql =		pq>=2
.endif

# pspell
PSEUDO_FLAVORS+=	no_pspell
.if ${FLAVOR:L:Mno_pspell}
CONFIGURE_ARGS+=	--without-pspell
.else
MULTI_PACKAGES+=	-pspell
COMMENT-pspell=		pspell library extensions for php5
CONFIGURE_ARGS+=	--with-pspell=shared,${LOCALBASE}
LIB_DEPENDS-pspell =	textproc/aspell/core
WANTLIB-pspell =	aspell>=16 pspell>=16
.endif

# shmop
PSEUDO_FLAVORS+=	no_shmop
.if ${FLAVOR:L:Mno_shmop}
CONFIGURE_ARGS+=	--disable-shmop
.else
MULTI_PACKAGES+=	-shmop
COMMENT-shmop=		shared memory extensions for php5
CONFIGURE_ARGS+=	--enable-shmop=shared
LIB_DEPENDS-shmop =
WANTLIB-shmop =
.endif

# soap
PSEUDO_FLAVORS+=	no_soap
.if ${FLAVOR:L:Mno_soap}
CONFIGURE_ARGS+=	--disable-soap
.else
MULTI_PACKAGES+=	-soap
COMMENT-soap=		SOAP functions for php5
CONFIGURE_ARGS+=	--enable-soap=shared
LIB_DEPENDS-soap =
WANTLIB-soap =		m xml2 z iconv
.endif

# snmp
PSEUDO_FLAVORS+=	no_snmp
.if ${FLAVOR:L:Mno_snmp}
CONFIGURE_ARGS+=	--without-snmp
.else
MULTI_PACKAGES+=	-snmp
COMMENT-snmp=		snmp protocol extensions for php5
CONFIGURE_ARGS+=	--with-snmp=shared,${LOCALBASE} --enable-ucd-snmp-hack
LIB_DEPENDS-snmp =	net/net-snmp
WANTLIB-snmp =		crypto netsnmp>=6.2
.endif

# sqlite
PSEUDO_FLAVORS+=	no_sqlite
.if ${FLAVOR:L:Mno_sqlite}
CONFIGURE_ARGS+=	--without-sqlite
.else
MULTI_PACKAGES+=	-sqlite
COMMENT-sqlite=		sqlite database access extensions for php5
CONFIGURE_ARGS+=	--with-sqlite=shared,${LOCALBASE} --enable-sqlite-utf8
LIB_DEPENDS-sqlite =	databases/sqlite
WANTLIB-sqlite =	sqlite>=8
.endif

# sybase-ct
PSEUDO_FLAVORS+=	no_sybase_ct
.if ${FLAVOR:L:Mno_sybase_ct}
CONFIGURE_ARGS+=	--without-sybase-ct
.else
MULTI_PACKAGES+=	-sybase_ct
COMMENT-sybase_ct=	sybase database access extensions for php5
CONFIGURE_ARGS+=        --with-sybase-ct=shared,${LOCALBASE}
LIB_DEPENDS-sybase_ct =	databases/freetds
WANTLIB-sybase_ct =	ct
.endif

# pdo-dblib
PSEUDO_FLAVORS+=	no_pdo_dblib
.if ${FLAVOR:L:Mno_pdo_dblib}
CONFIGURE_ARGS+=	--without-pdo-dblib
.else
MULTI_PACKAGES+=	-pdo_dblib
COMMENT-pdo_dblib=	PDO DB-LIB support for php5
CONFIGURE_ARGS+=        --with-pdo-dblib=shared,${LOCALBASE}
LIB_DEPENDS-pdo_dblib=	databases/freetds
WANTLIB-pdo_dblib =	sybdb>=6
.endif

# mssql
PSEUDO_FLAVORS+=	no_mssql
.if ${FLAVOR:L:Mno_mssql}
CONFIGURE_ARGS+=	--without-mssql
.else
MULTI_PACKAGES+=	-mssql
COMMENT-mssql=		microsoft sql access extensions for php5
CONFIGURE_ARGS+=        --with-mssql=shared,${LOCALBASE}
LIB_DEPENDS-mssql =	databases/freetds
WANTLIB-mssql =		sybdb>=6
.endif

# tidy
PSEUDO_FLAVORS+=	no_tidy
.if ${FLAVOR:L:Mno_tidy}
CONFIGURE_ARGS+=	--without-tidy
.else
MULTI_PACKAGES+=	-tidy
COMMENT-tidy=		tidy HTML cleaner bindings
CONFIGURE_ARGS+=	--with-tidy=shared
LIB_DEPENDS-tidy =	www/tidy
WANTLIB-tidy =		tidy
.endif

# xml-rpc
PSEUDO_FLAVORS+=	no_xmlrpc
.if ${FLAVOR:L:Mno_xmlrpc}
CONFIGURE_ARGS+=	--without-xmlrpc
.else
MULTI_PACKAGES+=	-xmlrpc
COMMENT-xmlrpc=		XML RPC functions for php5
CONFIGURE_ARGS+=	--with-xmlrpc=shared
LIB_DEPENDS-xmlrpc =
WANTLIB-xmlrpc =	iconv m xml2 z
.endif

# xsl
PSEUDO_FLAVORS+=	no_xsl
.if ${FLAVOR:L:Mno_xsl}
CONFIGURE_ARGS+=	--without-xsl
.else
MULTI_PACKAGES+=	-xsl
COMMENT-xsl=		XSL functions for php5
CONFIGURE_ARGS+=	--with-xsl=shared --enable-dom
LIB_DEPENDS-xsl=	textproc/libxslt
WANTLIB-xsl=		xslt>=3 exslt iconv m xml2 z
.endif

.for i in ${MULTI_PACKAGES}
FULLPKGNAME${i} ?=	php5${i}-${V}
FULLPKGPATH${i} ?=	www/php5/extensions,${i}
RUN_DEPENDS${i}=	php5-core-${V}:www/php5/core
MODULE_NAME${i}=	${i:S/-//g}
.endfor

MESSAGE=		${PKGDIR}/MESSAGE
UNMESSAGE=		${PKGDIR}/UNMESSAGE

SUBST_VARS=		MODULE_NAME PHP_CONFIG_FILE V

LIB_DEPENDS-main=
MESSAGE-main=		${PKGDIR}/DESCR-main
WANTLIB-main=

BUILD_DEPENDS+=		textproc/libxml

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/${MODULES_SUBDIR}
	${INSTALL_DATA_DIR} ${PREFIX}/conf/php5.sample
.for m in ${MULTI_PACKAGES:N-main:S/-//g}
	${INSTALL_DATA} ${WRKBUILD}/modules/${m}.so \
		${PREFIX}/${MODULES_SUBDIR}/${m}.so
	@echo "extension=${m}.so" > \
		${PREFIX}/conf/php5.sample/${m}.ini
.endfor

.include <bsd.port.mk>
