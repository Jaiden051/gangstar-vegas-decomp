// Decompiled from classes.dex (SourceFile: ho.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class ho extends com.google.android.gms.dynamic.g {
    // Fields
    private static final com.google.android.gms.internal.ho a;

    // Methods
    static
    {
      a = new com.google.android.gms.internal.ho();
    }

    private ho()
    {
      super("com.google.android.gms.common.ui.SignInButtonCreatorImpl");
    }

    private static com.google.android.gms.internal.hk N(android.os.IBinder p0)
    {
      return hk$a.M(p0);
    }

    private android.view.View a(android.content.Context p0, int p1, int p2)
 throws com.google.android.gms.dynamic.g$a {
      try
      {
        return (android.view.View)com.google.android.gms.dynamic.e.e(((com.google.android.gms.internal.hk)this.a(p0)).a(com.google.android.gms.dynamic.e.h(p0), p1, p2));
      }
      catch ( Exception v6 )
      {
        throw new com.google.android.gms.dynamic.g$a("Could not get button with size " + p1 + " and color " + p2, v6);
      }
    }

    public static android.view.View b(android.content.Context p0, int p1, int p2)
 throws com.google.android.gms.dynamic.g$a {
      return a.a(p0, p1, p2);
    }

    /* synthetic */ public final Object a(android.os.IBinder p0)
    {
      return hk$a.M(p0);
    }

}
