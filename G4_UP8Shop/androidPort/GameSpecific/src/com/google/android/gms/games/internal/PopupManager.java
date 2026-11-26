// Decompiled from classes.dex (SourceFile: PopupManager.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import com.google.android.gms.internal.iq;
public class PopupManager {
    // Fields
    protected com.google.android.gms.games.internal.GamesClientImpl a;
    protected com.google.android.gms.games.internal.PopupManager$PopupLocationInfo b;

    // Methods
    private PopupManager(com.google.android.gms.games.internal.GamesClientImpl p0, int p1)
    {
      super();
      this.a = p0;
      this.a(p1);
    }

    /* synthetic */ PopupManager(com.google.android.gms.games.internal.GamesClientImpl p0, int p1, int p2)
    {
      this(p0, p1);
    }

    public static com.google.android.gms.games.internal.PopupManager a(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            int p1)
    {
      if ( iq.fY() )
        return new com.google.android.gms.games.internal.PopupManager$PopupManagerHCMR1(p0, p1);
      else
        return new com.google.android.gms.games.internal.PopupManager(p0, p1);
    }

    public void a()
    {
      this.a.a(this.b.a, this.b.a());
    }

    protected void a(int p0)
    {
      this.b = new com.google.android.gms.games.internal.PopupManager$PopupLocationInfo(p0, new android.os.Binder(), 0);
    }

    public void a(android.view.View p0)
    {
      ;
    }

    public final android.os.Bundle b()
    {
      return this.b.a();
    }

    public final void b(int p0)
    {
      this.b.b = p0;
    }

    public final android.os.IBinder c()
    {
      return this.b.a;
    }

}
