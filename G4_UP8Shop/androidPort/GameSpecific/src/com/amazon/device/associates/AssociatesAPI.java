// Decompiled from classes.dex (SourceFile: AssociatesAPI.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.content.pm.ApplicationInfo;
public class AssociatesAPI {
    // Fields
    static com.amazon.device.associates.ShoppingService a;
    static com.amazon.device.associates.LinkService b;
    private static final java.lang.String c;

    // Methods
    static
    {
      c = com.amazon.device.associates.AssociatesAPI.class.getSimpleName();
    }

    private AssociatesAPI()
    {
      super();
    }

    private static void a()
 throws com.amazon.device.associates.NotInitializedException {
      if ( a == null || b == null )
        throw new com.amazon.device.associates.NotInitializedException();
    }

    public static com.amazon.device.associates.LinkService getLinkService()
 throws com.amazon.device.associates.NotInitializedException {
      a();
      return b;
    }

    public static com.amazon.device.associates.ShoppingService getShoppingService()
 throws com.amazon.device.associates.NotInitializedException {
      a();
      return a;
    }

    public static void initialize(com.amazon.device.associates.AssociatesAPI$Config p0)
    {
      boolean Boolean;
      android.content.Context ApplicationContext; // RETVAL
      android.content.Context v3;
      android.content.pm.ApplicationInfo ApplicationInfo; // RETVAL
    
      Boolean = false;
      an.a(p0, "config");
      ApplicationContext = p0.b().getApplicationContext();
      v3 = ApplicationContext;
      try
      {
        ApplicationInfo = ApplicationContext.getPackageManager().getApplicationInfo(ApplicationContext.getPackageName(), 128);
        if ( ApplicationInfo != null && ApplicationInfo.metaData != null )
          Boolean = ApplicationInfo.metaData.getBoolean("com.amazon.device.associates.ENABLE_TESTING", false);
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
      }
      if ( a == null )
        a = (com.amazon.device.associates.ShoppingService)new com.amazon.device.associates.m(v3, Boolean);
      if ( b == null )
        b = (com.amazon.device.associates.LinkService)new com.amazon.device.associates.ba(v3, p0.a(), p0.c());
      p.c(c, "Mobile Associates API initialization complete. SDK Version 1.0.45.0");
    }

}
