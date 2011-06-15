--- uip/vmh.c.orig	Thu Jul 22 14:20:14 2010
+++ uip/vmh.c	Thu Jul 22 14:20:33 2010
@@ -116,7 +116,7 @@
 
 #define	XYZ			/* XXX */
 
-#if (defined(__FreeBSD__) && __FreeBSD__ >= 5) || (defined(linux))
+#if (defined(__OpenBSD__) && NCURSES_VERSION_MINOR >= 6)
 struct ldat
 {
- 	NCURSES_CH_T	*text;
+ 	chtype		*text;
