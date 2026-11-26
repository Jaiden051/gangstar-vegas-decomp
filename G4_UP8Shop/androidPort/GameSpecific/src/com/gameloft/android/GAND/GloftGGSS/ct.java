// Decompiled from classes.dex (SourceFile: ct.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class ct extends android.webkit.WebViewClient {
    // Fields
    public boolean a;
    public boolean b;
    final com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent c;

    // Methods
    private ct(com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent p0)
    {
      super();
      this.c = p0;
      this.a = false;
      this.b = false;
    
    }

    /* synthetic */ ct(com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent p0, int p1)
    {
      this(p0);
    }

    public final void onPageFinished(android.webkit.WebView p0, String p1)
    {
      PopUpsViewComponent.access$600(this.c, this, p0, p1);
    }

    public final void onPageStarted(android.webkit.WebView p0, String p1, android.graphics.Bitmap p2)
    {
      PopUpsViewComponent.access$700(this.c, this, p0, p1, p2);
    }

    public final void onReceivedError(android.webkit.WebView p0, int p1, String p2, String p3)
    {
      PopUpsViewComponent.access$500(this.c, this, p0, p1, p2, p3);
    }

    public final boolean shouldOverrideUrlLoading(android.webkit.WebView p0, String p1)
    {
      return PopUpsViewComponent.access$400(this.c, this, p0, p1);
    }

}
