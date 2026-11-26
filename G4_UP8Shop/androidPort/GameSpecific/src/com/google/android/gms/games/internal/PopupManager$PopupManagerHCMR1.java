// Decompiled from classes.dex (SourceFile: PopupManager$PopupManagerHCMR1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import android.view.View;
import com.google.android.gms.internal.iq;
final class PopupManager$PopupManagerHCMR1 extends com.google.android.gms.games.internal.PopupManager implements android.view.View.OnAttachStateChangeListener, android.view.ViewTreeObserver.OnGlobalLayoutListener {
    // Fields
    private java.lang.ref.WeakReference c;
    private boolean d;

    // Methods
    protected PopupManager$PopupManagerHCMR1(com.google.android.gms.games.internal.GamesClientImpl p0, int p1)
    {
      super(p0, p1, 0);
      this.d = false;
    }

    private void b(android.view.View p0)
    {
      int DisplayId;
      android.view.Display Display; // RETVAL
      android.os.IBinder WindowToken;
      int[] v5;
      DisplayId = -1;
      if ( iq.gc() )
      {
        Display = p0.getDisplay();
        if ( Display != null )
          DisplayId = Display.getDisplayId();
      }
      WindowToken = p0.getWindowToken();
      v5 = new int[2];
      p0.getLocationInWindow(v5);
      this.b.c = DisplayId;
      this.b.a = WindowToken;
      this.b.d = v5[0];
      this.b.e = v5[1];
      this.b.f = v5[0] + p0.getWidth();
      this.b.g = v5[1] + p0.getHeight();
      if ( this.d )
      {
        this.a();
        this.d = false;
      }
    }

    public final void a()
    {
      if ( this.b.a != null )
        super.a();
      else
        this.d = this.c != null;
    }

    protected final void a(int p0)
    {
      this.b = new com.google.android.gms.games.internal.PopupManager$PopupLocationInfo(p0, null, 0);
    }

    public final void a(android.view.View p0)
    {
      android.view.View DecorView;
      android.content.Context v3; // RETVAL
      android.view.ViewTreeObserver ViewTreeObserver;
      android.content.Context v5; // RETVAL
      Object v6;
      android.view.View ViewById;
      this.a.C();
      if ( this.c != null )
      {
        DecorView = (android.view.View)this.c.get();
        v3 = this.a.E();
        if ( DecorView == null && v3 instanceof android.app.Activity )
          DecorView = ((android.app.Activity)v3).getWindow().getDecorView();
        if ( DecorView != null )
        {
          DecorView.removeOnAttachStateChangeListener((android.view.View.OnAttachStateChangeListener)this);
          ViewTreeObserver = DecorView.getViewTreeObserver();
          if ( iq.gb() )
            ViewTreeObserver.removeOnGlobalLayoutListener((android.view.ViewTreeObserver.OnGlobalLayoutListener)this);
          else
            ViewTreeObserver.removeGlobalOnLayoutListener((android.view.ViewTreeObserver.OnGlobalLayoutListener)this);
        }
      }
      this.c = null;
      v5 = this.a.E();
      v6 = v5;
      if ( p0 == null && v5 instanceof android.app.Activity )
      {
        ViewById = ((android.app.Activity)v5).findViewById(16908290);
        if ( ViewById == null )
          ViewById = ((android.app.Activity)v6).getWindow().getDecorView();
        GamesLog.j(
          "PopupManager",
          "You have not specified a View to use as content view for popups. Falling back to the Activity content view which m" +
          "ay not work properly in future versions of the API. Use setViewForPopups() to set your content view.");
        p0 = ViewById;
      }
      if ( p0 != null )
      {
        this.b(p0);
        this.c = new java.lang.ref.WeakReference(p0);
        p0.addOnAttachStateChangeListener((android.view.View.OnAttachStateChangeListener)this);
        p0.getViewTreeObserver().addOnGlobalLayoutListener((android.view.ViewTreeObserver.OnGlobalLayoutListener)this);
      }
      else
      {
        GamesLog.k(
          "PopupManager",
          "No content view usable to display popups. Popups will not be displayed in response to this client's calls. Use set" +
          "ViewForPopups() to set your content view.");
      }
    }

    public final void onGlobalLayout()
    {
      android.view.View v1;
      if ( this.c != null )
      {
        v1 = (android.view.View)this.c.get();
        if ( v1 != null )
          this.b(v1);
      }
    }

    public final void onViewAttachedToWindow(android.view.View p0)
    {
      this.b(p0);
    }

    public final void onViewDetachedFromWindow(android.view.View p0)
    {
      this.a.C();
      p0.removeOnAttachStateChangeListener((android.view.View.OnAttachStateChangeListener)this);
    }

}
