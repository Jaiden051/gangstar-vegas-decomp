// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

import com.google.android.gms.common.GooglePlayServicesUtil;
import com.google.android.gms.internal.hn;
public final class g {
    // Fields
    private static android.content.Context a;
    private static com.google.android.gms.plus.internal.c b;

    // Methods
    private static com.google.android.gms.plus.internal.c H(android.content.Context p0)
 throws com.google.android.gms.plus.internal.g$a {
      android.content.Context RemoteContext; // RETVAL
      ClassLoader ClassLoader; // RETVAL
    
      hn.f(p0);
      if ( b == null )
      {
        if ( a == null )
        {
          RemoteContext = GooglePlayServicesUtil.getRemoteContext(p0);
          a = RemoteContext;
          if ( RemoteContext == null )
            throw new com.google.android.gms.plus.internal.g$a("Could not get remote context.");
        }
        ClassLoader = a.getClassLoader();
        try
        {
          b = c$a.bl((android.os.IBinder)ClassLoader.loadClass("com.google.android.gms.plus.plusone.PlusOneButtonCreatorImpl").newInstance());
          return b;
        }
        catch ( ClassNotFoundException e )
        {
          throw new com.google.android.gms.plus.internal.g$a("Could not load creator class.");
        }
        catch ( InstantiationException e )
        {
          throw new com.google.android.gms.plus.internal.g$a("Could not instantiate creator.");
        }
        catch ( IllegalAccessException e )
        {
          throw new com.google.android.gms.plus.internal.g$a("Could not access creator.");
        }
      }
      return b;
    }

    public static android.view.View a(android.content.Context p0, int p1, int p2, String p3, int p4)
 {
      android.view.View v6;
      try
      {
        if ( p3 == null )
          throw new NullPointerException();
        v6 = (android.view.View)com.google.android.gms.dynamic.e.e(H(p0).a(com.google.android.gms.dynamic.e.h(p0), p1, p2, p3, p4));
      }
      catch ( Exception e )
      {
        return new com.google.android.gms.plus.PlusOneDummyView(p0, p1);
      }
      return v6;
    }

}
