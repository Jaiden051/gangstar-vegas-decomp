// Decompiled from classes.dex (SourceFile: al.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.os.AsyncTask;
import com.google.android.gms.internal.it;
abstract class al<T> extends android.os.AsyncTask<Object, Void, T> {
    // Fields
    protected com.amazon.device.associates.bj a;
    private boolean b;
    private boolean c;
    private final long d;
    private final java.lang.String e;

    // Methods
    public al(String p0, long p1)
    {
      super();
      this.b = false;
      this.c = false;
      this.e = p0;
      this.d = p1;
    }

    protected void a(T p0)
    {
      Object[] v3;
      if ( this.e() )
      {
        try
        {
          p.c(
            "AbstractCacheAgentLog",
            "Writing Templates to cache bucket at " + bo.a.format(new java.util.Date()) + ". Path=" + this.g());
          if ( y.a(p0, this.g()) )
          {
            p.c(
              "AbstractCacheAgentLog",
              "Wrote Templates to xml at " + bo.a.format(new java.util.Date()) + ". Path=" + this.g());
            return;
          }
          p.c(
            "AbstractCacheAgentLog",
            "Wrote Templates to xml at " + bo.a.format(new java.util.Date()) + ". Path=" + this.g() + " failed.");
        }
        catch ( Exception v2 )
        {
          v3 = new Object[1];
          v3[0] = v2;
          p.c("AbstractCacheAgentLog", "Writing Templates to local cache failed. Ex=", v3);
        }
      }
    }

    protected synchronized void a(boolean p0)
    {
      this.b = p0;
    }

    protected abstract com.amazon.device.associates.bj b();

    protected synchronized void b(boolean p0)
    {
      this.c = p0;
    }

    public String c()
    {
      return this.e;
    }

    protected synchronized boolean d()
    {
      return this.b;
    }

    protected synchronized boolean e()
    {
      return this.c;
    }

    protected long f()
    {
      return this.d;
    }

    protected String g()
    {
      return bo.b + this.c();
    }

    protected synchronized void h()
    {
      com.amazon.device.associates.al[] v1;
      com.amazon.device.associates.al[] v2;
      Object[] v4;
      try
      {
        if ( this.getStatus() == AsyncTask.Status.PENDING )
        {
          p.c("AbstractCacheAgentLog", "Task has still not started, starting it.");
          v1 = new com.amazon.device.associates.al[1];
          v1[0] = this;
          this.execute(v1);
          return;
        }
        if ( this.getStatus() == AsyncTask.Status.FINISHED )
        {
          p.c("AbstractCacheAgentLog", "Task might have failed, creating new task");
          v2 = new com.amazon.device.associates.al[1];
          v2[0] = this;
          ((com.amazon.device.associates.al)this.getClass().newInstance()).execute(v2);
        }
      }
      catch ( Exception v3 )
      {
        v4 = new Object[1];
        v4[0] = v3;
        p.b("Service Failure", "Exception in MobileAssociateService: " + this.getClass(), v4);
        return;
      }
      finally
      {
      }
    }

    protected synchronized long i()
    {
      long v1; // RETVAL
      long v2; // RETVAL
    
      if ( this.a != null )
      {
        v1 = this.a.d();
        if ( v1 != -1 )
        {
          v2 = this.a.d();
          if ( v2 > 0 )
          {
            p.a("AbstractCacheAgentLog", "Returning the cacheRefreshRate:" + this.a.d());
            return this.a.d();
          }
        }
      }
      try
      {
        p.a("AbstractCacheAgentLog", "Returning the SDK hardcoded cacheRefreshRate:" + this.f());
        return this.f();
      }
      finally
      {
      }
    }

    protected synchronized T j()
    {
      long v1;
      com.amazon.device.associates.bj a;
      long v4;
      com.amazon.device.associates.bj v5;
      long v7;
      v1 = System.currentTimeMillis();
      if ( this.d() )
      {
        a = this.a;
        if ( a != null )
        {
          v4 = this.i();
          if ( v1 - this.a.c() < v4 )
          {
            p.c("AbstractCacheAgentLog", "Cache refresh not needed! LapseTime:" + (v1 - this.a.c()) + " refreshRate:" + v4);
            return (T)this.a;
          }
        }
      }
      try
      {
        p.c("AbstractCacheAgentLog", "Checking to load from Cache");
        this.a = (com.amazon.device.associates.bj)y.a(this.g());
        if ( this.a != null )
        {
          v7 = this.i();
          p.c("AbstractCacheAgentLog", "Cache loaded from local file...need to see if refresh is needed for not!");
          if ( v1 - this.a.c() < v7 )
          {
            p.c("AbstractCacheAgentLog", "Cache refresh not needed! LapseTime:" + (v1 - this.a.c()) + " refreshRate:" + v7);
            this.a(true);
            return (T)this.a;
          }
          p.c("AbstractCacheAgentLog", "Cache refresh needed as lapse time:" + (v1 - this.a.c()) + " Refresh-Rate:" + v7);
        }
        else
        {
          p.c("AbstractCacheAgentLog", "Load Cache failed and got a null object. Hence deleting the local copy");
          y.b(this.g());
        }
        this.h();
        if ( this.a == null )
          this.a = this.b();
        v5 = this.a;
      }
      finally
      {
      }
      return (T)v5;
    }

    /* synthetic */ protected void onPostExecute(Object p0)
    {
      this.a((T)p0);
    }

}
