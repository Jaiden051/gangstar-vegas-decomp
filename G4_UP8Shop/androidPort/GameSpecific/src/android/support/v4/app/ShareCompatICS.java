// Decompiled from classes.dex (SourceFile: ShareCompatICS.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

class ShareCompatICS {
    // Fields
    private static java.lang.String a;

    // Methods
    ShareCompatICS()
    {
      super();
    }

    public static void configureMenuItem(
            android.view.MenuItem p0,
            android.app.Activity p1,
            android.content.Intent p2)
    {
      android.view.ActionProvider ActionProvider; // RETVAL
      android.widget.ShareActionProvider v4;
      ActionProvider = p0.getActionProvider();
      if ( ActionProvider instanceof android.widget.ShareActionProvider )
        v4 = (android.widget.ShareActionProvider)ActionProvider;
      else
        v4 = new android.widget.ShareActionProvider(p1);
      v4.setShareHistoryFileName(".sharecompat_" + p1.getClass().getName());
      v4.setShareIntent(p2);
      p0.setActionProvider(v4);
    }

}
