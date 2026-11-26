// Decompiled from classes.dex (SourceFile: PushBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

import android.os.Build;
public abstract class PushBuilder {
    // Fields
    android.content.Context a;
    java.lang.String b;
    java.lang.String c;
    android.app.PendingIntent d;
    android.app.PendingIntent e;
    int f;
    long g;
    boolean h;
    int i;
    java.lang.String[] j;

    // Methods
    public PushBuilder(android.content.Context p0)
    {
      super();
      this.a = p0;
      this.b = null;
      this.c = null;
      this.d = null;
      this.e = null;
      this.f = 0;
      this.g = 0;
      this.h = true;
      this.i = 0;
      this.j = null;
    }

    private void b(int p0)
    {
      this.f = p0;
    }

    public static com.gameloft.android.GAND.GloftGGSS.PushNotification.PushBuilder getBuilder(
            android.content.Context p0)
    {
      if ( Build.VERSION.SDK_INT < 11 )
        return new com.gameloft.android.GAND.GloftGGSS.PushNotification.c(p0);
      if ( Build.VERSION.SDK_INT >= 16 )
        return new com.gameloft.android.GAND.GloftGGSS.PushNotification.e(p0);
      return new com.gameloft.android.GAND.GloftGGSS.PushNotification.d(p0);
    }

    public abstract android.app.Notification a();

    public final void a(int p0)
    {
      this.i = p0;
    }

    public final void a(long p0)
    {
      this.g = p0;
    }

    public final void a(android.app.PendingIntent p0)
    {
      this.d = p0;
    }

    public final void a(String p0)
    {
      this.b = p0;
    }

    public final void a(boolean p0)
    {
      this.h = true;
    }

    public final void a(String[] p0)
    {
      this.j = p0;
    }

    public final void b(android.app.PendingIntent p0)
    {
      this.e = p0;
    }

    public final void b(String p0)
    {
      this.c = p0;
    }

}
