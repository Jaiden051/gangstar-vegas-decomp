// Decompiled from classes.dex (SourceFile: bp.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bp implements java.lang.Runnable {
    // Fields
    final android.webkit.WebView a;
    final com.gameloft.android.GAND.GloftGGSS.bo b;

    // Methods
    bp(com.gameloft.android.GAND.GloftGGSS.bo p0, android.webkit.WebView p1)
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
        v1 = new android.app.AlertDialog.Builder(this.b.a).setPositiveButton(this.b.a.getString(IGPFreemiumActivity.access$1900(this.b.a)[IGPFreemiumActivity.access$900(this.b.a)]), (android.content.DialogInterface.OnClickListener)new com.gameloft.android.GAND.GloftGGSS.br(this)).setOnCancelListener((android.content.DialogInterface.OnCancelListener)new com.gameloft.android.GAND.GloftGGSS.bq(this)).setMessage(this.b.a.getString(IGPFreemiumActivity.access$1800(this.b.a)[IGPFreemiumActivity.access$900(this.b.a)])).create();
        v1.setCanceledOnTouchOutside(false);
        v1.show();
      }
      catch ( Exception e )
      {
      }
    }

}
