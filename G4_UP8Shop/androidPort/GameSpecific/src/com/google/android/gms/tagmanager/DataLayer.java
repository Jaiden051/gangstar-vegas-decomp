// Decompiled from classes.dex (SourceFile: DataLayer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.util.regex.Pattern;
public class DataLayer {
    // Fields
    public static final java.lang.Object a;
    public static java.lang.String b;
    static final java.lang.String[] c;
    private static final java.util.regex.Pattern d;
    private final java.util.concurrent.ConcurrentHashMap e;
    private final java.util.Map f;
    private final java.util.concurrent.locks.ReentrantLock g;
    private final java.util.LinkedList h;
    private final com.google.android.gms.tagmanager.DataLayer$c i;
    private final java.util.concurrent.CountDownLatch j;

    // Methods
    static
    {
      a = new Object();
      c = "gtm.lifetime".toString().split("\\.");
      d = Pattern.compile("(\\d+)\\s*([smhd]?)");
    }

    DataLayer()
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      this((com.google.android.gms.tagmanager.DataLayer$c)new com.google.android.gms.tagmanager.DataLayer$1());
    }

    DataLayer(com.google.android.gms.tagmanager.DataLayer$c p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      super();
      this.i = p0;
      this.e = new java.util.concurrent.ConcurrentHashMap();
      this.f = new java.util.HashMap();
      this.g = new java.util.concurrent.locks.ReentrantLock();
      this.h = new java.util.LinkedList();
      this.j = new java.util.concurrent.CountDownLatch(1);
      this.i.a((com.google.android.gms.tagmanager.DataLayer$c$a)new com.google.android.gms.tagmanager.DataLayer$2(this));
    }

    private static Object C(java.util.Map<String, Object> p0)
    {
      String[] v1;
      int v2;
      int i;
      Object v5;
      v1 = c;
      v2 = v1.length;
      for ( i = 0; i < v2; ++i )
      {
        v5 = v1[i];
        if ( !(p0 instanceof java.util.Map) )
          return null;
        p0 = (java.util.Map)((java.util.Map)p0).get(v5);
      }
      return p0;
    }

    /* synthetic */ static java.util.concurrent.CountDownLatch a(com.google.android.gms.tagmanager.DataLayer p0)
    {
      return p0.j;
    }

    private void a()
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      this.i.a((com.google.android.gms.tagmanager.DataLayer$c$a)new com.google.android.gms.tagmanager.DataLayer$2(this));
    }

    /* synthetic */ static void a(com.google.android.gms.tagmanager.DataLayer p0, java.util.Map p1)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      p0.b(p1);
    }

    private void a(String p0, Object p1)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      this.a(c(p0, null));
    }

    private void a(String p0, java.util.Map<String, Object> p1)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      java.util.HashMap v3;
      v3 = new java.util.HashMap(p1);
      v3.put("event", p0);
      this.a(v3);
    }

    private void a(java.util.List<Object> p0, java.util.List<Object> p1)
    {
      int i;
      Object v4; // RETVAL
      Object v5;
      while ( p1.size() < p0.size() )
        p1.add(null);
      for ( i = 0; i < p0.size(); ++i )
      {
        v4 = p0.get(i);
        v5 = v4;
        if ( v4 instanceof java.util.List )
        {
          if ( !(p1.get(i) instanceof java.util.List) )
            p1.set(i, new java.util.ArrayList());
          this.a((java.util.List)v5, (java.util.List)p1.get(i));
        }
        else if ( v4 instanceof java.util.Map )
        {
          if ( !(p1.get(i) instanceof java.util.Map) )
            p1.set(i, new java.util.HashMap());
          this.a((java.util.Map)v5, (java.util.Map)p1.get(i));
        }
        else if ( v4 != a )
        {
          p1.set(i, v4);
        }
      }
    }

    private void a(
            java.util.Map<String, Object> p0,
            String p1,
            java.util.Collection<com.google.android.gms.tagmanager.DataLayer$a> p2)
    {
      java.util.Iterator v4;
      java.util.Map.Entry v5;
      StringBuilder v6;
      String v7;
      String v8;
      v4 = p0.entrySet().iterator();
      while ( v4.hasNext() )
      {
        v5 = (java.util.Map.Entry)v4.next();
        v6 = new StringBuilder().append(p1);
        if ( p1.length() != 0 )
          v7 = ".";
        else
          v7 = "";
        v8 = v6.append(v7).append((String)v5.getKey()).toString();
        if ( v5.getValue() instanceof java.util.Map )
        {
          this.a((java.util.Map)v5.getValue(), v8, p2);
        }
        else if ( !v8.equals("gtm.lifetime") )
        {
          p2.add(new com.google.android.gms.tagmanager.DataLayer$a(v8, v5.getValue()));
        }
      }
    }

    private void a(java.util.Map<String, Object> p0, java.util.Map<String, Object> p1)
    {
      java.util.Iterator v3;
      String v4;
      Object v5; // RETVAL
      Object v6;
      v3 = p0.keySet().iterator();
      while ( v3.hasNext() )
      {
        v4 = (String)v3.next();
        v5 = p0.get(v4);
        v6 = v5;
        if ( v5 instanceof java.util.List )
        {
          if ( !(p1.get(v4) instanceof java.util.List) )
            p1.put(v4, new java.util.ArrayList());
          this.a((java.util.List)v6, (java.util.List)p1.get(v4));
        }
        else if ( v5 instanceof java.util.Map )
        {
          if ( !(p1.get(v4) instanceof java.util.Map) )
            p1.put(v4, new java.util.HashMap());
          this.a((java.util.Map)v6, (java.util.Map)p1.get(v4));
        }
        else
        {
          p1.put(v4, v5);
        }
      }
    }

    private void b()
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      int i;
      java.util.Map v2;
      java.util.Map f;
      java.util.Iterator v4;
      String v5;
      java.util.Iterator j;
      for ( i = 0; ; ++i )
      {
        v2 = (java.util.Map)this.h.poll();
        if ( v2 == null )
          break;
        f = this.f;
        synchronized ( f )
        {
          v4 = v2.keySet().iterator();
          while ( v4.hasNext() )
          {
            v5 = (String)v4.next();
            this.a(c(v5, v2.get(v5)), this.f);
          }
        }
        for ( j = this.e.keySet().iterator(); j.hasNext(); ((com.google.android.gms.tagmanager.DataLayer$b)j.next()).a(v2) )
          ;
        if ( i + 1 > 500 )
        {
          this.h.clear();
          throw new RuntimeException("Seems like an infinite loop of pushing to the data layer");
        }
      }
    }

    private void b(java.util.Map<String, Object> p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      int i;
      java.util.Map v3;
      Object v5; // RETVAL
      Long v6;
      java.util.ArrayList v7;
      this.g.lock();
      try
      {
        this.h.offer(p0);
        if ( this.g.getHoldCount() == 1 )
        {
          for ( i = 0; ; ++i )
          {
            v3 = (java.util.Map)this.h.poll();
            if ( v3 == null )
              break;
            this.f(v3);
            if ( i + 1 > 500 )
            {
              this.h.clear();
              throw new RuntimeException("Seems like an infinite loop of pushing to the data layer");
            }
          }
        }
        v5 = C(p0);
        if ( v5 != null )
          v6 = bO(v5.toString());
        else
          v6 = null;
        if ( v6 != null )
        {
          v7 = new java.util.ArrayList();
          this.a(p0, "", v7);
          v7.remove("gtm.lifetime");
          this.i.a(v7, v6.longValue());
        }
        return;
      }
      finally
      {
        this.g.unlock();
      }
    }

    static Long bO(String p0)
    {
      Long v1;
      java.util.regex.Matcher v2;
      int v4;
      long v5;
      String v6;
      v1 = null;
      v2 = d.matcher(p0);
      if ( !v2.matches() )
      {
        bh.B("unknown _lifetime: " + p0);
        return v1;
      }
      v4 = 1;
      try
      {
        v5 = Long.parseLong(v2.group(1));
      }
      catch ( NumberFormatException e )
      {
        bh.D("illegal number in _lifetime value: " + p0);
        v5 = 0;
      }
      if ( v5 > 0 )
      {
        v6 = v2.group(2);
        if ( v6.length() != 0 )
        {
          switch ( v6.charAt(0) )
          {
            case 'd':
              v1 = Long.valueOf(86400000 * v5);
              break;
            case 'h':
              v1 = Long.valueOf(3600000 * v5);
              break;
            case 'm':
              v1 = Long.valueOf(60000 * v5);
              break;
            case 's':
              v1 = Long.valueOf(1000 * v5);
              break;
            default:
              bh.D("unknown units in _lifetime: " + p0);
              break;
          }
        }
        else
        {
          return Long.valueOf(v5);
        }
      }
      else
      {
        bh.B("non-positive _lifetime: " + p0);
      }
      return v1;
    }

    static java.util.Map<String, Object> c(String p0, Object p1)
    {
      java.util.Map v2;
      String[] v3;
      int v4;
      java.util.Map v5;
      java.util.HashMap v6;
      v2 = new java.util.HashMap();
      v3 = p0.toString().split("\\.");
      v4 = 0;
      v5 = v2;
      while ( v4 < v3.length - 1 )
      {
        v6 = new java.util.HashMap();
        v5.put(v3[v4++], v6);
        v5 = v6;
      }
      v5.put(v3[v3.length - 1], p1);
      return v2;
    }

    private void c(java.util.Map<String, Object> p0)
    {
      String[] v2;
      int v3;
      int v4;
      Object v5;
      Object v6;
      Long v7;
      java.util.ArrayList v8;
      v2 = c;
      v3 = v2.length;
      v4 = 0;
      v5 = p0;
      while ( v4 < v3 )
      {
        v6 = v2[v4];
        if ( !(v5 instanceof java.util.Map) )
        {
          v5 = null;
          break;
        }
        ++v4;
        v5 = ((java.util.Map)v5).get(v6);
      }
      if ( v5 != null )
        v7 = bO(v5.toString());
      else
        v7 = null;
      if ( v7 != null )
      {
        v8 = new java.util.ArrayList();
        this.a(p0, "", v8);
        v8.remove("gtm.lifetime");
        this.i.a(v8, v7.longValue());
      }
    }

    private Long d(java.util.Map<String, Object> p0)
    {
      String[] v2;
      int v3;
      int i;
      Object v6;
      v2 = c;
      v3 = v2.length;
      for ( i = 0; i < v3; ++i )
      {
        v6 = v2[i];
        if ( !(p0 instanceof java.util.Map) )
        {
          p0 = null;
          break;
        }
        p0 = (java.util.Map)((java.util.Map)p0).get(v6);
      }
      if ( p0 != null )
        return bO(p0.toString());
      else
        return null;
    }

    private java.util.List<com.google.android.gms.tagmanager.DataLayer$a> e(java.util.Map<String, Object> p0)
    {
      java.util.ArrayList v2;
      v2 = new java.util.ArrayList();
      this.a(p0, "", v2);
      return v2;
    }

    private void f(java.util.Map<String, Object> p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      java.util.Map f;
      java.util.Iterator v3;
      String v4;
      java.util.Iterator i;
      f = this.f;
      synchronized ( f )
      {
        v3 = p0.keySet().iterator();
        while ( v3.hasNext() )
        {
          v4 = (String)v3.next();
          this.a(c(v4, p0.get(v4)), this.f);
        }
      }
      for ( i = this.e.keySet().iterator(); i.hasNext(); ((com.google.android.gms.tagmanager.DataLayer$b)i.next()).a(p0) )
        ;
    }

    private void g(java.util.Map<String, Object> p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      java.util.Iterator i;
      for ( i = this.e.keySet().iterator(); i.hasNext(); ((com.google.android.gms.tagmanager.DataLayer$b)i.next()).a(p0) )
        ;
    }

    public static java.util.List<Object> listOf(Object[] p0)
    {
      java.util.List v1;
      int i;
      v1 = new java.util.ArrayList();
      for ( i = 0; i < p0.length; ++i )
        v1.add(p0[i]);
      return v1;
    }

    public static java.util.Map<String, Object> mapOf(Object[] p0)
    {
      java.util.Map v1;
      int i;
      if ( p0.length % 2 != 0 )
        throw new IllegalArgumentException("expected even number of key-value pairs");
      v1 = new java.util.HashMap();
      for ( i = 0; i < p0.length; i += 2 )
      {
        if ( !(p0[i] instanceof String) )
          throw new IllegalArgumentException("key is not a string: " + p0[i]);
        v1.put((String)p0[i], p0[i + 1]);
      }
      return v1;
    }

    final void a(com.google.android.gms.tagmanager.DataLayer$b p0)
    {
      this.e.put(p0, Integer.valueOf(0));
    }

    final void a(String p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      this.a(c(p0, null));
      this.i.a(p0);
    }

    public final void a(java.util.Map<String, Object> p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      try
      {
        this.j.await();
      }
      catch ( InterruptedException e )
      {
        bh.D("DataLayer.push: unexpected InterruptedException");
      }
      this.b(p0);
    }

    public final Object b(String p0)
    {
      java.util.Map f;
      String[] v3;
      int v4;
      java.util.Map v5;
      int i;
      Object v7;
      Object v9; // RETVAL
    
      f = this.f;
      synchronized ( f )
      {
        v3 = p0.split("\\.");
        v4 = v3.length;
        v5 = this.f;
        for ( i = 0; i < v4; ++i )
        {
          v7 = v3[i];
          if ( !(v5 instanceof java.util.Map) || (v9 = ((java.util.Map)v5).get(v7)) == null )
            return null;
          v5 = (java.util.Map)v9;
        }
        return v5;
      }
    }

}
