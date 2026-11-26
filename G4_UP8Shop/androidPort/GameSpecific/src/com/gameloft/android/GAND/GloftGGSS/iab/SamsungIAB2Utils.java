// Decompiled from classes.dex (SourceFile: SamsungIAB2Utils.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import java.util.Collections;
import java.util.Locale;
public class SamsungIAB2Utils {
    // Fields
    public static int A;
    public static int B;
    public static final java.util.Map C;
    public static int D;
    public static int E;
    private static int J;
    private static int K;
    public static int a;
    public static int b;
    public static int c;
    public static java.lang.String d;
    public static java.lang.String e;
    public static java.lang.String f;
    public static java.lang.String g;
    public static java.lang.String h;
    public static java.lang.String i;
    public static java.lang.String j;
    public static java.lang.String k;
    public static java.lang.String l;
    public static java.lang.String m;
    public static java.lang.String n;
    public static java.lang.String o;
    public static java.lang.String p;
    public static java.lang.String q;
    public static int r;
    public static int s;
    public static int t;
    public static int u;
    public static int v;
    public static int w;
    public static int x;
    public static int y;
    public static int z;
    android.content.Context F;
    public boolean G;
    public boolean H;
    int I;
    private com.sec.android.iap.IAPConnector L;
    private android.content.ServiceConnection M;

    // Methods
    static
    {
      java.util.Hashtable v0;
      v0 = new java.util.Hashtable();
      v0.put(Integer.valueOf(0), Integer.valueOf(0));
      v0.put(Integer.valueOf(1), Integer.valueOf(-5001));
      v0.put(Integer.valueOf(-1000), Integer.valueOf(-5002));
      v0.put(Integer.valueOf(-1001), Integer.valueOf(-5003));
      v0.put(Integer.valueOf(-1002), Integer.valueOf(-5004));
      v0.put(Integer.valueOf(-1003), Integer.valueOf(-5005));
      v0.put(Integer.valueOf(-1004), Integer.valueOf(-5006));
      v0.put(Integer.valueOf(-1005), Integer.valueOf(-5007));
      v0.put(Integer.valueOf(-1006), Integer.valueOf(-5008));
      C = Collections.unmodifiableMap(v0);
    }

    public SamsungIAB2Utils(android.content.Context p0)
    {
      super();
      this.L = null;
      this.M = null;
      this.G = false;
      this.H = false;
      this.I = 1;
      this.F = p0.getApplicationContext();
    }

    private android.os.Bundle a(String p0, int p1, int p2, String p3)
    {
      try
      {
        return this.L.a(this.I, this.F.getPackageName(), p0, 1, 15, p3);
      }
      catch ( android.os.RemoteException e )
      {
        return null;
      }
    }

    private android.os.Bundle a(String p0, int p1, int p2, String p3, String p4)
    {
      try
      {
        return this.L.a(this.F.getPackageName(), p0, p1, p2, p3, p4);
      }
      catch ( android.os.RemoteException e )
      {
        return null;
      }
    }

    /* synthetic */ static com.sec.android.iap.IAPConnector access$000(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils p0)
    {
      return p0.L;
    }

    /* synthetic */ static com.sec.android.iap.IAPConnector access$002(
            com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils p0,
            com.sec.android.iap.IAPConnector p1)
    {
      p0.L = p1;
      return p1;
    }

    public static boolean isValidIapPackage(android.content.Context p0)
    {
      boolean v1;
      v1 = false;
      try
      {
        return (p0.getPackageManager().getPackageInfo("com.sec.android.iap", 64)).signatures[0].hashCode() == 2055122763;
      }
      catch ( Exception e )
      {
      }
      return v1;
    }

    public static void startAccountActivity(android.app.Activity p0)
    {
      android.content.Intent v1;
      v1 = new android.content.Intent();
      v1.setComponent(new android.content.ComponentName("com.sec.android.iap", "com.sec.android.iap.activity.AccountActivity"));
      p0.startActivityForResult(v1, 2);
    }

    public final android.os.Bundle a(String p0, int p1, int p2)
    {
      return this.a(p0, p1, p2, "20130101", new java.text.SimpleDateFormat("yyyyMMdd", Locale.getDefault()).format(new java.util.Date()));
    }

