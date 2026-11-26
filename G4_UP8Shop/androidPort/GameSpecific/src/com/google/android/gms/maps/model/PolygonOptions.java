// Decompiled from classes.dex (SourceFile: PolygonOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.maps.internal.v;
import java.util.Arrays;
public final class PolygonOptions implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.PolygonOptionsCreator CREATOR;
    private final int a;
    private final java.util.List b;
    private final java.util.List c;
    private float d;
    private int e;
    private int f;
    private float g;
    private boolean h;
    private boolean i;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.PolygonOptionsCreator();
    }

    public PolygonOptions()
    {
      super();
      this.d = 10.0f;
      this.e = -16777216;
      this.f = 0;
      this.g = 0.0f;
      this.h = true;
      this.i = false;
      this.a = 1;
      this.b = new java.util.ArrayList();
      this.c = new java.util.ArrayList();
    }

    PolygonOptions(
            int p0,
            java.util.List<com.google.android.gms.maps.model.LatLng> p1,
            java.util.List p2,
            float p3,
            int p4,
            int p5,
            float p6,
            boolean p7,
            boolean p8)
    {
      super();
      this.d = 10.0f;
      this.e = -16777216;
      this.f = 0;
      this.g = 0.0f;
      this.h = true;
      this.i = false;
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = p6;
      this.h = p7;
      this.i = p8;
    }

    private com.google.android.gms.maps.model.PolygonOptions a(float p0)
    {
      this.d = p0;
      return this;
    }

    private com.google.android.gms.maps.model.PolygonOptions a(int p0)
    {
      this.e = p0;
      return this;
    }

    private com.google.android.gms.maps.model.PolygonOptions a(com.google.android.gms.maps.model.LatLng p0)
    {
      this.b.add(p0);
      return this;
    }

    private com.google.android.gms.maps.model.PolygonOptions a(
            Iterable<com.google.android.gms.maps.model.LatLng> p0)
    {
      java.util.Iterator i;
      for ( i = p0.iterator(); i.hasNext(); this.b.add((com.google.android.gms.maps.model.LatLng)i.next()) )
        ;
      return this;
    }

    private com.google.android.gms.maps.model.PolygonOptions a(boolean p0)
    {
      this.h = p0;
      return this;
    }

    private com.google.android.gms.maps.model.PolygonOptions a(
            com.google.android.gms.maps.model.LatLng[] p0)
    {
      this.b.addAll(Arrays.asList(p0));
      return this;
    }

    private com.google.android.gms.maps.model.PolygonOptions b(float p0)
    {
      this.g = p0;
      return this;
    }

    private com.google.android.gms.maps.model.PolygonOptions b(int p0)
    {
      this.f = p0;
      return this;
    }

    private com.google.android.gms.maps.model.PolygonOptions b(
            Iterable<com.google.android.gms.maps.model.LatLng> p0)
    {
      java.util.ArrayList v2;
      java.util.Iterator i;
      v2 = new java.util.ArrayList();
      for ( i = p0.iterator(); i.hasNext(); v2.add((com.google.android.gms.maps.model.LatLng)i.next()) )
        ;
      this.c.add(v2);
      return this;
    }

    private com.google.android.gms.maps.model.PolygonOptions b(boolean p0)
    {
      this.i = p0;
      return this;
    }

    private java.util.List<java.util.List<com.google.android.gms.maps.model.LatLng>> j()
    {
      return this.c;
    }

    final int a()
    {
      return this.a;
    }

    final java.util.List b()
    {
      return this.c;
    }

    public final java.util.List<com.google.android.gms.maps.model.LatLng> c()
    {
      return this.b;
    }

    public final float d()
    {
      return this.d;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final int e()
    {
      return this.e;
    }

    public final int f()
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

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      if ( v.jG() )
        com.google.android.gms.maps.model.g.a(this, p0, p1);
      else
        PolygonOptionsCreator.a(this, p0, p1);
    }

}
