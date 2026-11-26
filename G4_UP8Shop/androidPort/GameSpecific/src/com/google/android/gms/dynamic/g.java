// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.dynamic;

import com.google.android.gms.common.GooglePlayServicesUtil;
import com.google.android.gms.internal.hn;
public abstract class g<T> {
    // Fields
    private final java.lang.String a;
    private java.lang.Object b;

    // Methods
    protected g(String p0)
    {
      super();
      this.a = p0;
    }

    protected final T a(android.content.Context p0)
 throws com.google.android.gms.dynamic.g$a {
      android.content.Context RemoteContext; // RETVAL
      ClassLoader ClassLoader; // RETVAL
    
      if ( this.b == null )
      {
        hn.f(p0);
        RemoteContext = GooglePlayServicesUtil.getRemoteContext(p0);
        if ( RemoteContext == null )
          throw new com.google.android.gms.dynamic.g$a("Could not get remote context.");
        ClassLoader = RemoteContext.getClassLoader();
        try
        {
          this.b = this.a((android.os.IBinder)ClassLoader.loadClass(this.a).newInstance());
          return (T)this.b;
        }
        catch ( ClassNotFoundException e )
        {
          throw new com.google.android.gms.dynamic.g$a("Could not load creator class.");
        }
        catch ( InstantiationException e )
        {
          throw new com.google.android.gms.dynamic.g$a("Could not instantiate creator.");
        }
        catch ( IllegalAccessException e )
        {
          throw new com.google.android.gms.dynamic.g$a("Could not access creator.");
        }
      }
      return (T)this.b;
    }

    protected abstract java.lang.Object a(android.os.IBinder p0) ;

}
