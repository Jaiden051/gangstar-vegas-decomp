// Decompiled from classes.dex (SourceFile: cn.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import com.google.android.gms.internal.c$j;
class cn implements java.lang.Runnable {
    // Fields
    private final android.content.Context a;
    private final com.google.android.gms.tagmanager.bm b;
    private final java.lang.String c;
    private final java.lang.String d;
    private com.google.android.gms.tagmanager.bg e;
    private volatile com.google.android.gms.tagmanager.r f;
    private volatile java.lang.String g;
    private volatile java.lang.String h;

    // Methods
    private cn(
            android.content.Context p0,
            String p1,
            com.google.android.gms.tagmanager.bm p2,
            com.google.android.gms.tagmanager.r p3)
    {
      super();
      this.a = p0;
      this.b = p2;
      this.c = p1;
      this.f = p3;
      this.d = "/r?id=" + p1;
      this.g = this.d;
      this.h = null;
    }

    public cn(android.content.Context p0, String p1, com.google.android.gms.tagmanager.r p2)
    {
      this(p0, p1, new com.google.android.gms.tagmanager.bm(), p2);
    }

    private boolean a()
    {
      android.net.NetworkInfo ActiveNetworkInfo; // RETVAL
    
      ActiveNetworkInfo = ((android.net.ConnectivityManager)this.a.getSystemService("connectivity")).getActiveNetworkInfo();
      if ( ActiveNetworkInfo != null && ActiveNetworkInfo.isConnected() )
        return true;
      bh.C("...no network connectivity");
      return false;
    }

