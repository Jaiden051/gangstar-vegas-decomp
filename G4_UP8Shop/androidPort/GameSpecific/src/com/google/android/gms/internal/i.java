// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.view.MotionEvent;
import java.nio.ByteBuffer;
import java.security.MessageDigest;
public abstract class i implements com.google.android.gms.internal.h {
    // Fields
    protected android.view.MotionEvent a;
    protected android.util.DisplayMetrics b;
    protected com.google.android.gms.internal.n c;
    private com.google.android.gms.internal.o d;

    // Methods
    protected i(android.content.Context p0, com.google.android.gms.internal.n p1, com.google.android.gms.internal.o p2)
    {
      super();
      this.c = p1;
      this.d = p2;
      try
      {
        this.b = p0.getResources().getDisplayMetrics();
      }
      catch ( UnsupportedOperationException e )
      {
        this.b = new android.util.DisplayMetrics();
        this.b.density = 1.0f;
      }
    }

    private String a(android.content.Context p0, String p1, boolean p2)
 throws InterruptedException {
      byte[] v4; // RETVAL
      byte[] v5;
      byte[] v9;
      byte[] v10;
      java.security.MessageDigest Instance; // RETVAL
      byte[] v12;
      try
      {
        synchronized ( this )
        {
          this.a();
          if ( p2 )
            this.c(p0);
          else
            this.b(p0);
          v4 = this.b();
          v5 = v4;
          if ( v4.length == 0 )
            return Integer.toString(5);
          if ( v4.length > 239 )
          {
            this.a();
            this.a(20, 1);
            v5 = this.b();
          }
          if ( v5.length >= 239 )
          {
            v10 = ByteBuffer.allocate(240).put((byte)v5.length).put(v5).array();
          }
          else
          {
            v9 = new byte[(239 - v5.length)];
            new java.security.SecureRandom().nextBytes(v9);
            v10 = ByteBuffer.allocate(240).put((byte)v5.length).put(v5).put(v9).array();
          }
          Instance = MessageDigest.getInstance("MD5");
          Instance.update(v10);
          v12 = new byte[256];
          new com.google.android.gms.internal.f().a(ByteBuffer.allocate(256).put(Instance.digest()).put(v10).array(), v12);
          if ( p1 != null && p1.length() > 0 )
          {
            if ( p1.length() > 32 )
              p1 = p1.substring(0, 32);
            new com.google.android.gms.internal.ly(p1.getBytes("UTF-8")).a(v12);
          }
          return this.c.a(v12, true);
        }
      }
      catch ( java.security.NoSuchAlgorithmException e )
      {
        return Integer.toString(7);
      }
      catch ( java.io.UnsupportedEncodingException e )
      {
        return Integer.toString(7);
      }
      catch ( java.io.IOException e )
      {
        return Integer.toString(3);
      }
    }

    private String a(byte[] p0, String p1)
 throws java.io.UnsupportedEncodingException, java.security.NoSuchAlgorithmException, java.io.IOException {
      byte[] v3;
      byte[] v4;
      java.security.MessageDigest Instance; // RETVAL
      byte[] v6;
      if ( p0.length > 239 )
      {
        this.a();
        this.a(20, 1);
        p0 = this.b();
      }
      if ( p0.length >= 239 )
      {
        v4 = ByteBuffer.allocate(240).put((byte)p0.length).put(p0).array();
      }
      else
      {
        v3 = new byte[(239 - p0.length)];
        new java.security.SecureRandom().nextBytes(v3);
        v4 = ByteBuffer.allocate(240).put((byte)p0.length).put(p0).put(v3).array();
      }
      Instance = MessageDigest.getInstance("MD5");
      Instance.update(v4);
      v6 = new byte[256];
      new com.google.android.gms.internal.f().a(ByteBuffer.allocate(256).put(Instance.digest()).put(v4).array(), v6);
      if ( p1 != null && p1.length() > 0 )
      {
        if ( p1.length() > 32 )
          p1 = p1.substring(0, 32);
        new com.google.android.gms.internal.ly(p1.getBytes("UTF-8")).a(v6);
      }
      return this.c.a(v6, true);
    }

    private void a()
    {
      this.d.a();
    }

    private static void a(String p0, byte[] p1)
 throws java.io.UnsupportedEncodingException {
      if ( p0.length() > 32 )
        p0 = p0.substring(0, 32);
      new com.google.android.gms.internal.ly(p0.getBytes("UTF-8")).a(p1);
    }

    private byte[] b()
 throws java.io.IOException {
      return this.d.b();
    }

    public final String a(android.content.Context p0)
 throws InterruptedException {
      return this.a(p0, null, false);
    }

    public final String a(android.content.Context p0, String p1)
 throws InterruptedException {
      return this.a(p0, p1, true);
    }

    public final void a(int p0, int p1, int p2)
    {
      if ( this.a != null )
        this.a.recycle();
      this.a = MotionEvent.obtain(
                 0,
                 p2,
                 1,
                 (float)p0 * this.b.density,
                 (float)p1 * this.b.density,
                 0.0f,
                 0.0f,
                 0,
                 0.0f,
                 0.0f,
                 0,
                 0);
    }

    protected final void a(int p0, long p1)
 throws com.google.android.gms.internal.ma$a {
      this.d.a(p0, p1);
    }

    protected final void a(int p0, String p1)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.ma$a {
      this.d.a(p0, p1);
    }

    public final void a(android.view.MotionEvent p0)
    {
      if ( p0.getAction() == 1 )
      {
        if ( this.a != null )
          this.a.recycle();
        this.a = MotionEvent.obtain(p0);
      }
    }

    protected abstract void b(android.content.Context p0) throws InterruptedException, com.google.android.gms.internal.ma$a;

    protected abstract void c(android.content.Context p0);

}
