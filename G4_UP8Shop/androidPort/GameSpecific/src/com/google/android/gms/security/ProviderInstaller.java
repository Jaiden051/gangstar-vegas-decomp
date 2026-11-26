// Decompiled from classes.dex (SourceFile: ProviderInstaller.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.security;

import android.util.Log;
import com.google.android.gms.common.GooglePlayServicesUtil;
import com.google.android.gms.internal.hn;
public class ProviderInstaller {
    // Fields
    public static java.lang.String a;
    private static final java.lang.Object b;
    private static java.lang.reflect.Method c;

    // Methods
    static
    {
      b = new Object();
      c = null;
    }

    public ProviderInstaller()
    {
      super();
    }

    private static void I(android.content.Context p0)
 throws ClassNotFoundException, NoSuchMethodException {
      Class[] v1;
      v1 = new Class[1];
      v1[0] = android.content.Context.class;
      c = p0.getClassLoader().loadClass("com.google.android.gms.common.security.ProviderInstallerImpl").getMethod("insertProvider", v1);
    }

    public static void installIfNeeded(android.content.Context p0)
 throws com.google.android.gms.common.GooglePlayServicesNotAvailableException, com.google.android.gms.common.GooglePlayServicesRepairableException {
      android.content.Context RemoteContext; // RETVAL
      Object v2;
      Object[] v3;
      hn.b(p0, "Context must not be null");
      GooglePlayServicesUtil.w(p0);
      RemoteContext = GooglePlayServicesUtil.getRemoteContext(p0);
      if ( RemoteContext == null )
      {
        Log.e("ProviderInstaller", "Failed to get remote context");
        throw new com.google.android.gms.common.GooglePlayServicesNotAvailableException(8);
      }
      v2 = b;
      synchronized ( v2 )
      {
        try
        {
          if ( c == null )
            I(RemoteContext);
          v3 = new Object[1];
          v3[0] = RemoteContext;
          c.invoke(null, v3);
        }
        catch ( Exception v4 )
        {
          Log.e("ProviderInstaller", "Failed to install provider: " + v4.getMessage());
          throw new com.google.android.gms.common.GooglePlayServicesNotAvailableException(8);
        }
        return;
      }
    }

    public static void installIfNeededAsync(
            android.content.Context p0,
            com.google.android.gms.security.ProviderInstaller$ProviderInstallListener p1)
    {
      hn.b(p0, "Context must not be null");
      hn.b(p1, "Listener must not be null");
      hn.ay("Must be called on the UI thread");
      new com.google.android.gms.security.ProviderInstaller$1(p0, p1).execute(new Void[0]);
    }

}
