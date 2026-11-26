// Decompiled from classes.dex (SourceFile: ct.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.SystemClock;
public class ct extends com.google.android.gms.internal.en implements android.content.ServiceConnection {
    // Fields
    private final java.lang.Object a;
    private boolean b;
    private android.content.Context c;
    private com.google.android.gms.internal.dh d;
    private com.google.android.gms.internal.cs e;
    private com.google.android.gms.internal.cy f;
    private java.util.List g;
    private com.google.android.gms.internal.da h;

    // Methods
    public ct(android.content.Context p0, com.google.android.gms.internal.dh p1, com.google.android.gms.internal.da p2)
    {
      super();
      this.a = new Object();
      this.b = false;
      this.g = null;
      this.c = p0;
      this.d = p1;
      this.h = p2;
      this.e = new com.google.android.gms.internal.cs(p0);
      this.f = cy.h(this.c);
      this.g = this.f.a(10);
    }

    /* synthetic */ static com.google.android.gms.internal.da a(com.google.android.gms.internal.ct p0)
    {
      return p0.h;
    }

    private void a(long p0)
    {
      do
      {
        if ( !this.b(p0) )
          ev.D("Timeout waiting for pending transaction to be processed.");
      }
      while ( !this.b );
    }

    private void a(com.google.android.gms.internal.cw p0, String p1, String p2)
    {
      android.content.Intent v4;
      v4 = new android.content.Intent();
      v4.putExtra("RESPONSE_CODE", 0);
      v4.putExtra("INAPP_PURCHASE_DATA", p1);
      v4.putExtra("INAPP_DATA_SIGNATURE", p2);
      eu.a.post((Runnable)new com.google.android.gms.internal.ct$1(this, p0, v4));
    }

    /* synthetic */ static android.content.Context b(com.google.android.gms.internal.ct p0)
    {
      return p0.c;
    }

    private boolean b(long p0)
    {
      long v2;
      v2 = 60000 - (SystemClock.elapsedRealtime() - p0);
      if ( v2 > 0 )
      {
        try
        {
          this.a.wait(v2);
          return true;
        }
        catch ( InterruptedException e )
        {
          ev.D("waitWithTimeout_lock interrupted");
        }
        return true;
      }
      return false;
    }

    /* synthetic */ static com.google.android.gms.internal.dh c(com.google.android.gms.internal.ct p0)
    {
      return p0.d;
    }

    private void c()
    {
      java.util.HashMap v1;
      java.util.Iterator v2;
      com.google.android.gms.internal.cw v3;
      String i;
      android.os.Bundle v5; // RETVAL
      android.os.Bundle v6;
      java.util.ArrayList StringArrayList;
      java.util.ArrayList v8;
      java.util.ArrayList v9;
      String String;
      int j;
      String v12;
      String v13;
      String v14;
      com.google.android.gms.internal.cw v15;
      android.content.Intent v16;
      java.util.Iterator k;
      if ( !this.g.isEmpty() )
      {
        v1 = new java.util.HashMap();
        v2 = this.g.iterator();
        while ( v2.hasNext() )
        {
          v3 = (com.google.android.gms.internal.cw)v2.next();
          v1.put(v3.c, v3);
        }
        for ( i = null; ; i = String )
        {
          v5 = this.e.b(this.c.getPackageName(), i);
          v6 = v5;
          if ( v5 == null || cz.a(v5) != 0 )
            break;
          StringArrayList = v6.getStringArrayList("INAPP_PURCHASE_ITEM_LIST");
          v8 = v6.getStringArrayList("INAPP_PURCHASE_DATA_LIST");
          v9 = v6.getStringArrayList("INAPP_DATA_SIGNATURE_LIST");
          String = v6.getString("INAPP_CONTINUATION_TOKEN");
          for ( j = 0; j < StringArrayList.size(); ++j )
          {
            if ( v1.containsKey(StringArrayList.get(j)) )
            {
              v12 = (String)StringArrayList.get(j);
              v13 = (String)v8.get(j);
              v14 = (String)v9.get(j);
              v15 = (com.google.android.gms.internal.cw)v1.get(v12);
              if ( v15.b.equals(cz.p(v13)) )
              {
                v16 = new android.content.Intent();
                v16.putExtra("RESPONSE_CODE", 0);
                v16.putExtra("INAPP_PURCHASE_DATA", v13);
                v16.putExtra("INAPP_DATA_SIGNATURE", v14);
                eu.a.post((Runnable)new com.google.android.gms.internal.ct$1(this, v15, v16));
                v1.remove(v12);
              }
            }
          }
          if ( String == null || v1.isEmpty() )
            break;
        }
        for ( k = v1.keySet().iterator(); k.hasNext(); this.f.a((com.google.android.gms.internal.cw)v1.get((String)k.next())) )
          ;
      }
    }

