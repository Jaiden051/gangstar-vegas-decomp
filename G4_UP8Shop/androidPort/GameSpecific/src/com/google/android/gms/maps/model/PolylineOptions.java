// Decompiled from classes.dex (SourceFile: PolylineOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.maps.internal.v;
import java.util.Arrays;
public final class PolylineOptions implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.PolylineOptionsCreator CREATOR;
    private final int a;
    private final java.util.List b;
    private float c;
    private int d;
    private float e;
    private boolean f;
    private boolean g;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.PolylineOptionsCreator();
    }

    public PolylineOptions()
    {
      super();
      this.c = 10.0f;
      this.d = -16777216;
      this.e = 0.0f;
      this.f = true;
      this.g = false;
      this.a = 1;
      this.b = new java.util.ArrayList();
    }

    PolylineOptions(int p0, java.util.List p1, float p2, int p3, float p4, boolean p5, boolean p6)
    {
      super();
      this.c = 10.0f;
      this.d = -16777216;
      this.e = 0.0f;
      this.f = true;
      this.g = false;
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = p6;
    }

    private com.google.android.gms.maps.model.PolylineOptions a(float p0)
    {
      this.c = p0;
      return this;
    }

    private com.google.android.gms.maps.model.PolylineOptions a(int p0)
    {
      this.d = p0;
      return this;
    }

    private com.google.android.gms.maps.model.PolylineOptions a(
            com.google.android.gms.maps.model.LatLng p0)
    {
      this.b.add(p0);
      return this;
    }

    private com.google.android.gms.maps.model.PolylineOptions a(
            Iterable<com.google.android.gms.maps.model.LatLng> p0)
    {
      java.util.Iterator i;
      for ( i = p0.iterator(); i.hasNext(); this.b.add((com.google.android.gms.maps.model.LatLng)i.next()) )
        ;
      return this;
    }

    private com.google.android.gms.maps.model.PolylineOptions a(boolean p0)
    {
      this.f = p0;
      return this;
    }

    private com.google.android.gms.maps.model.PolylineOptions a(
            com.google.android.gms.maps.model.LatLng[] p0)
    {
      this.b.addAll(Arrays.asList(p0));
      return this;
    }

    private com.google.android.gms.maps.model.PolylineOptions b(float p0)
    {
      this.e = p0;
      return this;
    }

    private com.google.android.gms.maps.model.PolylineOptions b(boolean p0)
    {
      this.g = p0;
      return this;
    }

    final int a()
    {
      return this.a;
    }

    public final java.util.List<com.google.android.gms.maps.model.LatLng> b()
    {
      return this.b;
    }

    public final float c()
    {
      return this.c;
    }

    public final int d()
    {
      return this.d;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final float e()
    {
      return this.e;
    }

    public final boolean f()
    {
      return this.f;
    }

    public final boolean g()
    {
      return this.g;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      if ( v.jG() )
        com.google.android.gms.maps.model.h.a(this, p0, p1);
      else
        PolylineOptionsCreator.a(this, p0, p1);
    }

}
