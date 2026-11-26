// Decompiled from classes.dex (SourceFile: cu.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Build;
import android.os.SystemClock;
public final class cu extends com.google.android.gms.internal.dc$a {
    // Fields
    private java.lang.String a;
    private android.content.Context b;
    private java.lang.String c;
    private java.util.ArrayList d;

    // Methods
    public cu(String p0, java.util.ArrayList<String> p1, android.content.Context p2, String p3)
    {
      super();
      this.c = p0;
      this.d = p1;
      this.a = p3;
      this.b = p2;
    }

    private String a(String p0, java.util.HashMap<String, String> p1)
    {
      String PackageName;
      String v4;
      long v5;
      java.util.Iterator v6;
      String v7;
      Object[] v8;
      String v9;
      Object[] v10;
      Object[] v12;
      Object[] v13;
      String v14;
      Object[] v15;
      Object[] v16;
      String v17;
      Object[] v18;
      String v19;
      Object[] v20;
      String v21;
      Object[] v22;
      Object[] v23;
      String v24;
      Object[] v25;
      Object[] v26;
      String v27;
      Object[] v28;
      String v29;
      Object[] v30;
      String v31;
      Object[] v32;
      Object[] v33;
      PackageName = this.b.getPackageName();
      try
      {
        v4 = (this.b.getPackageManager().getPackageInfo(PackageName, 0)).versionName;
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException v11 )
      {
        ev.c("Error to retrieve app version", v11);
        v4 = "";
      }
      v5 = SystemClock.elapsedRealtime() - ei.bF().a();
      v6 = p1.keySet().iterator();
      while ( v6.hasNext() )
      {
        v7 = (String)v6.next();
        v8 = new Object[1];
        v8[0] = v7;
        v9 = String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", v8);
        v10 = new Object[1];
        v10[0] = p1.get(v7);
        p0 = p0.replaceAll(v9, String.format("$1%s$2", v10));
      }
      v12 = new Object[1];
      v12[0] = "sessionid";
      v13 = new Object[1];
      v13[0] = ei.a;
      v14 = p0.replaceAll(String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", v12), String.format("$1%s$2", v13));
      v15 = new Object[1];
      v15[0] = "appid";
      v16 = new Object[1];
      v16[0] = PackageName;
      v17 = v14.replaceAll(String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", v15), String.format("$1%s$2", v16));
      v18 = new Object[1];
      v18[0] = "osversion";
      v19 = String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", v18);
      v20 = new Object[1];
      v20[0] = String.valueOf(Build.VERSION.SDK_INT);
      v21 = v17.replaceAll(v19, String.format("$1%s$2", v20));
      v22 = new Object[1];
      v22[0] = "sdkversion";
      v23 = new Object[1];
      v23[0] = this.a;
      v24 = v21.replaceAll(String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", v22), String.format("$1%s$2", v23));
      v25 = new Object[1];
      v25[0] = "appversion";
      v26 = new Object[1];
      v26[0] = v4;
      v27 = v24.replaceAll(String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", v25), String.format("$1%s$2", v26));
      v28 = new Object[1];
      v28[0] = "timestamp";
      v29 = String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", v28);
      v30 = new Object[1];
      v30[0] = String.valueOf(v5);
      v31 = v27.replaceAll(v29, String.format("$1%s$2", v30));
      v32 = new Object[1];
      v32[0] = "[^@]+";
      v33 = new Object[1];
      v33[0] = "";
      return v31.replaceAll(String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", v32), String.format("$1%s$2", v33)).replaceAll("@@", "@");
    }

    private void b()
    {
      Class[] v1;
      java.lang.reflect.Method DeclaredMethod;
      Object[] v3;
      try
      {
        v1 = new Class[4];
        v1[0] = android.content.Context.class;
        v1[1] = String.class;
        v1[2] = String.class;
        v1[3] = Boolean.TYPE;
        DeclaredMethod = this.b.getClassLoader().loadClass("com.google.ads.conversiontracking.IAPConversionReporter").getDeclaredMethod("reportWithProductId", v1);
        v3 = new Object[4];
        v3[0] = this.b;
        v3[1] = this.c;
        v3[2] = "";
        v3[3] = Boolean.valueOf(true);
        DeclaredMethod.invoke(null, v3);
      }
      catch ( ClassNotFoundException e )
      {
        ev.D("Google Conversion Tracking SDK 1.2.0 or above is required to report a conversion.");
      }
      catch ( NoSuchMethodException e )
      {
        ev.D("Google Conversion Tracking SDK 1.2.0 or above is required to report a conversion.");
      }
      catch ( Exception v4 )
      {
        ev.c("Fail to report a conversion.", v4);
      }
    }

    private static int l(int p0)
    {
      int v1;
      v1 = 1;
      switch ( p0 )
      {
        case 0:
          return v1;
        case 1:
          return 2;
        case 4:
          return 3;
        default:
          return 0;
      }
    }

    public final String a()
    {
      return this.c;
    }

    public final void a(int p0)
    {
      java.util.HashMap v2;
      java.util.Iterator i;
      if ( p0 == 1 )
        this.b();
      v2 = new java.util.HashMap();
      v2.put("status", String.valueOf(p0));
      v2.put("sku", this.c);
      for ( i = this.d.iterator();
            i.hasNext();
            new com.google.android.gms.internal.et(this.b, this.a, this.a((String)i.next(), v2)).e() )
      {
        ;
      }
    }

    public final void b(int p0)
    {
      int v2;
      java.util.HashMap v3;
      java.util.Iterator i;
      v2 = 1;
      if ( p0 == 0 )
        this.b();
      v3 = new java.util.HashMap();
      v3.put("google_play_status", String.valueOf(p0));
      v3.put("sku", this.c);
      if ( p0 != 0 )
      {
        if ( p0 == 1 )
        {
          v2 = 2;
        }
        else if ( p0 == 4 )
        {
          v2 = 3;
        }
        else
        {
          v2 = 0;
        }
      }
      v3.put("status", String.valueOf(v2));
      for ( i = this.d.iterator();
            i.hasNext();
            new com.google.android.gms.internal.et(this.b, this.a, this.a((String)i.next(), v3)).e() )
      {
        ;
      }
    }

}
