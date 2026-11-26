// Decompiled from classes.dex (SourceFile: ce.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class ce implements java.lang.Runnable {
    // Fields
    final android.webkit.WebView a;
    final com.gameloft.android.GAND.GloftGGSS.cd b;

    // Methods
    ce(com.gameloft.android.GAND.GloftGGSS.cd p0, android.webkit.WebView p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      android.app.AlertDialog v1; // RETVAL
    
      this.a.setVisibility(4);
      try
      {
        v1 = new android.app.AlertDialog.Builder(this.b.a).setPositiveButton(this.b.a.getString(InGameBrowser.access$2700(this.b.a)[InGameBrowser.a]), (android.content.DialogInterface.OnClickListener)new com.gameloft.android.GAND.GloftGGSS.cg(this)).setOnCancelListener((android.content.DialogInterface.OnCancelListener)new com.gameloft.android.GAND.GloftGGSS.cf(this)).setMessage(this.b.a.getString(InGameBrowser.access$2600(this.b.a)[InGameBrowser.a])).create();
        v1.setCanceledOnTouchOutside(false);
        v1.show();
      }
      catch ( Exception e )
      {
      }
    }

}