    public final android.os.Bundle a(String p0, String p1)
    {
      return this.a(p0, 1, 15, p1);
    }

    public final com.gameloft.android.GAND.GloftGGSS.iab.a a()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.a v1;
      android.os.Bundle v2; // RETVAL
      android.os.Bundle v3;
      v1 = new com.gameloft.android.GAND.GloftGGSS.iab.a();
      try
      {
        v2 = this.L.a(this.I);
        v3 = v2;
        if ( v2 != null )
        {
          v1.a(v2.getInt("STATUS_CODE"));
          v1.a(v3.getString("ERROR_STRING"));
          v1.b(v3.getString("IAP_UPGRADE_URL"));
        }
        return v1;
      }
      catch ( android.os.RemoteException e )
      {
      }
      return v1;
    }

    public final void a(int p0)
    {
      this.I = 0;
    }

    public final void a(android.app.Activity p0)
    {
      this.H = true;
      this.a(p0, p0.getString(2131165487), p0.getString(2131165489), true, (Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.ad(this, p0), true);
    }

    public final void a(android.app.Activity p0, int p1, String p2, String p3)
    {
      android.os.Bundle v5;
      android.content.Intent v6;
      try
      {
        v5 = new android.os.Bundle();
        v5.putString("THIRD_PARTY_NAME", this.F.getPackageName());
        v5.putString("ITEM_GROUP_ID", p2);
        v5.putString("ITEM_ID", p3);
        v6 = new android.content.Intent("android.intent.action.MAIN");
        v6.addCategory("android.intent.category.LAUNCHER");
        v6.setComponent(new android.content.ComponentName("com.sec.android.iap", "com.sec.android.iap.activity.PaymentMethodListActivity"));
        v6.putExtras(v5);
        p0.startActivityForResult(v6, 1);
      }
      catch ( Exception e )
      {
      }
    }

    public final void a(
            android.app.Activity p0,
            String p1,
            String p2,
            boolean p3,
            Runnable p4,
            boolean p5)
    {
      android.app.AlertDialog.Builder v7;
      v7 = new android.app.AlertDialog.Builder(p0);
      v7.setTitle(p1);
      v7.setMessage(p2);
      v7.setPositiveButton(2131165493, (android.content.DialogInterface.OnClickListener)new com.gameloft.android.GAND.GloftGGSS.iab.ag(this, p4, p3, p0));
      if ( p5 )
        v7.setNegativeButton(2131165494, (android.content.DialogInterface.OnClickListener)new com.gameloft.android.GAND.GloftGGSS.iab.ah(this, p3, p0));
      if ( SamsungHelper.c )
        v7.setOnCancelListener((android.content.DialogInterface.OnCancelListener)new com.gameloft.android.GAND.GloftGGSS.iab.ai(this, p0));
      if ( p3 )
        v7.setOnCancelListener((android.content.DialogInterface.OnCancelListener)new com.gameloft.android.GAND.GloftGGSS.iab.aj(this, p0));
      v7.show();
    }

    public final void a(com.gameloft.android.GAND.GloftGGSS.iab.ak p0)
    {
      android.content.Intent v2;
      if ( this.G )
      {
        p0.a(0);
      }
      else
      {
        this.M = (android.content.ServiceConnection)new com.gameloft.android.GAND.GloftGGSS.iab.af(this, p0);
        v2 = new android.content.Intent("com.sec.android.iap.service.iapService");
        v2.setPackage("com.sec.android.iap");
        this.F.bindService(v2, this.M, 1);
      }
    }

    public final boolean a(android.content.Context p0)
    {
      android.content.pm.PackageManager PackageManager; // RETVAL
      boolean v3;
      PackageManager = p0.getPackageManager();
      v3 = true;
      this.H = false;
      try
      {
        PackageManager.getApplicationInfo("com.sec.android.iap", 128);
        return v3;
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        return false;
      }
    }

    public final void b()
    {
      if ( this.M != null )
      {
        if ( this.F != null )
          this.F.unbindService(this.M);
        this.M = null;
        this.L = null;
      }
    }

    public final void b(android.app.Activity p0)
    {
      this.a(p0, p0.getString(2131165487), p0.getString(2131165490), true, (Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.ae(this, p0), false);
    }

}
