# $OpenBSD$
# $FreeBSD: ports/textproc/p5-Spreadsheet-WriteExcel/Makefile,v 1.21 2004/11/09 14:05:13 skv Exp $
# Original from: Sergey Skvortsov <skv@protey.ru>

COMMENT=		"Write to a cross-platform Excel binary file"

DISTNAME=	Spreadsheet-WriteExcel-2.11
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	textproc perl5	

HOMEPAGE=	http://search.cpan.org/dist/Spreadsheet-WriteExcel/

MAINTAINER=	TAKAHASHI Kaoru <kaoru@kaisei.org>

# Licensing:  This determines what we can distribute.
# When you determine the license type, make sure to look at ALL distfiles.
# Every distfile can have a different license.  The PERMIT_* values are
# determined by the most restrictive license.  If you have two licenses
# that are in conflict, set PERMIT_* based on the most restrictive one.
# Make SURE you get these values right.

# Put a comment there to state what's going on.
# Can be as brief as `BSD' or `GPL', but it'd better be easy to check,
# if someone wants to double-check licensing.
# Perl
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=Yes
PERMIT_DISTFILES_FTP=	Yes

# where the source files and patches can be fetched
#
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Spreadsheet/}

# Dependencies
#
BUILD_DEPENDS=		::devel/p5-Parse-RecDescent	\
		::devel/p5-Date-Calc
#RUN_DEPENDS=		???
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
#USE_X11=		Yes
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
CONFIGURE_STYLE=	perl

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
