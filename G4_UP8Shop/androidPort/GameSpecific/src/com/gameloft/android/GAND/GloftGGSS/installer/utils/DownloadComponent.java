// Decompiled from classes.dex (SourceFile: DownloadComponent.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

import com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller;
import com.gameloft.android.GAND.GloftGGSS.installer.Utils;
import org.apache.http.HttpVersion;
public class DownloadComponent {
    // Fields
    public static java.lang.String l;
    static java.lang.String m;
    private java.util.Vector A;
    private long B;
    private int C;
    private com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient D;
    private com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient E;
    private com.gameloft.android.GAND.GloftGGSS.installer.utils.SimpleDownload F;
    private com.gameloft.android.GAND.GloftGGSS.installer.utils.Downloader G;
    public java.lang.String a;
    java.util.Vector b;
    int c;
    long d;
    long e;
    long f;
    long g;
    long h;
    long i;
    long j;
    boolean k;
    int n;
    boolean o;
    com.gameloft.android.GAND.GloftGGSS.installer.utils.m p;
    private final int q;
    private java.lang.String r;
    private long s;
    private java.lang.String t;
    private java.lang.String u;
    private java.lang.String v;
    private java.lang.String w;
    private boolean x;
    private boolean y;
    private java.lang.String z;

    // Methods
    static
    {
      l = "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files";
      m = l + "/";
    }

    public DownloadComponent(String p0, String p1)
    {
      super();
      this.q = 0x8000;
      this.r = "";
      this.a = "";
      this.s = -1;
      this.t = "";
      this.u = "";
      this.v = null;
      this.w = "";
      this.x = false;
      this.y = false;
      this.z = "";
      this.B = -1;
      this.C = 0;
      this.b = new java.util.Vector();
      this.d = 0;
      this.e = 0;
      this.f = 0;
      this.g = 0;
      this.h = 0;
      this.i = 0;
      this.j = 0;
      this.k = false;
      this.n = 1;
      this.o = false;
      this.p = null;
      this.u = p0;
      this.r = p1;
      this.z = GameInstaller.SaveFolder + "/pack" + this.r + ".info";
    }

    private DownloadComponent(String p0, String p1, String p2, String p3)
    {
      super();
      this.q = 0x8000;
      this.r = "";
      this.a = "";
      this.s = -1;
      this.t = "";
      this.u = "";
      this.v = null;
      this.w = "";
      this.x = false;
      this.y = false;
      this.z = "";
      this.B = -1;
      this.C = 0;
      this.b = new java.util.Vector();
      this.d = 0;
      this.e = 0;
      this.f = 0;
      this.g = 0;
      this.h = 0;
      this.i = 0;
      this.j = 0;
      this.k = false;
      this.n = 1;
      this.o = false;
      this.p = null;
      this.u = p0;
      this.r = p1;
      this.w = p2;
      this.t = p3;
      this.z = GameInstaller.SaveFolder + "/pack" + this.r + ".info";
    }

    private DownloadComponent(String p0, String p1, String p2, String p3, long p4, boolean p6)
    {
      super();
      this.q = 0x8000;
      this.r = "";
      this.a = "";
      this.s = -1;
      this.t = "";
      this.u = "";
      this.v = null;
      this.w = "";
      this.x = false;
      this.y = false;
      this.z = "";
      this.B = -1;
      this.C = 0;
      this.b = new java.util.Vector();
      this.d = 0;
      this.e = 0;
      this.f = 0;
      this.g = 0;
      this.h = 0;
      this.i = 0;
      this.j = 0;
      this.k = false;
      this.n = 1;
      this.o = false;
      this.p = null;
      this.u = p0;
      this.r = p1;
      this.w = p2;
      this.a = p3;
      this.s = p4;
      this.o = p6;
      this.z = GameInstaller.SaveFolder + "/pack" + this.r + ".info";
    }

    private long A()
    {
      return this.f;
    }

    private String B()
    {
      return this.u;
    }

