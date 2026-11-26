// Decompiled from classes.dex (SourceFile: fa.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fa extends android.webkit.WebChromeClient {
    // Fields
    private final com.google.android.gms.internal.ey a;

    // Methods
    public fa(com.google.android.gms.internal.ey p0)
    {
      super();
      this.a = p0;
    }

    private static void a(android.app.AlertDialog.Builder p0, String p1, android.webkit.JsResult p2)
    {
      p0.setMessage(p1).setPositiveButton(17039370, (android.content.DialogInterface.OnClickListener)new com.google.android.gms.internal.fa$3(p2)).setNegativeButton(17039360, (android.content.DialogInterface.OnClickListener)new com.google.android.gms.internal.fa$2(p2)).setOnCancelListener((android.content.DialogInterface.OnCancelListener)new com.google.android.gms.internal.fa$1(p2)).create().show();
    }

    private static void a(
            android.content.Context p0,
            android.app.AlertDialog.Builder p1,
            String p2,
            String p3,
            android.webkit.JsPromptResult p4)
    {
      android.widget.LinearLayout v5;
      android.widget.TextView v6;
      android.widget.EditText v7;
      v5 = new android.widget.LinearLayout(p0);
      v5.setOrientation(1);
      v6 = new android.widget.TextView(p0);
      v6.setText(p2);
      v7 = new android.widget.EditText(p0);
      v7.setText(p3);
      v5.addView(v6);
      v5.addView(v7);
      p1.setView(v5).setPositiveButton(17039370, (android.content.DialogInterface.OnClickListener)new com.google.android.gms.internal.fa$6(p4, v7)).setNegativeButton(17039360, (android.content.DialogInterface.OnClickListener)new com.google.android.gms.internal.fa$5(p4)).setOnCancelListener((android.content.DialogInterface.OnCancelListener)new com.google.android.gms.internal.fa$4(p4)).create().show();
    }

    private static boolean a(
            android.content.Context p0,
            String p1,
            String p2,
            String p3,
            android.webkit.JsResult p4,
            android.webkit.JsPromptResult p5,
            boolean p6)
    {
      android.app.AlertDialog.Builder v7;
      try
      {
        v7 = new android.app.AlertDialog.Builder(p0);
        v7.setTitle(p1);
        if ( p6 )
          a(p0, v7, p2, p3, p5);
        else
          a(v7, p2, p4);
        return true;
      }
      catch ( android.view.WindowManager.BadTokenException v9 )
      {
        ev.c("Fail to display Dialog.", v9);
      }
      return true;
    }

    protected final void a(android.view.View p0, int p1, android.webkit.WebChromeClient.CustomViewCallback p2)
    {
      com.google.android.gms.internal.cg v4; // RETVAL
    
      v4 = this.a.d();
      if ( v4 != null )
      {
        v4.a(p0, p2);
        v4.a(p1);
      }
      else
      {
        ev.D("Could not get ad overlay when showing custom view.");
        p2.onCustomViewHidden();
      }
    }

    public final void onCloseWindow(android.webkit.WebView p0)
    {
      com.google.android.gms.internal.cg v2; // RETVAL
    
      if ( p0 instanceof com.google.android.gms.internal.ey )
      {
        v2 = ((com.google.android.gms.internal.ey)p0).d();
        if ( v2 != null )
          v2.a();
        else
          ev.D("Tried to close an AdWebView not associated with an overlay.");
      }
      else
      {
        ev.D("Tried to close a WebView that wasn't an AdWebView.");
      }
    }

    public final boolean onConsoleMessage(android.webkit.ConsoleMessage p0)
    {
      String v2;
      v2 = "JS: " + p0.message() + " (" + p0.sourceId() + ":" + p0.lineNumber() + ")";
      switch ( fa$7.a[p0.messageLevel().ordinal()] )
      {
        case 1:
          ev.A(v2);
          break;
        case 2:
          ev.D(v2);
          break;
        case 5:
          ev.z(v2);
          break;
        default:
          ev.B(v2);
          break;
      }
      return super.onConsoleMessage(p0);
    }

    public final boolean onCreateWindow(android.webkit.WebView p0, boolean p1, boolean p2, android.os.Message p3)
    {
      android.webkit.WebView v5;
      v5 = new android.webkit.WebView(p0.getContext());
      v5.setWebViewClient(this.a.f());
      ((android.webkit.WebView.WebViewTransport)p3.obj).setWebView(v5);
      p3.sendToTarget();
      return true;
    }

    public final void onExceededDatabaseQuota(
            String p0,
            String p1,
            long p2,
            long p4,
            long p6,
            android.webkit.WebStorage.QuotaUpdater p8)
    {
      long v7;
      v7 = 5242880 - p6;
      if ( 5242880 - p6 > 0 )
      {
        if ( p2 != 0 )
        {
          if ( p4 != 0 )
          {
            if ( p4 <= Math.min(0x100000 - p2, v7) )
              p2 += p4;
          }
          else
          {
            p2 = Math.min(Math.min(0x20000, v7) + p2, 0x100000);
          }
          p4 = p2;
        }
        else if ( p4 > v7 || p4 > 0x100000 )
        {
          p4 = 0;
        }
        p8.updateQuota(p4);
      }
      else
      {
        p8.updateQuota(p2);
      }
    }

    public final void onHideCustomView()
    {
      com.google.android.gms.internal.cg v1; // RETVAL
    
      v1 = this.a.d();
      if ( v1 != null )
        v1.c();
      else
        ev.D("Could not get ad overlay when hiding custom view.");
    }

    public final boolean onJsAlert(android.webkit.WebView p0, String p1, String p2, android.webkit.JsResult p3)
    {
      if ( p0 instanceof com.google.android.gms.internal.ey && ((com.google.android.gms.internal.ey)p0).j() != null )
        return a(((com.google.android.gms.internal.ey)p0).j(), p1, p2, null, p3, null, false);
      else
        return a(p0.getContext(), p1, p2, null, p3, null, false);
    }

    public final boolean onJsBeforeUnload(android.webkit.WebView p0, String p1, String p2, android.webkit.JsResult p3)
    {
      return a(p0.getContext(), p1, p2, null, p3, null, false);
    }

    public final boolean onJsConfirm(android.webkit.WebView p0, String p1, String p2, android.webkit.JsResult p3)
    {
      return a(p0.getContext(), p1, p2, null, p3, null, false);
    }

    public final boolean onJsPrompt(
            android.webkit.WebView p0,
            String p1,
            String p2,
            String p3,
            android.webkit.JsPromptResult p4)
    {
      return a(p0.getContext(), p1, p2, p3, null, p4, true);
    }

    public final void onReachedMaxAppCacheSize(long p0, long p2, android.webkit.WebStorage.QuotaUpdater p4)
    {
      if ( 5242880 - p2 >= p0 + 0x20000 )
        p4.updateQuota(p0 + 0x20000);
      else
        p4.updateQuota(0);
    }

    public final void onShowCustomView(android.view.View p0, android.webkit.WebChromeClient.CustomViewCallback p1)
    {
      this.a(p0, -1, p1);
    }

}
