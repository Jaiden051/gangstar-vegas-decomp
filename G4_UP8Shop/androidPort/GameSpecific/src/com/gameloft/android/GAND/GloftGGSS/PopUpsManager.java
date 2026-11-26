// Decompiled from classes.dex (SourceFile: PopUpsManager.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.net.Uri;
public class PopUpsManager {
    // Fields
    private static com.gameloft.android.GAND.GloftGGSS.PopUpsManager e;
    private android.widget.RelativeLayout a;
    private android.app.Activity b;
    private int c;
    private int d;
    private com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent f;
    private android.app.ProgressDialog g;

    // Methods
    private PopUpsManager()
    {
      super();
      this.c = 0;
      this.d = 0;
      this.f = null;
    }

    public static com.gameloft.android.GAND.GloftGGSS.PopUpsManager GetInstance()
    {
      if ( e == null )
        e = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager();
      return e;
    }

    private static void OnDownloadState(int p0)
    {
      PopUpsBridgeClass.OnDownloadState(p0);
    }

    private static void OnErrorMessage(int p0)
    {
      PopUpsBridgeClass.OnErrorMessage(p0);
    }

    private static void OnViewState(int p0)
    {
      PopUpsBridgeClass.OnViewState(p0);
    }

    private void a(int p0, int p1)
    {
      this.c = p0;
      this.d = p1;
    }

    private void a(String p0, boolean p1)
    {
      this.b.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.cq(this, false, p0));
    }

    /* synthetic */ static android.app.ProgressDialog access$000(
            com.gameloft.android.GAND.GloftGGSS.PopUpsManager p0)
    {
      return p0.g;
    }

    /* synthetic */ static android.app.ProgressDialog access$002(
            com.gameloft.android.GAND.GloftGGSS.PopUpsManager p0,
            android.app.ProgressDialog p1)
    {
      p0.g = p1;
      return p1;
    }

    /* synthetic */ static android.app.Activity access$100(
            com.gameloft.android.GAND.GloftGGSS.PopUpsManager p0)
    {
      return p0.b;
    }

    private void g()
    {
      PopUpsViewComponent.OnPause();
    }

    private void h()
    {
      PopUpsViewComponent.OnResume();
    }

    private int i()
    {
      return this.c;
    }

    private int j()
    {
      return this.d;
    }

    private com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent k()
    {
      return this.f;
    }

    public final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError a(
            boolean p0,
            String p1,
            String p2)
    {
      com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError v4;
      if ( this.f != null )
        return this.f.a(true, p1, p2);
      v4 = PopUpsManager$PopUpsError.h;
      PopUpsBridgeClass.OnErrorMessage(v4.a());
      return v4;
    }

    public final void a(int p0, int p1, int p2, int p3)
    {
      this.f.a(p0, p1, p2, p3);
    }

    public final void a(android.app.Activity p0, android.widget.RelativeLayout p1)
    {
      if ( p0 != null && p1 != null )
      {
        this.b = p0;
        this.a = p1;
      }
      else
      {
        PopUpsBridgeClass.OnErrorMessage(PopUpsManager$PopUpsError.a.a());
      }
    }

    public final void a(String p0)
    {
      if ( p0 != null && !p0.isEmpty() )
      {
        try
        {
          this.b.startActivity(new android.content.Intent("android.intent.action.VIEW", Uri.parse(p0)));
        }
        catch ( Exception e )
        {
        }
      }
    }

    public final boolean a()
    {
      this.f = new com.gameloft.android.GAND.GloftGGSS.PopUpsViewComponent(this);
      return this.f != null;
    }

    public final void b()
    {
      this.f.c();
    }

    public final int c()
    {
      if ( this.f != null )
        return this.f.a();
      else
        return PopUpsManager$ViewState.a.a();
    }

    public final void d()
    {
      this.f.b();
      this.b.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.cq(this, false, ""));
      this.f = null;
      this.a = null;
      this.b = null;
    }

    public final android.widget.RelativeLayout e()
    {
      return this.a;
    }

    public final android.app.Activity f()
    {
      return this.b;
    }

}
