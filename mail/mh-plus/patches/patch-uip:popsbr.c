--- uip/popsbr.c.orig	Mon Apr  2 19:50:01 2001
+++ uip/popsbr.c	Sat Aug 24 14:39:26 2013
@@ -63,7 +63,7 @@
 static	int	command(), multiline();
 #endif
 
-static int	getline();
+static int	getline_mh();
 static putline();
 
 #ifdef NNTP
@@ -176,7 +176,7 @@
 
     (void) signal (SIGPIPE, SIG_IGN);
 
-    switch (getline (response, sizeof response, input)) {
+    switch (getline_mh (response, sizeof response, input)) {
 	case OK: 
 	    if (poprint)
 		fprintf (stderr, "<--- %s\n", response);
@@ -619,7 +619,7 @@
     if (putline (buffer, output) == NOTOK)
 	return NOTOK;
 
-    switch (getline (response, sizeof response, input)) {
+    switch (getline_mh (response, sizeof response, input)) {
 	case OK: 
 	    if (poprint)
 		fprintf (stderr, "<--- %s\n", response);
@@ -645,7 +645,7 @@
 #endif
     char    buffer[BUFSIZ + TRMLEN];
 
-    if (getline (buffer, sizeof buffer, input) != OK)
+    if (getline_mh (buffer, sizeof buffer, input) != OK)
 	return NOTOK;
 #ifdef	DEBUG
     if (poprint)
@@ -665,7 +665,7 @@
 
 /*  */
 
-static int  getline (s, n, iop)
+static int getline_mh (s, n, iop)
 char   *s;
 int     n;
 FILE * iop;
