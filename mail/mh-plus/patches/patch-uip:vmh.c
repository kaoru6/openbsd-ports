--- uip/vmh.c.orig	Thu Jul 22 14:20:14 2010
+++ uip/vmh.c	Thu Jul 22 14:20:33 2010
@@ -116,7 +116,6 @@
 
 #define	XYZ			/* XXX */
 
-#if (defined(__FreeBSD__) && __FreeBSD__ >= 5) || (defined(linux))
 struct ldat
 {
 	NCURSES_CH_T	*text;
@@ -124,7 +123,6 @@
 	NCURSES_SIZE_T	lastchar;
 	NCURSES_SIZE_T	oldindex;
 };
-#endif
 
 /*  */
 
