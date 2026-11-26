// Decompiled from classes.dex (SourceFile: u.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.internal;

import android.os.Build;
import android.util.Log;
import com.google.android.gms.common.GooglePlayServicesUtil;
import com.google.android.gms.internal.hn;
public class u {
    // Fields
    private static android.content.Context a;
    private static com.google.android.gms.maps.internal.c b;

    // Methods
    public u()
    {
      super();
    }

    public static com.google.android.gms.maps.internal.c E(android.content.Context p0)
 throws com.google.android.gms.common.GooglePlayServicesNotAvailableException {
      com.google.android.gms.maps.internal.c v3; // RETVAL
    
      hn.f(p0);
      if ( b != null )
        return b;
      F(p0);
      v3 = G(p0);
      b = v3;
      try
      {
        b.a(com.google.android.gms.dynamic.e.h(getRemoteContext(p0).getResources()), 5077000);
        return b;
      }
      catch ( android.os.RemoteException v4 )
      {
        throw new com.google.android.gms.maps.model.RuntimeRemoteException(v4);
      }
    }

    private static void F(android.content.Context p0)
 throws com.google.android.gms.common.GooglePlayServicesNotAvailableException {
      int isGooglePlayServicesAvailable; // RETVAL
    
      isGooglePlayServicesAvailable = GooglePlayServicesUtil.isGooglePlayServicesAvailable(p0);
      if ( isGooglePlayServicesAvailable != 0 )
        throw new com.google.android.gms.common.GooglePlayServicesNotAvailableException(isGooglePlayServicesAvailable);
    }

    private static com.google.android.gms.maps.internal.c G(android.content.Context p0)
    {
      if ( jE() )
      {
        Log.i(com.google.android.gms.maps.internal.u.class.getSimpleName(), "Making Creator statically");
        return (com.google.android.gms.maps.internal.c)c(jF());
      }
      else
      {
        Log.i(com.google.android.gms.maps.internal.u.class.getSimpleName(), "Making Creator dynamically");
        return c$a.ax((android.os.IBinder)a(
                                            getRemoteContext(p0).getClassLoader(),
                                            "com.google.android.gms.maps.internal.CreatorImpl"));
      }
    }

    private static <T> T a(ClassLoader p0, String p1)
    {
      try
      {
        return c(((ClassLoader)hn.f(p0)).loadClass(p1));
      }
      catch ( ClassNotFoundException e )
      {
        throw new IllegalStateException("Unable to find dynamic class " + p1);
      }
    }

    private static <T> T c(Class<?> p0)
    {
      try
      {
        return (T)p0.newInstance();
      }
      catch ( InstantiationException e )
      {
        throw new IllegalStateException("Unable to instantiate the dynamic class " + p0.getName());
      }
      catch ( IllegalAccessException e )
      {
        throw new IllegalStateException("Unable to call the default constructor of " + p0.getName());
      }
    }

    private static android.content.Context getRemoteContext(android.content.Context p0)
    {
      if ( a == null )
      {
        if ( jE() )
          a = p0.getApplicationContext();
        else
          a = GooglePlayServicesUtil.getRemoteContext(p0);
      }
      return a;
    }

    private static boolean jE()
    {
      return false;
    }

    private static Class<?> jF()
    {
      try
      {
        if ( Build.VERSION.SDK_INT >= 15 )
          return Class.forName("com.google.android.gms.maps.internal.CreatorImpl");
        else
          return Class.forName("com.google.android.gms.maps.internal.CreatorImplGmm6");
      }
      catch ( ClassNotFoundException v2 )
      {
        throw new RuntimeException(v2);
      }
    }

}
