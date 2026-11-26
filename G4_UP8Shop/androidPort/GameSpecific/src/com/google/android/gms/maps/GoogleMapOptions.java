// Decompiled from classes.dex (SourceFile: GoogleMapOptions.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.maps;

import com.google.android.gms.R$styleable;
import com.google.android.gms.maps.internal.v;
import com.google.android.gms.maps.model.CameraPosition;
public final class GoogleMapOptions implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.maps.GoogleMapOptionsCreator CREATOR;
    private final int a;
    private java.lang.Boolean b;
    private java.lang.Boolean c;
    private int d;
    private com.google.android.gms.maps.model.CameraPosition e;
    private java.lang.Boolean f;
    private java.lang.Boolean g;
    private java.lang.Boolean h;
    private java.lang.Boolean i;
    private java.lang.Boolean j;
    private java.lang.Boolean k;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.maps.GoogleMapOptionsCreator();
    }

    public GoogleMapOptions()
    {
      super();
      this.d = -1;
      this.a = 1;
    }

    GoogleMapOptions(
            int p0,
            byte p1,
            byte p2,
            int p3,
            com.google.android.gms.maps.model.CameraPosition p4,
            byte p5,
            byte p6,
            byte p7,
            byte p8,
            byte p9,
            byte p10)
    {
      super();
      this.d = -1;
      this.a = p0;
      this.b = com.google.android.gms.maps.internal.a.a(p1);
      this.c = com.google.android.gms.maps.internal.a.a(p2);
      this.d = p3;
      this.e = p4;
      this.f = com.google.android.gms.maps.internal.a.a(p5);
      this.g = com.google.android.gms.maps.internal.a.a(p6);
      this.h = com.google.android.gms.maps.internal.a.a(p7);
      this.i = com.google.android.gms.maps.internal.a.a(p8);
      this.j = com.google.android.gms.maps.internal.a.a(p9);
      this.k = com.google.android.gms.maps.internal.a.a(p10);
    }

    private com.google.android.gms.maps.GoogleMapOptions a(int p0)
    {
      this.d = p0;
      return this;
    }

    private com.google.android.gms.maps.GoogleMapOptions a(
            com.google.android.gms.maps.model.CameraPosition p0)
    {
      this.e = p0;
      return this;
    }

    private com.google.android.gms.maps.GoogleMapOptions a(boolean p0)
    {
      this.b = Boolean.valueOf(p0);
      return this;
    }

    private com.google.android.gms.maps.GoogleMapOptions b(boolean p0)
    {
      this.c = Boolean.valueOf(p0);
      return this;
    }

    private com.google.android.gms.maps.GoogleMapOptions c(boolean p0)
    {
      this.f = Boolean.valueOf(p0);
      return this;
    }

    public static com.google.android.gms.maps.GoogleMapOptions createFromAttributes(
            android.content.Context p0,
            android.util.AttributeSet p1)
    {
      com.google.android.gms.maps.GoogleMapOptions v2;
      android.content.res.TypedArray v4;
      if ( p1 == null )
        return null;
      v4 = p0.getResources().obtainAttributes(p1, R$styleable.e);
      v2 = new com.google.android.gms.maps.GoogleMapOptions();
      if ( v4.hasValue(0) )
        v2.d = v4.getInt(0, -1);
      if ( v4.hasValue(13) )
        v2.b = Boolean.valueOf(v4.getBoolean(13, false));
      if ( v4.hasValue(12) )
        v2.c = Boolean.valueOf(v4.getBoolean(12, false));
      if ( v4.hasValue(6) )
        v2.g = Boolean.valueOf(v4.getBoolean(6, true));
      if ( v4.hasValue(7) )
        v2.k = Boolean.valueOf(v4.getBoolean(7, true));
      if ( v4.hasValue(8) )
        v2.h = Boolean.valueOf(v4.getBoolean(8, true));
      if ( v4.hasValue(9) )
        v2.j = Boolean.valueOf(v4.getBoolean(9, true));
      if ( v4.hasValue(11) )
        v2.i = Boolean.valueOf(v4.getBoolean(11, true));
      if ( v4.hasValue(10) )
        v2.f = Boolean.valueOf(v4.getBoolean(10, true));
      v2.e = CameraPosition.createFromAttributes(p0, p1);
      v4.recycle();
      return v2;
    }

    private com.google.android.gms.maps.GoogleMapOptions d(boolean p0)
    {
      this.g = Boolean.valueOf(p0);
      return this;
    }

    private com.google.android.gms.maps.GoogleMapOptions e(boolean p0)
    {
      this.h = Boolean.valueOf(p0);
      return this;
    }

    private com.google.android.gms.maps.GoogleMapOptions f(boolean p0)
    {
      this.i = Boolean.valueOf(p0);
      return this;
    }

    private com.google.android.gms.maps.GoogleMapOptions g(boolean p0)
    {
      this.j = Boolean.valueOf(p0);
      return this;
    }

    private com.google.android.gms.maps.GoogleMapOptions h(boolean p0)
    {
      this.k = Boolean.valueOf(p0);
      return this;
    }

    private Boolean l()
    {
      return this.b;
    }

    private Boolean m()
    {
      return this.c;
    }

    private Boolean n()
    {
      return this.f;
    }

    private Boolean o()
    {
      return this.g;
    }

    private Boolean p()
    {
      return this.h;
    }

    private Boolean q()
    {
      return this.i;
    }

    private Boolean r()
    {
      return this.j;
    }

    private Boolean s()
    {
      return this.k;
    }

    final int a()
    {
      return this.a;
    }

    final byte b()
    {
      return com.google.android.gms.maps.internal.a.c(this.b);
    }

    final byte c()
    {
      return com.google.android.gms.maps.internal.a.c(this.c);
    }

    final byte d()
    {
      return com.google.android.gms.maps.internal.a.c(this.f);
    }

    public final int describeContents()
    {
      return 0;
    }

    final byte e()
    {
      return com.google.android.gms.maps.internal.a.c(this.g);
    }

    final byte f()
    {
      return com.google.android.gms.maps.internal.a.c(this.h);
    }

    final byte g()
    {
      return com.google.android.gms.maps.internal.a.c(this.i);
    }

    final byte h()
    {
      return com.google.android.gms.maps.internal.a.c(this.j);
    }

    final byte i()
    {
      return com.google.android.gms.maps.internal.a.c(this.k);
    }

    public final int j()
    {
      return this.d;
    }

    public final com.google.android.gms.maps.model.CameraPosition k()
    {
      return this.e;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      if ( v.jG() )
        com.google.android.gms.maps.a.a(this, p0, p1);
      else
        GoogleMapOptionsCreator.a(this, p0, p1);
    }

}
