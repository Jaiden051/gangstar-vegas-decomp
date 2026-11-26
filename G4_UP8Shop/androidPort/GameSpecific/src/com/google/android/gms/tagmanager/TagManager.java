// Decompiled from classes.dex (SourceFile: TagManager.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

public class TagManager {
    // Fields
    private static com.google.android.gms.tagmanager.TagManager f;
    private final com.google.android.gms.tagmanager.TagManager$a a;
    private final android.content.Context b;
    private final com.google.android.gms.tagmanager.DataLayer c;
    private final java.util.concurrent.ConcurrentMap d;
    private final com.google.android.gms.tagmanager.r e;

    // Methods
    private TagManager(
            android.content.Context p0,
            com.google.android.gms.tagmanager.TagManager$a p1,
            com.google.android.gms.tagmanager.DataLayer p2)
    {
      super();
      if ( p0 == null )
        throw new NullPointerException("context cannot be null");
      this.b = p0.getApplicationContext();
      this.a = p1;
      this.d = new java.util.concurrent.ConcurrentHashMap();
      this.c = p2;
      this.c.a((com.google.android.gms.tagmanager.DataLayer$b)new com.google.android.gms.tagmanager.TagManager$1(this));
      this.c.a((com.google.android.gms.tagmanager.DataLayer$b)new com.google.android.gms.tagmanager.d(this.b));
      this.e = new com.google.android.gms.tagmanager.r();
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.tagmanager.ContainerHolder> a(
            String p0,
            int p1)
 throws android.os.RemoteException {
      com.google.android.gms.common.api.PendingResult result; // RETVAL
    
      result = (com.google.android.gms.common.api.PendingResult)this.a.a(this.b, this, null, p0, p1, this.e);
      ((com.google.android.gms.tagmanager.o)result).f();
      return result;
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.tagmanager.ContainerHolder> a(
            String p0,
            int p1,
            android.os.Handler p2)
 throws android.os.RemoteException {
      com.google.android.gms.common.api.PendingResult result; // RETVAL
    
      result = (com.google.android.gms.common.api.PendingResult)this.a.a(this.b, this, p2.getLooper(), p0, p1, this.e);
      ((com.google.android.gms.tagmanager.o)result).f();
      return result;
    }

    /* synthetic */ static void a(com.google.android.gms.tagmanager.TagManager p0, String p1)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      java.util.Iterator i;
      for ( i = p0.d.keySet().iterator(); i.hasNext(); ((com.google.android.gms.tagmanager.n)i.next()).a(p1) )
        ;
    }

    private void a(String p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      java.util.Iterator i;
      for ( i = this.d.keySet().iterator(); i.hasNext(); ((com.google.android.gms.tagmanager.n)i.next()).a(p0) )
        ;
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.tagmanager.ContainerHolder> b(
            String p0,
            int p1)
    {
      com.google.android.gms.common.api.PendingResult result; // RETVAL
    
      result = (com.google.android.gms.common.api.PendingResult)this.a.a(this.b, this, null, p0, p1, this.e);
      ((com.google.android.gms.tagmanager.o)result).g();
      return result;
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.tagmanager.ContainerHolder> b(
            String p0,
            int p1,
            android.os.Handler p2)
    {
      com.google.android.gms.common.api.PendingResult result; // RETVAL
    
      result = (com.google.android.gms.common.api.PendingResult)this.a.a(this.b, this, p2.getLooper(), p0, p1, this.e);
      ((com.google.android.gms.tagmanager.o)result).g();
      return result;
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.tagmanager.ContainerHolder> c(
            String p0,
            int p1)
    {
      com.google.android.gms.common.api.PendingResult result; // RETVAL
    
      result = (com.google.android.gms.common.api.PendingResult)this.a.a(this.b, this, null, p0, p1, this.e);
      ((com.google.android.gms.tagmanager.o)result).h();
      return result;
    }

    private com.google.android.gms.common.api.PendingResult<com.google.android.gms.tagmanager.ContainerHolder> c(
            String p0,
            int p1,
            android.os.Handler p2)
    {
      com.google.android.gms.common.api.PendingResult result; // RETVAL
    
      result = (com.google.android.gms.common.api.PendingResult)this.a.a(this.b, this, p2.getLooper(), p0, p1, this.e);
      ((com.google.android.gms.tagmanager.o)result).h();
      return result;
    }

    public static com.google.android.gms.tagmanager.TagManager getInstance(android.content.Context p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      Object v1;
      v1 = com.google.android.gms.tagmanager.TagManager.class;
      synchronized ( v1 )
      {
        if ( f == null )
        {
          if ( p0 == null )
          {
            bh.A("TagManager.getInstance requires non-null context.");
            throw new NullPointerException();
          }
          f = new com.google.android.gms.tagmanager.TagManager(p0, (com.google.android.gms.tagmanager.TagManager$a)new com.google.android.gms.tagmanager.TagManager$2(), new com.google.android.gms.tagmanager.DataLayer((com.google.android.gms.tagmanager.DataLayer$c)new com.google.android.gms.tagmanager.v(p0)));
        }
        return f;
      }
    }

    private static void setVerboseLoggingEnabled(boolean p0)
    {
      int v1;
      if ( p0 )
        v1 = 2;
      else
        v1 = 5;
      bh.setLogLevel(v1);
    }

    public final com.google.android.gms.tagmanager.DataLayer a()
    {
      return this.c;
    }

    final void a(com.google.android.gms.tagmanager.n p0)
    {
      this.d.put(p0, Boolean.valueOf(true));
    }

    final synchronized boolean a(android.net.Uri p0)
    {
      com.google.android.gms.tagmanager.cd v2;
      String v3;
      int v4; // RETVAL
      int v5;
      java.util.Iterator v8;
      com.google.android.gms.tagmanager.n v9;
      java.util.Iterator v11;
      com.google.android.gms.tagmanager.n v12;
      v2 = cd.lY();
      if ( !v2.a(p0) )
        return false;
      v3 = v2.c();
      v4 = v2.a().ordinal();
      v5 = TagManager$3.a[v4];
      try
      {
        switch ( v5 )
        {
          case 1:
            v8 = this.d.keySet().iterator();
            while ( v8.hasNext() )
            {
              v9 = (com.google.android.gms.tagmanager.n)v8.next();
              if ( v9.e().equals(v3) )
              {
                v9.b(null);
                v9.c();
              }
            }
            break;
          case 2:
          case 3:
            v11 = this.d.keySet().iterator();
            while ( v11.hasNext() )
            {
              v12 = (com.google.android.gms.tagmanager.n)v11.next();
              if ( v12.e().equals(v3) )
              {
                v12.b(v2.b());
                v12.c();
              }
              else if ( v12.f() != null )
              {
                v12.b(null);
                v12.c();
              }
            }
            break;
          default:
            return true;
        }
        return true;
      }
      finally
      {
      }
    }

    final boolean b(com.google.android.gms.tagmanager.n p0)
    {
      return this.d.remove(p0) != null;
    }

}