    private void b()
 throws android.os.RemoteException {
      android.net.NetworkInfo ActiveNetworkInfo; // RETVAL
      int v2;
      com.google.android.gms.tagmanager.r f;
      StringBuilder v4; // RETVAL
      String g;
      String v6;
      String h;
      String v8;
      StringBuilder v9; // RETVAL
      String v10;
      com.google.android.gms.tagmanager.bl v11; // RETVAL
      com.google.android.gms.tagmanager.bl v12 = null;
      java.io.InputStream v13; // RETVAL
      java.io.ByteArrayOutputStream v14;
      com.google.android.gms.internal.c$j v15;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            ActiveNetworkInfo = ((android.net.ConnectivityManager)this.a.getSystemService("connectivity")).getActiveNetworkInfo();
            if ( ActiveNetworkInfo != null && ActiveNetworkInfo.isConnected() )
            {
            v2 = 1;
            }
            else
            {
            bh.C("...no network connectivity");
            v2 = 0;
            }
            if ( v2 == 0 )
            {
            this.e.b();
            return;
            }
            bh.C("Start loading resource from network ...");
            f = this.f;
            v4 = new StringBuilder().append(f.a());
            g = this.g;
            v6 = v4.append(g).append("&v=a65833898").toString();
            h = this.h;
            if ( h != null )
            {
            v8 = this.h;
            if ( !v8.trim().equals("") )
            {
            v9 = new StringBuilder().append(v6).append("&pv=");
            v10 = this.h;
            v6 = v9.append(v10).toString();
            }
            }
            if ( cd.lY().a().equals(cd$a.c) )
            v6 = v6 + "&gtm_debug=x";
            v11 = this.b.a();
            v12 = v11;
            try
            {
            try
            {
            v13 = v11.a(v6);
            try
            {
            v14 = new java.io.ByteArrayOutputStream();
            cq.b(v13, v14);
            v15 = c$j.b(v14.toByteArray());
            bh.C("Successfully loaded supplemented resource: " + v15);
            if ( v15.b == null && v15.a.length == 0 )
            bh.C("No change for container: " + this.c);
            this.e.a(v15);
            v12.a();
            bh.C("Load resource from network finished.");
            return;
            }
            catch ( java.io.IOException v17 )
            {
            bh.c("Error when parsing downloaded resources from url: " + v6 + " " + v17.getMessage(), v17);
            this.e.b();
            { _pc = 1; continue _sm; }
            }
            }
            catch ( java.io.FileNotFoundException e )
            {
            bh.D("No data is retrieved from the given url: " + v6 + ". Make sure container_id: " + this.c + " is correct.");
            this.e.b();
            v12.a();
            return;
            }
            catch ( java.io.IOException v16 )
            {
            bh.c("Error when loading resources from url: " + v6 + " " + v16.getMessage(), v16);
            this.e.b();
            v12.a();
            }
            return;
            }
            catch ( Throwable v18 )
            {
            v11.a();
            throw v18;
            }


          }
          case 1: {
            v12.a();
            return;
            
          }
          default: break _sm;
        }
      }
    }

    private String c()
    {
      com.google.android.gms.tagmanager.r f;
      StringBuilder v2; // RETVAL
      String g;
      String v4;
      String h;
      String v6;
      StringBuilder v7; // RETVAL
      String v8;
      f = this.f;
      v2 = new StringBuilder().append(f.a());
      g = this.g;
      v4 = v2.append(g).append("&v=a65833898").toString();
      h = this.h;
      if ( h != null )
      {
        v6 = this.h;
        if ( !v6.trim().equals("") )
        {
          v7 = new StringBuilder().append(v4).append("&pv=");
          v8 = this.h;
          v4 = v7.append(v8).toString();
        }
      }
      if ( cd.lY().a().equals(cd$a.c) )
        return v4 + "&gtm_debug=x";
      return v4;
    }

    final void a(com.google.android.gms.tagmanager.bg<com.google.android.gms.internal.c$j> p0)
    {
      this.e = p0;
    }

    final void a(String p0)
    {
      if ( p0 != null )
      {
        bh.z("Setting CTFE URL path: " + p0);
        this.g = p0;
      }
      else
      {
        this.g = this.d;
      }
    }

    final void b(String p0)
    {
      bh.z("Setting previous container version: " + p0);
      this.h = p0;
    }

    public void run()
    {
      try {
      android.net.NetworkInfo ActiveNetworkInfo; // RETVAL
      int v2;
      com.google.android.gms.tagmanager.r f;
      StringBuilder v4; // RETVAL
      String g;
      String v6;
      String h;
      String v8;
      StringBuilder v9; // RETVAL
      String v10;
      com.google.android.gms.tagmanager.bl v11; // RETVAL
      com.google.android.gms.tagmanager.bl v12 = null;
      java.io.InputStream v13; // RETVAL
      java.io.ByteArrayOutputStream v14;
      com.google.android.gms.internal.c$j v15;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            if ( this.e == null )
            throw new IllegalStateException("callback must be set before execute");
            this.e.a();
            ActiveNetworkInfo = ((android.net.ConnectivityManager)this.a.getSystemService("connectivity")).getActiveNetworkInfo();
            if ( ActiveNetworkInfo != null && ActiveNetworkInfo.isConnected() )
            {
            v2 = 1;
            }
            else
            {
            bh.C("...no network connectivity");
            v2 = 0;
            }
            if ( v2 == 0 )
            {
            this.e.b();
            return;
            }
            bh.C("Start loading resource from network ...");
            f = this.f;
            v4 = new StringBuilder().append(f.a());
            g = this.g;
            v6 = v4.append(g).append("&v=a65833898").toString();
            h = this.h;
            if ( h != null )
            {
            v8 = this.h;
            if ( !v8.trim().equals("") )
            {
            v9 = new StringBuilder().append(v6).append("&pv=");
            v10 = this.h;
            v6 = v9.append(v10).toString();
            }
            }
            if ( cd.lY().a().equals(cd$a.c) )
            v6 = v6 + "&gtm_debug=x";
            v11 = this.b.a();
            v12 = v11;
            try
            {
            try
            {
            v13 = v11.a(v6);
            try
            {
            v14 = new java.io.ByteArrayOutputStream();
            cq.b(v13, v14);
            v15 = c$j.b(v14.toByteArray());
            bh.C("Successfully loaded supplemented resource: " + v15);
            if ( v15.b == null && v15.a.length == 0 )
            bh.C("No change for container: " + this.c);
            this.e.a(v15);
            v12.a();
            bh.C("Load resource from network finished.");
            return;
            }
            catch ( java.io.IOException v17 )
            {
            bh.c("Error when parsing downloaded resources from url: " + v6 + " " + v17.getMessage(), v17);
            this.e.b();
            { _pc = 1; continue _sm; }
            }
            }
            catch ( java.io.FileNotFoundException e )
            {
            bh.D("No data is retrieved from the given url: " + v6 + ". Make sure container_id: " + this.c + " is correct.");
            this.e.b();
            v12.a();
            return;
            }
            catch ( java.io.IOException v16 )
            {
            bh.c("Error when loading resources from url: " + v6 + " " + v16.getMessage(), v16);
            this.e.b();
            v12.a();
            }
            return;
            }
            catch ( Throwable v18 )
            {
            v11.a();
            throw v18;
            }


          }
          case 1: {
            v12.a();
            return;
            
          }
          default: break _sm;
        }
      }
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}
