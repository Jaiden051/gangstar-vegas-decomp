// Decompiled from classes.dex (SourceFile: FilterHolder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query.internal;

public class FilterHolder implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final com.google.android.gms.drive.query.internal.ComparisonFilter b;
    final com.google.android.gms.drive.query.internal.FieldOnlyFilter c;
    final com.google.android.gms.drive.query.internal.LogicalFilter d;
    final com.google.android.gms.drive.query.internal.NotFilter e;
    final com.google.android.gms.drive.query.internal.InFilter f;
    final com.google.android.gms.drive.query.internal.MatchAllFilter g;
    final com.google.android.gms.drive.query.internal.HasFilter h;
    private final com.google.android.gms.drive.query.Filter i;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.query.internal.d();
    }

    FilterHolder(
            int p0,
            com.google.android.gms.drive.query.internal.ComparisonFilter<?> p1,
            com.google.android.gms.drive.query.internal.FieldOnlyFilter p2,
            com.google.android.gms.drive.query.internal.LogicalFilter p3,
            com.google.android.gms.drive.query.internal.NotFilter p4,
            com.google.android.gms.drive.query.internal.InFilter<?> p5,
            com.google.android.gms.drive.query.internal.MatchAllFilter p6,
            com.google.android.gms.drive.query.internal.HasFilter<?> p7)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
      this.g = p6;
      this.h = p7;
      if ( this.b != null )
      {
        this.i = (com.google.android.gms.drive.query.Filter)this.b;
      }
      else if ( this.c != null )
      {
        this.i = (com.google.android.gms.drive.query.Filter)this.c;
      }
      else if ( this.d != null )
      {
        this.i = (com.google.android.gms.drive.query.Filter)this.d;
      }
      else if ( this.e != null )
      {
        this.i = (com.google.android.gms.drive.query.Filter)this.e;
      }
      else if ( this.f != null )
      {
        this.i = (com.google.android.gms.drive.query.Filter)this.f;
      }
      else if ( this.g != null )
      {
        this.i = (com.google.android.gms.drive.query.Filter)this.g;
      }
      else
      {
        if ( this.h == null )
          throw new IllegalArgumentException("At least one filter must be set.");
        this.i = (com.google.android.gms.drive.query.Filter)this.h;
      }
    }

    public FilterHolder(com.google.android.gms.drive.query.Filter p0)
    {
      super();
      com.google.android.gms.drive.query.internal.ComparisonFilter v2;
      com.google.android.gms.drive.query.internal.FieldOnlyFilter v3;
      com.google.android.gms.drive.query.internal.LogicalFilter v4;
      com.google.android.gms.drive.query.internal.NotFilter v5;
      com.google.android.gms.drive.query.internal.InFilter v6;
      com.google.android.gms.drive.query.internal.MatchAllFilter v7;
      com.google.android.gms.drive.query.internal.HasFilter v8;
      this.a = 2;
      if ( p0 instanceof com.google.android.gms.drive.query.internal.ComparisonFilter )
        v2 = (com.google.android.gms.drive.query.internal.ComparisonFilter)p0;
      else
        v2 = null;
      this.b = v2;
      if ( p0 instanceof com.google.android.gms.drive.query.internal.FieldOnlyFilter )
        v3 = (com.google.android.gms.drive.query.internal.FieldOnlyFilter)p0;
      else
        v3 = null;
      this.c = v3;
      if ( p0 instanceof com.google.android.gms.drive.query.internal.LogicalFilter )
        v4 = (com.google.android.gms.drive.query.internal.LogicalFilter)p0;
      else
        v4 = null;
      this.d = v4;
      if ( p0 instanceof com.google.android.gms.drive.query.internal.NotFilter )
        v5 = (com.google.android.gms.drive.query.internal.NotFilter)p0;
      else
        v5 = null;
      this.e = v5;
      if ( p0 instanceof com.google.android.gms.drive.query.internal.InFilter )
        v6 = (com.google.android.gms.drive.query.internal.InFilter)p0;
      else
        v6 = null;
      this.f = v6;
      if ( p0 instanceof com.google.android.gms.drive.query.internal.MatchAllFilter )
        v7 = (com.google.android.gms.drive.query.internal.MatchAllFilter)p0;
      else
        v7 = null;
      this.g = v7;
      if ( p0 instanceof com.google.android.gms.drive.query.internal.HasFilter )
        v8 = (com.google.android.gms.drive.query.internal.HasFilter)p0;
      else
        v8 = null;
      this.h = v8;
      if ( this.b == null
        && this.c == null
        && this.d == null
        && this.e == null
        && this.f == null
        && this.g == null
        && this.h == null )
      {
        throw new IllegalArgumentException("Invalid filter type or null filter.");
      }
      this.i = p0;
    
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.query.internal.d.a(this, p0, p1);
    }

}
