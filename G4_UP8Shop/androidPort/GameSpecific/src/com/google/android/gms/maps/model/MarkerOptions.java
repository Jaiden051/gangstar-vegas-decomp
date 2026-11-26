// Decompiled from classes.dex (SourceFile: MarkerOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.maps.internal.v;
public final class MarkerOptions implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.MarkerOptionsCreator CREATOR;
    private final int a;
    private com.google.android.gms.maps.model.LatLng b;
    private java.lang.String c;
    private java.lang.String d;
    private com.google.android.gms.maps.model.BitmapDescriptor e;
    private float f;
    private float g;
    private boolean h;
    private boolean i;
    private boolean j;
    private float k;
    private float l;
    private float m;
    private float n;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.MarkerOptionsCreator();
    }

    public MarkerOptions()
    {
      super();
      this.f = 0.5f;
      this.g = 1.0f;
      this.i = true;
      this.j = false;
      this.k = 0.0f;
      this.l = 0.5f;
      this.m = 0.0f;
      this.n = 1.0f;
      this.a = 1;
    }

    MarkerOptions(
            int p0,
            com.google.android.gms.maps.model.LatLng p1,
            String p2,
            String p3,
            android.os.IBinder p4,
            float p5,
            float p6,
            boolean p7,
            boolean p8,
            boolean p9,
            float p10,
            float p11,
            float p12,
            float p13)
    {
      super();
      com.google.android.gms.maps.model.BitmapDescriptor v15;
      this.f = 0.5f;
      this.g = 1.0f;
      this.i = true;
      this.j = false;
      this.k = 0.0f;
      this.l = 0.5f;
      this.m = 0.0f;
      this.n = 1.0f;
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      if ( p4 != null )
        v15 = new com.google.android.gms.maps.model.BitmapDescriptor(com.google.android.gms.dynamic.d$a.ag(p4));
      else
        v15 = null;
      this.e = v15;
      this.f = p5;
      this.g = p6;
      this.h = p7;
      this.i = p8;
      this.j = p9;
      this.k = p10;
      this.l = p11;
      this.m = p12;
      this.n = p13;
    
    }

    private com.google.android.gms.maps.model.MarkerOptions a(float p0)
    {
      this.k = p0;
      return this;
    }

    private com.google.android.gms.maps.model.MarkerOptions a(float p0, float p1)
    {
      this.f = p0;
      this.g = p1;
      return this;
    }

    private com.google.android.gms.maps.model.MarkerOptions a(
            com.google.android.gms.maps.model.BitmapDescriptor p0)
    {
      this.e = p0;
      return this;
    }

    private com.google.android.gms.maps.model.MarkerOptions a(com.google.android.gms.maps.model.LatLng p0)
    {
      this.b = p0;
      return this;
    }

    private com.google.android.gms.maps.model.MarkerOptions a(String p0)
    {
      this.c = p0;
      return this;
    }

    private com.google.android.gms.maps.model.MarkerOptions a(boolean p0)
    {
      this.h = p0;
      return this;
    }

    private com.google.android.gms.maps.model.MarkerOptions b(float p0)
    {
      this.n = p0;
      return this;
    }

    private com.google.android.gms.maps.model.MarkerOptions b(float p0, float p1)
    {
      this.l = p0;
      this.m = p1;
      return this;
    }

    private com.google.android.gms.maps.model.MarkerOptions b(String p0)
    {
      this.d = p0;
      return this;
    }

    private com.google.android.gms.maps.model.MarkerOptions b(boolean p0)
    {
      this.i = p0;
      return this;
    }

    private com.google.android.gms.maps.model.MarkerOptions c(boolean p0)
    {
      this.j = p0;
      return this;
    }

    private com.google.android.gms.maps.model.BitmapDescriptor o()
    {
      return this.e;
    }

    final int a()
    {
      return this.a;
    }

    final android.os.IBinder b()
    {
      if ( this.e != null )
        return this.e.a().asBinder();
      else
        return null;
    }

    public final com.google.android.gms.maps.model.LatLng c()
    {
      return this.b;
    }

    public final String d()
    {
      return this.c;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final String e()
    {
      return this.d;
    }

    public final float f()
    {
      return this.f;
    }

    public final float g()
    {
      return this.g;
    }

    public final boolean h()
    {
      return this.h;
    }

    public final boolean i()
    {
      return this.i;
    }

    public final boolean j()
    {
      return this.j;
    }

    public final float k()
    {
      return this.k;
    }

    public final float l()
    {
      return this.l;
    }

    public final float m()
    {
      return this.m;
    }

    public final float n()
    {
      return this.n;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      if ( v.jG() )
        com.google.android.gms.maps.model.f.a(this, p0, p1);
      else
        MarkerOptionsCreator.a(this, p0, p1);
    }

}
