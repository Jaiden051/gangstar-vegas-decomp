// Decompiled from classes.dex (SourceFile: StreetViewPanoramaOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

public final class StreetViewPanoramaOptions implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.StreetViewPanoramaOptionsCreator CREATOR;
    private final int a;
    private com.google.android.gms.maps.model.StreetViewPanoramaCamera b;
    private java.lang.String c;
    private com.google.android.gms.maps.model.LatLng d;
    private java.lang.Integer e;
    private java.lang.Boolean f;
    private java.lang.Boolean g;
    private java.lang.Boolean h;
    private java.lang.Boolean i;
    private java.lang.Boolean j;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.StreetViewPanoramaOptionsCreator();
    }

    public StreetViewPanoramaOptions()
    {
      super();
      this.f = Boolean.valueOf(true);
      this.g = Boolean.valueOf(true);
      this.h = Boolean.valueOf(true);
      this.i = Boolean.valueOf(true);
      this.a = 1;
    }

    StreetViewPanoramaOptions(
            int p0,
            com.google.android.gms.maps.model.StreetViewPanoramaCamera p1,
            String p2,
            com.google.android.gms.maps.model.LatLng p3,
            Integer p4,
            byte p5,
            byte p6,
            byte p7,
            byte p8,
            byte p9)
    {
      super();
      this.f = Boolean.valueOf(true);
      this.g = Boolean.valueOf(true);
      this.h = Boolean.valueOf(true);
      this.i = Boolean.valueOf(true);
      this.a = p0;
      this.b = p1;
      this.d = p3;
      this.e = p4;
      this.c = p2;
      this.f = com.google.android.gms.maps.internal.a.a(p5);
      this.g = com.google.android.gms.maps.internal.a.a(p6);
      this.h = com.google.android.gms.maps.internal.a.a(p7);
      this.i = com.google.android.gms.maps.internal.a.a(p8);
      this.j = com.google.android.gms.maps.internal.a.a(p9);
    }

    private com.google.android.gms.maps.StreetViewPanoramaOptions a(
            com.google.android.gms.maps.model.LatLng p0)
    {
      this.d = p0;
      return this;
    }

    private com.google.android.gms.maps.StreetViewPanoramaOptions a(
            com.google.android.gms.maps.model.LatLng p0,
            Integer p1)
    {
      this.d = p0;
      this.e = p1;
      return this;
    }

    private com.google.android.gms.maps.StreetViewPanoramaOptions a(
            com.google.android.gms.maps.model.StreetViewPanoramaCamera p0)
    {
      this.b = p0;
      return this;
    }

    private com.google.android.gms.maps.StreetViewPanoramaOptions a(String p0)
    {
      this.c = p0;
      return this;
    }

    private com.google.android.gms.maps.StreetViewPanoramaOptions a(boolean p0)
    {
      this.f = Boolean.valueOf(p0);
      return this;
    }

    private com.google.android.gms.maps.StreetViewPanoramaOptions b(boolean p0)
    {
      this.g = Boolean.valueOf(p0);
      return this;
    }

    private com.google.android.gms.maps.StreetViewPanoramaOptions c(boolean p0)
    {
      this.h = Boolean.valueOf(p0);
      return this;
    }

    private com.google.android.gms.maps.StreetViewPanoramaOptions d(boolean p0)
    {
      this.i = Boolean.valueOf(p0);
      return this;
    }

    private com.google.android.gms.maps.StreetViewPanoramaOptions e(boolean p0)
    {
      this.j = Boolean.valueOf(p0);
      return this;
    }

    private Boolean k()
    {
      return this.f;
    }

    private Boolean l()
    {
      return this.g;
    }

    private Boolean m()
    {
      return this.h;
    }

    private Boolean n()
    {
      return this.i;
    }

    private Boolean o()
    {
      return this.j;
    }

    final int a()
    {
      return this.a;
    }

    final byte b()
    {
      return com.google.android.gms.maps.internal.a.c(this.f);
    }

    final byte c()
    {
      return com.google.android.gms.maps.internal.a.c(this.g);
    }

    final byte d()
    {
      return com.google.android.gms.maps.internal.a.c(this.h);
    }

    public final int describeContents()
    {
      return 0;
    }

    final byte e()
    {
      return com.google.android.gms.maps.internal.a.c(this.i);
    }

    final byte f()
    {
      return com.google.android.gms.maps.internal.a.c(this.j);
    }

    public final com.google.android.gms.maps.model.StreetViewPanoramaCamera g()
    {
      return this.b;
    }

    public final com.google.android.gms.maps.model.LatLng h()
    {
      return this.d;
    }

    public final Integer i()
    {
      return this.e;
    }

    public final String j()
    {
      return this.c;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      StreetViewPanoramaOptionsCreator.a(this, p0, p1);
    }

}
