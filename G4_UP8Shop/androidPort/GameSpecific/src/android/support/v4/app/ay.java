// Decompiled from classes.dex (SourceFile: ay.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

class ay extends android.support.v4.app.ShareCompat$ShareCompatImplBase {
    // Methods
    ay()
    {
      super();
    }

    public final void a(android.view.MenuItem p0, android.support.v4.app.ShareCompat$IntentBuilder p1)
    {
      ShareCompatICS.configureMenuItem(p0, p1.b(), p1.a());
      if ( this.a(p0) )
        p0.setIntent(p1.c());
    }

    boolean a(android.view.MenuItem p0)
    {
      return !p0.hasSubMenu();
    }

}
