// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.c;

public class a {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;
    private static final java.lang.String c;
    private static int d;
    private static final com.amazon.device.iap.internal.c.a e;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.c.a.class.getSimpleName();
      b = com.amazon.device.iap.internal.c.a.class.getName() + "_PREFS";
      c = com.amazon.device.iap.internal.c.a.class.getName() + "_CLEANER_PREFS";
      d = 604800000;
      e = new com.amazon.device.iap.internal.c.a();
    }

    public a()
    {
      super();
    }

    public static com.amazon.device.iap.internal.c.a a()
    {
      return e;
    }

    private void a(long p0)
    {
      android.content.Context v2; // RETVAL
      android.content.SharedPreferences.Editor v3;
      v2 = com.amazon.device.iap.internal.d.d().b();
      com.amazon.device.iap.internal.util.d.a(v2, "context");
      v3 = v2.getSharedPreferences(c, 0).edit();
      v3.putLong("LAST_CLEANING_TIME", p0);
      v3.commit();
    }

    /* synthetic */ static String b()
    {
      return a;
    }

    /* synthetic */ static String c()
    {
      return b;
    }

    /* synthetic */ static int d()
    {
      return d;
    }

    private void e()
    {
      android.content.Context v1;
      com.amazon.device.iap.internal.util.e.a(a, "enter old receipts cleanup! ");
      v1 = com.amazon.device.iap.internal.d.d().b();
      com.amazon.device.iap.internal.util.d.a(v1, "context");
      this.a(System.currentTimeMillis());
      new android.os.Handler().post((Runnable)new com.amazon.device.iap.internal.c.a$1(this, v1));
    }

    private long f()
    {
      android.content.Context v1;
      long v2;
      long Long; // RETVAL
    
      v1 = com.amazon.device.iap.internal.d.d().b();
      com.amazon.device.iap.internal.util.d.a(v1, "context");
      v2 = System.currentTimeMillis();
      Long = v1.getSharedPreferences(c, 0).getLong("LAST_CLEANING_TIME", 0);
      if ( Long != 0 )
        return Long;
      this.a(v2);
      return v2;
    }

    public void a(String p0)
    {
      android.content.Context v2; // RETVAL
      android.content.SharedPreferences.Editor v3;
      com.amazon.device.iap.internal.util.e.a(a, "enter removeReceipt for receipt[" + p0 + "]");
      v2 = com.amazon.device.iap.internal.d.d().b();
      com.amazon.device.iap.internal.util.d.a(v2, "context");
      v3 = v2.getSharedPreferences(b, 0).edit();
      v3.remove(p0);
      v3.commit();
      com.amazon.device.iap.internal.util.e.a(a, "leave removeReceipt for receipt[" + p0 + "]");
    }

    public void a(String p0, String p1, String p2, String p3)
    {
      android.content.Context v5;
      com.amazon.device.iap.internal.c.c v6;
      android.content.SharedPreferences.Editor v7;
      com.amazon.device.iap.internal.util.e.a(a, "enter saveReceipt for receipt [" + p3 + "]");
      try
      {
        com.amazon.device.iap.internal.util.d.a(p1, "userId");
        com.amazon.device.iap.internal.util.d.a(p2, "receiptId");
        com.amazon.device.iap.internal.util.d.a(p3, "receiptString");
        v5 = com.amazon.device.iap.internal.d.d().b();
        com.amazon.device.iap.internal.util.d.a(v5, "context");
        v6 = new com.amazon.device.iap.internal.c.c(p1, p3, p0, System.currentTimeMillis());
        v7 = v5.getSharedPreferences(b, 0).edit();
        v7.putString(p2, v6.d());
        v7.commit();
      }
      catch ( Throwable v8 )
      {
        com.amazon.device.iap.internal.util.e.a(a, "error in saving pending receipt:" + p0 + "/" + p3 + ":" + v8.getMessage());
      }
      com.amazon.device.iap.internal.util.e.a(a, "leaving saveReceipt for receipt id [" + p2 + "]");
    }

    public java.util.Set<com.amazon.device.iap.model.Receipt> b(String p0)
    {
      android.content.Context v2;
      java.util.Set v3;
      java.util.Map All;
      java.util.Iterator v5;
      String v6;
      String v7;
      com.amazon.device.iap.internal.c.c v8;
      v2 = com.amazon.device.iap.internal.d.d().b();
      com.amazon.device.iap.internal.util.d.a(v2, "context");
      com.amazon.device.iap.internal.util.e.a(a, "enter getLocalReceipts for user[" + p0 + "]");
      v3 = new java.util.HashSet();
      if ( com.amazon.device.iap.internal.util.d.a(p0) )
      {
        com.amazon.device.iap.internal.util.e.b(a, "empty UserId: " + p0);
        throw new RuntimeException("Invalid UserId:" + p0);
      }
      All = v2.getSharedPreferences(b, 0).getAll();
      v5 = All.keySet().iterator();
      while ( v5.hasNext() )
      {
        v6 = (String)v5.next();
        v7 = (String)All.get(v6);
        try
        {
          v8 = com.amazon.device.iap.internal.c.c.a(v7);
          v3.add(com.amazon.device.iap.internal.util.a.a(new org.json.JSONObject(v8.b()), p0, v8.a()));
        }
        catch ( com.amazon.device.iap.internal.b.b_d e )
        {
          this.a(v6);
          com.amazon.device.iap.internal.util.e.b(a, "failed to verify signature:[" + v7 + "]");
          continue;
        }
        catch ( org.json.JSONException e )
        {
          this.a(v6);
          com.amazon.device.iap.internal.util.e.b(a, "failed to convert string to JSON object:[" + v7 + "]");
          continue;
        }
        catch ( Throwable e )
        {
          com.amazon.device.iap.internal.util.e.b(a, "failed to load the receipt from SharedPreference:[" + v7 + "]");
        }
      }
      com.amazon.device.iap.internal.util.e.a(a, "leaving getLocalReceipts for user[" + p0 + "], " + v3.size() + " local receipts found.");
      if ( System.currentTimeMillis() - this.f() > d )
        this.e();
      return v3;
    }

    public String c(String p0)
    {
      String v2;
      android.content.Context v3;
      String String; // RETVAL
    
      v2 = null;
      v3 = com.amazon.device.iap.internal.d.d().b();
      com.amazon.device.iap.internal.util.d.a(v3, "context");
      if ( com.amazon.device.iap.internal.util.d.a(p0) )
      {
        com.amazon.device.iap.internal.util.e.b(a, "empty receiptId: " + p0);
        throw new RuntimeException("Invalid ReceiptId:" + p0);
      }
      String = v3.getSharedPreferences(b, 0).getString(p0, null);
      if ( String != null )
      {
        try
        {
          return com.amazon.device.iap.internal.c.c.a(String).a();
        }
        catch ( com.amazon.device.iap.internal.c.d e )
        {
        }
      }
      return v2;
    }

}
