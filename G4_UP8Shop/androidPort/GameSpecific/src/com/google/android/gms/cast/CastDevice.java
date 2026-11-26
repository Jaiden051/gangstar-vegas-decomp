// Decompiled from classes.dex (SourceFile: CastDevice.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import com.google.android.gms.internal.gj;
import java.net.InetAddress;
import java.util.Collections;
public class CastDevice implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    java.lang.String a;
    private final int b;
    private java.lang.String c;
    private java.net.Inet4Address d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private int h;
    private java.util.List i;
    private int j;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.cast.b();
    }

    private CastDevice()
    {
      this(2, null, null, null, null, null, -1, new java.util.ArrayList(), 0);
    }

    CastDevice(
            int p0,
            String p1,
            String p2,
            String p3,
            String p4,
            String p5,
            int p6,
            java.util.List<com.google.android.gms.common.images.WebImage> p7,
            int p8)
    {
      super();
      java.net.InetAddress v10; // RETVAL
      this.b = p0;
      this.c = p1;
      this.a = p2;
      if ( this.a != null )
      {
        try
        {
          v10 = InetAddress.getByName(this.a);
          if ( v10 instanceof java.net.Inet4Address )
            this.d = (java.net.Inet4Address)v10;
        }
        catch ( java.net.UnknownHostException e )
        {
          this.d = null;
        }
      }
      this.e = p3;
      this.f = p4;
      this.g = p5;
      this.h = p6;
      this.i = p7;
      this.j = p8;
    
    }

    private com.google.android.gms.common.images.WebImage a(int p0, int p1)
    {
      com.google.android.gms.common.images.WebImage v3 = null;
      java.util.Iterator v5 = null;
      com.google.android.gms.common.images.WebImage v6 = null;
      com.google.android.gms.common.images.WebImage v7 = null;
      int v8 = 0;
      int v9 = 0; // RETVAL
      int v10 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v3 = null;
            if ( this.i.isEmpty() )
            return v3;
            if ( p0 <= 0 || p1 <= 0 )
            return (com.google.android.gms.common.images.WebImage)this.i.get(0);
            v5 = this.i.iterator();
            v6 = null;
            _pc = 1;
            continue _sm;
          case 1:
            if ( !(v5.hasNext()) ) { _pc = 6; continue _sm; }
            v7 = (com.google.android.gms.common.images.WebImage)v5.next();
            v8 = v7.c();
            v9 = v7.d();
            v10 = v9;
            if ( !(v8 < p0 || v9 < p1) ) { _pc = 4; continue _sm; }
            if ( v8 >= p0 || v9 >= p1 || v3 != null && (v3.c() >= v8 || v3.d() >= v10) ) { _pc = 2; continue _sm; } else { _pc = 3; continue _sm; }
          case 2:
            v7 = v3;
            _pc = 3;
            continue _sm;
          case 3:
            v3 = v7;
            _pc = 5;
            continue _sm;
          case 4:
            {
            if ( v6 != null && (v6.c() <= v8 || v6.d() <= v10) )
            { _pc = 2; continue _sm; }
            v6 = v7;
            }
            _pc = 5;
            continue _sm;
          case 5:
            _pc = 1;
            continue _sm;
          case 6:
            if ( v6 == null )
            {
            if ( v3 != null )
            return v3;
            else
            return (com.google.android.gms.common.images.WebImage)this.i.get(0);
            }
            return v6;
        }
      }
}

    private boolean a(com.google.android.gms.cast.CastDevice p0)
    {
      boolean v2;
      v2 = false;
      if ( p0 != null )
      {
        if ( this.c != null )
          return gj.a(this.c, p0.c);
        else
          return p0.c == null;
      }
      return v2;
    }

    public static com.google.android.gms.cast.CastDevice getFromBundle(android.os.Bundle p0)
    {
      if ( p0 == null )
        return null;
      p0.setClassLoader(com.google.android.gms.cast.CastDevice.class.getClassLoader());
      return (com.google.android.gms.cast.CastDevice)p0.getParcelable("com.google.android.gms.cast.EXTRA_CAST_DEVICE");
    }

    private java.net.Inet4Address i()
    {
      return this.d;
    }

    private boolean j()
    {
      return !this.i.isEmpty();
    }

    final int a()
    {
      return this.b;
    }

    public final void a(android.os.Bundle p0)
    {
      if ( p0 != null )
        p0.putParcelable("com.google.android.gms.cast.EXTRA_CAST_DEVICE", (android.os.Parcelable)this);
    }

    public final String b()
    {
      return this.c;
    }

    public final String c()
    {
      return this.e;
    }

    public final String d()
    {
      return this.f;
    }

    public int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.g;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.cast.CastDevice v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.cast.CastDevice )
        {
          v4 = (com.google.android.gms.cast.CastDevice)p0;
          if ( this.c != null )
          {
            if ( !gj.a(this.c, v4.c)
              || !gj.a(this.d, v4.d)
              || !gj.a(this.f, v4.f)
              || !gj.a(this.e, v4.e)
              || !gj.a(this.g, v4.g)
              || this.h != v4.h
              || !gj.a(this.i, v4.i)
              || this.j != v4.j )
            {
              return false;
            }
          }
          else
          {
            return v4.c == null;
          }
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public final int f()
    {
      return this.h;
    }

    public final java.util.List<com.google.android.gms.common.images.WebImage> g()
    {
      return Collections.unmodifiableList(this.i);
    }

    public final int h()
    {
      return this.j;
    }

    public int hashCode()
    {
      if ( this.c != null )
        return this.c.hashCode();
      else
        return 0;
    }

    public String toString()
    {
      Object[] v1;
      v1 = new Object[2];
      v1[0] = this.e;
      v1[1] = this.c;
      return String.format("\"%s\" (%s)", v1);
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.cast.b.a(this, p0, p1);
    }

}