    public final void A_()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        this.c.unbindService((android.content.ServiceConnection)this);
        this.e.a();
      }
    }

    public final void a()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        this.c.bindService(new android.content.Intent("com.android.vending.billing.InAppBillingService.BIND"), (android.content.ServiceConnection)this, 1);
        this.a(SystemClock.elapsedRealtime());
        this.c.unbindService((android.content.ServiceConnection)this);
        this.e.a();
      }
    }

    public void onServiceConnected(android.content.ComponentName p0, android.os.IBinder p1)
    {
      Object a;
      java.util.HashMap v4;
      java.util.Iterator v5;
      com.google.android.gms.internal.cw v6;
      String i;
      android.os.Bundle v9; // RETVAL
      android.os.Bundle v10;
      java.util.ArrayList StringArrayList;
      java.util.ArrayList v12;
      java.util.ArrayList v13;
      String String;
      int j;
      String v16;
      String v17;
      String v18;
      com.google.android.gms.internal.cw v19;
      android.content.Intent v20;
      java.util.Iterator k;
      a = this.a;
      synchronized ( a )
      {
        this.e.a(p1);
        if ( !this.g.isEmpty() )
        {
          v4 = new java.util.HashMap();
          v5 = this.g.iterator();
          while ( v5.hasNext() )
          {
            v6 = (com.google.android.gms.internal.cw)v5.next();
            v4.put(v6.c, v6);
          }
          for ( i = null; ; i = String )
          {
            v9 = this.e.b(this.c.getPackageName(), i);
            v10 = v9;
            if ( v9 == null || cz.a(v9) != 0 )
              break;
            StringArrayList = v10.getStringArrayList("INAPP_PURCHASE_ITEM_LIST");
            v12 = v10.getStringArrayList("INAPP_PURCHASE_DATA_LIST");
            v13 = v10.getStringArrayList("INAPP_DATA_SIGNATURE_LIST");
            String = v10.getString("INAPP_CONTINUATION_TOKEN");
            for ( j = 0; j < StringArrayList.size(); ++j )
            {
              if ( v4.containsKey(StringArrayList.get(j)) )
              {
                v16 = (String)StringArrayList.get(j);
                v17 = (String)v12.get(j);
                v18 = (String)v13.get(j);
                v19 = (com.google.android.gms.internal.cw)v4.get(v16);
                if ( v19.b.equals(cz.p(v17)) )
                {
                  v20 = new android.content.Intent();
                  v20.putExtra("RESPONSE_CODE", 0);
                  v20.putExtra("INAPP_PURCHASE_DATA", v17);
                  v20.putExtra("INAPP_DATA_SIGNATURE", v18);
                  eu.a.post((Runnable)new com.google.android.gms.internal.ct$1(this, v19, v20));
                  v4.remove(v16);
                }
              }
            }
            if ( String == null || v4.isEmpty() )
              break;
          }
          for ( k = v4.keySet().iterator(); k.hasNext(); this.f.a((com.google.android.gms.internal.cw)v4.get((String)k.next())) )
            ;
        }
        this.b = true;
        this.a.notify();
      }
    }

    public void onServiceDisconnected(android.content.ComponentName p0)
    {
      ev.B("In-app billing service disconnected.");
      this.e.a();
    }

}