    private boolean C()
    {
      boolean v1;
      v1 = false;
      try
      {
        if ( this.D != null )
          this.D.a();
        else
          this.D = new com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient();
        if ( this.D.a(this.u) != null )
          return true;
        return v1;
      }
      catch ( java.net.SocketTimeoutException e )
      {
        HttpClient.incrementConnectionTimeout();
        return v1;
      }
      catch ( java.io.FileNotFoundException e )
      {
        return v1;
      }
      catch ( Exception e )
      {
      }
      return v1;
    }

    private int a(String p0, int p1)
    {
      int v3 = 0;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.m v4 = null;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.i v5 = null;
      int v6 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v3 = 0;
            v4 = null;
            _pc = 1;
            continue _sm;
          case 1:
            if ( !(p1 < this.A.size()) ) { _pc = 4; continue _sm; }
            v5 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.A.get(p1);
            if ( v4 == null )
            v4 = new com.gameloft.android.GAND.GloftGGSS.installer.utils.m(m
            + v5.a().replace(".\\\\", "").replace(".\\", "").replace("\\", "/")
            + "/"
            + p0);
            if ( !(!Utils.getSplitName(v5.b()).equals(p0)) ) { _pc = 2; continue _sm; }
            _pc = 4;
            continue _sm;
          case 2:
            if ( v4.a(v5.e()) )
            {
            this.h += v5.f();
            Utils.markAsSaved(v5);
            }
            else
            {
            this.b.add(v5);
            this.d += v5.d();
            this.i += v5.f();
            if ( v5.f() > v3 )
            {
            v6 = v5.f();
            { _pc = 3; continue _sm; }
            }
            }
            v6 = v3;
            _pc = 3;
            continue _sm;
          case 3:
            ++p1;
            v3 = v6;
            _pc = 1;
            continue _sm;
          case 4:
            v4.b();
            return v3;
        }
      }
}

    private void a(int p0)
    {
      this.n = p0;
    }

    private void a(long p0)
    {
      this.s = p0;
    }

    private void a(boolean p0)
    {
      this.o = p0;
    }

    private boolean a(
            com.gameloft.android.GAND.GloftGGSS.installer.utils.i p0,
            boolean p1,
            boolean p2,
            String p3)
    {
      int v5 = 0;
      String v6 = null;
      String v9 = null;
      long v10 = 0L;
      java.io.File v11 = null;
      boolean v12 = false;
      int v13 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v5 = 0;
            v6 = p0.b();
            if ( v6.contains(".split_") )
            {
            v5 = Integer.parseInt(v6.substring(v6.lastIndexOf(95) + 1));
            v6 = v6.substring(0, v6.lastIndexOf(46));
            }
            if ( v6.endsWith("libnativedummy.so") )
            return false;
            if ( v6.endsWith(".so") )
            {
            v9 = GameInstaller.LIBS_PATH + v6;
            }
            else if ( this.r.startsWith("patch") || this.r.startsWith("main") )
            {
            v9 = GameInstaller.marketPath + p0.a().replace(".\\\\", "").replace(".\\", "").replace("\\", "/") + "/" + p0.b();
            }
            else
            {
            v9 = GameInstaller.DATA_PATH + p0.a().replace(".\\\\", "").replace(".\\", "").replace("\\", "/") + "/" + p0.b();
            }
            v10 = p0.e();
            if ( v9.contains(".split_") )
            {
            v5 = Integer.parseInt(v9.substring(v9.lastIndexOf(95) + 1));
            v9 = v9.substring(0, v9.lastIndexOf(46));
            }
            v11 = new java.io.File(v9);
            if ( v11.exists() )
            {
            if ( v5 <= 0 )
            v12 = v11.length() != p0.d();
            else
            v12 = !Utils.hasBeenDownloaded(p0, false) || !goodSize(p0);
            }
            else
            {
            v12 = true;
            }
            if ( v12 && !v11.exists() && Utils.hasBeenDownloaded(p0, false) )
            Utils.markAsNotDownloaded(p0);
            if ( !(v12 || v10 == 0) ) { _pc = 2; continue _sm; }
            if ( v5 > 0 )
            Utils.hasBeenDownloaded(p0, false);
            _pc = 1;
            continue _sm;
          case 1:
            v13 = 0;
            _pc = 6;
            continue _sm;
          case 2:
            if ( !p3.equals(p0.b()) && v5 > 0 )
            {
            if ( p1 && (this.p == null || this.p.a().compareTo(v9) != 0) )
            this.p = new com.gameloft.android.GAND.GloftGGSS.installer.utils.m(v9);
            if ( !p1 )
            {
            v13 = 0;
            { _pc = 6; continue _sm; }
            }
            if ( p0.i().equals("") )
            {
            v13 = !this.p.a(v10) ? 1 : 0;
            { _pc = 6; continue _sm; }
            }
            { _pc = 3; continue _sm; }
            }
            if ( v5 > 0 )
            { _pc = 1; continue _sm; }
            if ( !(p1) ) { _pc = 5; continue _sm; }
            if ( !(!p0.i().equals("")) ) { _pc = 4; continue _sm; }
            _pc = 3;
            continue _sm;
          case 3:
            v13 = MD5.isValidChecksum(v9, p0.i()) ? 1 : 0;
            _pc = 6;
            continue _sm;
          case 4:
            v13 = !CRC.isValidChecksum(v9, v10, v5) ? 1 : 0;
            _pc = 6;
            continue _sm;
          case 5:
            {
            v13 = 0;
            }
            _pc = 6;
            continue _sm;
          case 6:
            if ( v12 || v13 != 0 )
            {
            if ( this.A.size() != 1 || this.x )
            {
            this.x = false;
            this.j = 0;
            try
            {
            if ( v11.exists() && v5 <= 0 )
            v11.delete();
            }
            catch ( Exception e )
            {
            }
            }
            else
            {
            this.j = v11.length();
            }
            }
            return v12 || v13 != 0;
        }
      }
}

    private void c(String p0)
    {
      this.w = p0;
    }

    private void d(String p0)
    {
      this.u = p0;
    }

    private void e(String p0)
    {
      this.a = p0;
    }

    private static java.io.DataInputStream generateDataStreamFromConnection(
            java.net.HttpURLConnection p0)
    {
      int v1;
      v1 = 60000;
      try
      {
        p0.setConnectTimeout(60000);
        p0.connect();
        return new java.io.DataInputStream(p0.getInputStream());
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public static boolean goodSize(com.gameloft.android.GAND.GloftGGSS.installer.utils.i p0)
    {
      String v1;
      String v2;
      String v3;
      java.io.File v4;
      v1 = p0.a().replace(".\\\\", "").replace(".\\", "").replace("\\", "/") + "/" + p0.b();
      v2 = v1.substring(0, v1.lastIndexOf(46));
      if ( v2.endsWith(".so") )
        v3 = GameInstaller.LIBS_PATH + v2;
      else
        v3 = GameInstaller.DATA_PATH + v2;
      v4 = new java.io.File(v3);
      if ( !v4.exists() )
        return false;
      if ( (v4.length() + 2047) / 2048 == Utils.getSplitNumber(p0.b()) )
        return v4.length() % 2048 == p0.d();
      return v4.length() >= Utils.getSplitNumber(p0.b()) << 11;
    }

    private static boolean verifySplitChecksum(boolean p0)
    {
      return p0;
    }

    private String x()
    {
      return this.z;
    }

    private String y()
    {
      return this.w;
    }

    private boolean z()
    {
      return this.x;
    }

    public final int a(boolean p0, com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p1)
    {
      int v5 = 0;
      int v6 = 0;
      int v7 = 0;
      String v8 = null;
      int v9 = 0;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.i v10 = null;
      int v11 = 0;
      String v12 = null;
      int v13 = 0;
      String SplitName = null;
      int v15 = 0;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.m v16 = null;
      int i = 0;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.i v18 = null;
      int v19 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( this.A == null )
            return this.n != 0 ? 1 : 0;
            v5 = this.A.size();
            this.b.clear();
            this.d = 0;
            this.h = 0;
            this.i = 0;
            v6 = 0;
            v7 = -1;
            v8 = "";
            v9 = 0;
            _pc = 1;
            continue _sm;
          case 1:
            if ( !(v9 < v5) ) { _pc = 10; continue _sm; }
            v10 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.A.get(v9);
            if ( this.a(v10, p0, false, v8) )
            {
            this.b.add(v10);
            this.d += v10.d();
            this.i += v10.f();
            if ( v10.f() <= v6 )
            v11 = v6;
            else
            v11 = v10.f();
            this.h += this.j;
            this.d -= this.j;
            this.i -= this.j;
            v12 = v8;
            v13 = v11;
            SplitName = v12;
            { _pc = 6; continue _sm; }
            }
            if ( Utils.getSplitName(v10.b()).equals(v8) || Utils.hasBeenDownloaded(v10, false) && goodSize(v10) )
            {
            this.h += v10.f();
            SplitName = v8;
            v13 = v6;
            { _pc = 6; continue _sm; }
            }
            if ( v8 == "" )
            { _pc = 4; continue _sm; }
            v15 = 0;
            v16 = null;
            i = v7;
            _pc = 2;
            continue _sm;
          case 2:
            if ( i >= this.A.size() )
            { _pc = 3; continue _sm; }
            v18 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.A.get(i);
            if ( v16 == null )
            v16 = new com.gameloft.android.GAND.GloftGGSS.installer.utils.m(m
            + v18.a().replace(".\\\\", "").replace(".\\", "").replace("\\", "/")
            + "/"
            + v8);
            if ( !(!Utils.getSplitName(v18.b()).equals(v8)) ) { _pc = 7; continue _sm; }
            _pc = 3;
            continue _sm;
          case 3:
            v16.b();
            if ( v15 > v6 )
            {
            v13 = v15;
            { _pc = 5; continue _sm; }
            }
            _pc = 4;
            continue _sm;
          case 4:
            v13 = v6;
            _pc = 5;
            continue _sm;
          case 5:
            if ( v10.b().contains(".split_") )
            {
            SplitName = Utils.getSplitName(v10.b());
            v7 = v9;
            }
            else
            {
            v7 = -1;
            SplitName = "";
            }
            this.h += this.j;
            _pc = 6;
            continue _sm;
          case 6:
            ++p1.ba;
            p1.a();
            ++v9;
            v6 = v13;
            v8 = SplitName;
            _pc = 1;
            continue _sm;
          case 7:
            if ( v16.a(v18.e()) )
            {
            this.h += v18.f();
            Utils.markAsSaved(v18);
            }
            else
            {
            this.b.add(v18);
            this.d += v18.d();
            this.i += v18.f();
            if ( v18.f() > v15 )
            {
            v19 = v18.f();
            { _pc = 8; continue _sm; }
            }
            }
            v19 = v15;
            _pc = 8;
            continue _sm;
          case 8:
            v15 = v19;
            _pc = 9;
            continue _sm;
          case 9:
            ++i;
            _pc = 2;
            continue _sm;
          case 10:
            Utils.requestResetDownloadedFile();
            this.p = null;
            this.g = this.i + this.h;
            this.f = (int)((this.d >> 20) + 1);
            this.e = (int)((this.d >> 20) + 1);
            this.k = false;
            if ( this.d == 0 )
            this.k = true;
            return this.b.size() > 0 ? 1 : 0;
        }
      }
}

    public final String a()
    {
      return this.r;
    }

    public final void a(android.content.Context p0)
    {
      com.gameloft.android.GAND.GloftGGSS.installer.utils.j v2;
      try
      {
        v2 = new com.gameloft.android.GAND.GloftGGSS.installer.utils.j(p0);
        this.A = v2.a(this.z);
        this.B = v2.e;
        this.C = this.A.size();
      }
      catch ( java.io.IOException e )
      {
      }
    }

    public final boolean a(String p0)
    {
      boolean v2;
      int i;
      v2 = false;
      if ( this.A != null )
      {
        for ( i = 0; i < this.A.size(); ++i )
        {
          if ( ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.A.get(i)).b().equals(p0) )
            return true;
        }
      }
      return v2;
    }

    public final void b(String p0)
    {
      com.gameloft.android.GAND.GloftGGSS.installer.utils.Downloader G;
      if ( this.b != null && this.b.size() > 0 )
      {
        if ( this.a.contains(".amz") || this.a.contains(".jar") )
        {
          if ( this.G != null )
          {
            G = this.G;
            G.i = this.b;
            G.f = false;
            try
            {
              G.a();
            }
            catch ( Exception e )
            {
              GameInstaller.addErrorNumber(552);
              G.f = true;
            }
          }
          else
          {
            this.G = new com.gameloft.android.GAND.GloftGGSS.installer.utils.Downloader(this.v, p0, this.b, this.c + 4, this.i);
          }
          this.G.b();
        }
        else if ( this.F == null || this.F.a )
        {
          this.F = new com.gameloft.android.GAND.GloftGGSS.installer.utils.SimpleDownload(this.u, p0, this.b, this.j);
          this.F.start();
        }
      }
      else if ( this.F != null )
      {
        this.F.e();
      }
    }

    public final boolean b()
    {
      return this.y;
    }

    public final void c()
    {
      this.x = true;
    }

    public final int d()
    {
      try
      {
        return Integer.parseInt(this.w);
      }
      catch ( NumberFormatException e )
      {
        return -1;
      }
    }

    public final long e()
    {
      return this.i;
    }

    public final long f()
    {
      return this.e;
    }

    public final int g()
    {
      return this.b.size();
    }

    public final int h()
    {
      if ( this.A != null )
        return this.A.size();
      else
        return 0;
    }

    public final long i()
    {
      return this.g;
    }

    public final long j()
    {
      return this.h;
    }

    public final boolean k()
    {
      return this.o;
    }

    public final long l()
    {
      return this.B;
    }

    public final int m()
    {
      return this.C;
    }

    public final boolean n()
    {
      long ContentLength = 0L;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient D = null;
      boolean v5 = false;
      java.net.HttpURLConnection v7 = null;
      long v8 = 0L;
      String v9 = null;
      org.apache.http.impl.client.DefaultHttpClient v10 = null;
      int n = 0;
      java.io.File v12 = null;
      java.io.FileOutputStream v13 = null;
      boolean v14 = false;
      boolean v15 = false;
      java.net.HttpURLConnection v16 = null;
      java.io.DataInputStream DataStreamFromConnection = null; // RETVAL
      java.io.DataInputStream v18 = null;
      int i = 0;
      int v20 = 0;
      byte[] v21 = null;
      java.io.DataOutputStream v22 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            ContentLength = -1;
            if ( !(!this.a.equals("")) ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            try
            {
            v12 = new java.io.File(this.z);
            if ( v12.exists() )
            v12.delete();
            v12.createNewFile();
            v13 = new java.io.FileOutputStream(this.z);
            v14 = this.a.contains(".amz");
            if ( v14 || (v15 = this.a.contains(".jar")) )
            {
            try
            {
            v16 = (java.net.HttpURLConnection)new java.net.URL(this.u).openConnection();
            DataStreamFromConnection = generateDataStreamFromConnection(v16);
            v18 = DataStreamFromConnection;
            if ( DataStreamFromConnection != null )
            {
            this.c = DataStreamFromConnection.readInt();
            for ( i = 0; i < this.c; i += v20 )
            {
            v20 = this.c - i;
            if ( v20 > 0x8000 )
            v20 = 0x8000;
            v21 = new byte[v20];
            v18.readFully(v21);
            v13.write(v21);
            v13.flush();
            }
            v13.close();
            new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.utils.e(this, v18, v16)).start();
            return true;
            }
            v5 = false;
            }
            catch ( Exception e )
            {
            return false;
            }
            return v5;
            }
            try
            {
            v22 = new java.io.DataOutputStream(v13);
            v22.writeUTF(".\\");
            v22.writeInt(1);
            v22.writeInt(0);
            v22.writeInt((int)this.s);
            v22.writeLong(0);
            v22.writeUTF(this.a);
            v22.writeInt((int)this.s);
            v22.writeUTF(this.a + ".zip");
            v22.close();
            v13.close();
            return true;
            }
            catch ( java.io.IOException e )
            {
            }
            return true;
            }
            catch ( java.io.IOException e )
            {
            return false;
            }
            


          case 2:
            D = this.D;
            if ( D == null && !this.C() )
            return false;
            try
            {
            if ( this.v == null )
            this.v = this.D.b(this.u);
            v7 = (java.net.HttpURLConnection)new java.net.URL(this.v.replace(" ", "%20")).openConnection();
            v7.setConnectTimeout(60000);
            v7.connect();
            try
            {
            v8 = Long.parseLong(v7.getHeaderField("Content-Length"));
            }
            catch ( Exception e )
            {
            v8 = -1;
            }
            if ( v8 == -1 )
            {
            try
            {
            v9 = this.v.replace(" ", "%20");
            v10 = new org.apache.http.impl.client.DefaultHttpClient();
            v10.getParams().setParameter("http.protocol.version", HttpVersion.HTTP_1_0);
            ContentLength = v10.execute(new org.apache.http.client.methods.HttpGet(v9)).getEntity().getContentLength();
            }
            catch ( Exception e )
            {
            }
            }
            else
            {
            ContentLength = v8;
            }
            new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.utils.d(this, v7)).start();
            if ( ContentLength <= 0 )
            {
            if ( this.n == 1 )
            return false;
            n = this.n;
            if ( n == 0 )
            return true;
            }
            else
            {
            this.a = this.v.substring(this.v.lastIndexOf(47) + 1);
            this.s = ContentLength;
            if ( this.s <= 0 )
            return false;
            }
            { _pc = 1; continue _sm; }
            }
            catch ( java.io.IOException e )
            {
            return false;
            }
            

        }
      }
}

    public final java.util.ArrayList<String> o()
    {
      java.util.ArrayList v3;
      int i;
      String v5;
      if ( this.A == null )
        return null;
      v3 = new java.util.ArrayList();
      for ( i = 0; i < this.A.size(); ++i )
      {
        v5 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.A.get(i)).b();
        if ( v5.contains(".split_") )
          v5 = v5.substring(0, v5.lastIndexOf(46));
        if ( v5.endsWith(".so") && !v3.contains(v5) )
          v3.add(v5);
      }
      return v3;
    }

    public final boolean p()
    {
      boolean v1;
      String v2; // RETVAL
    
      v1 = true;
      if ( !this.w.equals("") )
        return v1;
      try
      {
        v2 = this.u + "&head=1";
        if ( this.E != null )
          this.E.a();
        else
          this.E = new com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient();
        this.E.a(v2);
        return v1;
      }
      catch ( Exception e )
      {
        return false;
      }
    }

    public final void q()
    {
      if ( this.w.equals("") )
      {
        this.w = Integer.toString(this.E.a("x-gl-version", -1));
        this.y = this.E.a("x-gl-generic", true);
        this.E.a();
        this.E = null;
      }
    }

    public final void r()
    {
      if ( this.G != null )
      {
        this.G.d();
      }
      else if ( this.F != null )
      {
        this.F.a();
      }
    }

    public final void s()
    {
      if ( this.G != null )
        this.G.c();
      if ( this.F != null )
        SimpleDownload.update();
    }

    public final boolean t()
    {
      boolean v1;
      v1 = true;
      if ( !this.k )
      {
        if ( this.G != null )
        {
          return this.G.e;
        }
        else if ( this.F != null )
        {
          return this.F.c();
        }
      }
      return v1;
    }

    public final long u()
    {
      if ( this.G != null )
        return this.G.e();
      if ( this.F != null )
        return this.F.d();
      return 0;
    }

    public final boolean v()
    {
      if ( this.G != null )
        return this.G.f;
      else
        return this.F != null && this.F.b();
    }

    public final void w()
    {
      if ( this.G != null )
      {
        this.G.f = true;
      }
      else if ( this.F != null )
      {
        this.F.a();
      }
    }

}
