# $OpenBSD$
# $FreeBSD: ports/japanese/mh/Makefile,v 1.23 2003/07/19 05:55:00 motoyuki Exp $
# Original from: Akito FUJITA <fujita@zoo.ncl.omron.co.jp>

#
# Very short description of the package, 60 chars max
#
COMMENT=		"Rand MH mail handling system + Japanese patches"

#
# What port/package will be created
#
DISTNAME=	mh-6.8.4-JP-3.05
CATEGORIES=	mail

HOMEPAGE=	http://media.laic.u-hyogo.ac.jp/%7Ehayashi/internet/mh-plus.html

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

DISTFILES=	${DISTNAME}${EXTRACT_SUFX}	\
	${DISTNAME}-20030114.patch.gz:0	\
	${DISTNAME}-20030326.patch.gz:0	\
	${DISTNAME}-20031023.patch.gz:0	\
	${DISTNAME}-20031106.patch.gz:0

# ???
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

# where the source files and patches can be fetched
#
MASTER_SITES=	ftp://komadori.planet.sci.kobe-u.ac.jp/pub/MH/ \
	ftp://ftp.chem.eng.himeji-tech.ac.jp/pub/net/mh/
MASTER_SITES0=	 ftp://ftp.chem.eng.himeji-tech.ac.jp/pub/net/mh/mh-6.8.4-JP-3.05-patch/

PATCHFILES=	${DISTNAME}-20030114.patch.gz	\
	${DISTNAME}-20030326.patch.gz	\
	${DISTNAME}-20031023.patch.gz	\
	${DISTNAME}-20031106.patch.gz

# Dependencies
#
#BUILD_DEPENDS=		???
RUN_DEPENDS=	jless::japanese/less
#LIB_DEPENDS=		???
#REGRESS_DEPENDS=	???

#MAKE_FLAGS=		???
#MAKE_ENV=		???
#FAKE_FLAGS=		???
#REGRESS_FLAGS=		???

# build/configuration variables
#
#SEPARATE_BUILD=	concurrent  (build simultaneously on all arches)
#SEPARATE_BUILD=	simple  (configure/build still recreates files in source)
#USE_GMAKE=		Yes
# Programs that come with libtool should NOT use this option.
# Instead they should have the appropriate patches added if needed
# to bring the OpenBSD support up to spec.
#USE_LIBTOOL=		Yes
# Set CONFIGURE_STYLE to value corresponding to some standard configuration
# 	  perl [modbuild]: perl's MakeMaker Makefile.PL (modbuild: perl's
#	  Module::Build Build.PL)
# 	  gnu [autoconf] [old] [dest]: gnu style configure (old: no
# 	  sysconfdir), (dest: add DESTDIR, does not handle it),
# 	  (autoconf: needed by port, implies gnu)
# 	XXX: cygnus products do NOT use autoconf for making the main
# 		configure from configure.in
# 	  imake [noman]: port uses imake for configuration.
#   	  (noman: no man page installation)
# 	  simple: port has its own configure script
CONFIGURE_STYLE=gnu
#CONFIGURE_SCRIPT=	??? (if other than configure)
CONFIGURE_ARGS+=	--enable-batchmode \
	--enable-apop --enable-rpop --with-pager=${PREFIX}/bin/jless
#CONFIGURE_ENV=		???

# Is the build automagic or is it interactive
#
#IS_INTERACTIVE=	Yes
#REGRESS_IS_INTERACTIVE=Yes

# Assume you have one multiple choice flavor: 1 2 3 and switches a b.
# You would write
#
#FLAVORS=1 2 3 a b
#FLAVOR?=
# grab multiple choice value
#CHOICE=${FLAVOR:L:Na:Nb}
# check that CHOICE is 1 OR 2 OR 3, or error out
#.if ${CHOICE} == "1"
# code for 1
#.elif ${CHOICE} == "2"
# code for 2
#.elif ${CHOICE} == "3"
# code for 3
#.else
#ERRORS+= "Fatal: Conflicting flavor: ${FLAVOR}"
#.endif
# check for switches
#.if ${FLAVOR:L:Ma}
# code for a
#.endif
#.if ${FLAVOR:L:Mb}
# code for b
#.endif

# Things that we don't want to do for this port/package
# Generally, DON'T set anything to No if it's not needed.
# The time gained is not worth it.
#
#NO_DEPENDS=		Yes
#NO_CHECKSUM=		Yes
#NO_BUILD=		Yes
#NO_PKG_REGISTER=	Yes
#NO_REGRESS=		Yes

# Overrides for default values
#
#CFLAGS=		???
#LDFLAGS=		???
#MAKE_FILE=		???
#PKG_ARCH=		???
#SCRIPTS_ENV=		???
#WRKDIST=		??? if other than ${WRKDIR}/$DISTNAME
#WRKSRC=		??? if other than ${WRKDIST}
#WRKBUILD=		??? if other than ${WRKSRC}

#ALL_TARGET=		???
#INSTALL_TARGET=	???
#REGRESS_TARGET=	???

.include <bsd.port.mk>
