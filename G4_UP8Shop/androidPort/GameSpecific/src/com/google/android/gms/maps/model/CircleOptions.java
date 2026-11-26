// Decompiled from classes.dex (SourceFile: CircleOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps.model;

import com.google.android.gms.maps.internal.v;
public final class CircleOptions implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.model.CircleOptionsCreator CREATOR;
    private final int a;
    private com.google.android.gms.maps.model.LatLng b;
    private double c;
    private float d;
    private int e;
    private int f;
    private float g;
    private boolean h;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.model.CircleOptionsCreator();
    }

    public CircleOptions()
    {
      super();
      this.b = null;
      this.c = 0.0;
      this.d = 10.0f;
      this.e = -16777216;
      this.f = 0;
      this.g = 0.0f;
      this.h = true;
      this.a = 1;
    }

    CircleOptions(
            int p0,
            com.google.android.gms.maps.model.LatLng p1,
            double p2,
            float p4,
            int p5,
            int p6,
            float p7,
            boolean p8)
    {
      super();
      this.b = null;
      this.c = 0.0;
      this.d = 10.0f;
      this.e = -16777216;
      this.f = 0;
      this.g = 0.0f;
      this.h = true;
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p4;
      this.e = p5;
      this.f = p6;
      this.g = p7;
      this.h = p8;
    }

    private com.google.android.gms.maps.model.CircleOptions a(double p0)
    {
      this.c = p0;
      return this;
    }

    private com.google.android.gms.maps.model.CircleOptions a(float p0)
    {
      this.d = p0;
      return this;
    }

    private com.google.android.gms.maps.model.CircleOptions a(int p0)
    {
      this.e = p0;
      return this;
    }

    private com.google.android.gms.maps.model.CircleOptions a(com.google.android.gms.maps.model.LatLng p0)
    {
      this.b = p0;
      return this;
    }

    private com.google.android.gms.maps.model.CircleOptions a(boolean p0)
    {
      this.h = p0;
      return this;
    }

    private com.google.android.gms.maps.model.CircleOptions b(float p0)
    {
      this.g = p0;
      return this;
    }

    private com.google.android.gms.maps.model.CircleOptions b(int p0)
    {
      this.f = p0;
      return this;
    }

    final int a()
    {
      return this.a;
    }

    public final com.google.android.gms.maps.model.LatLng b()
    {
      return this.b;
    }

    public final double c()
    {
      return this.c;
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

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      if ( v.jG() )
        com.google.android.gms.maps.model.b.a(this, p0, p1);
      else
        CircleOptionsCreator.a(this, p0, p1);
    }

}
