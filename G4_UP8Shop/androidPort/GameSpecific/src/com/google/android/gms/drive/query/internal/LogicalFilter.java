// Decompiled from classes.dex (SourceFile: LogicalFilter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.query.internal;

public class LogicalFilter implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.drive.query.Filter {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final com.google.android.gms.drive.query.internal.Operator a;
    final java.util.List b;
    final int c;
    private java.util.List d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.query.internal.h();
    }

    LogicalFilter(
            int p0,
            com.google.android.gms.drive.query.internal.Operator p1,
            java.util.List<com.google.android.gms.drive.query.internal.FilterHolder> p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    }

    public LogicalFilter(
            com.google.android.gms.drive.query.internal.Operator p0,
            com.google.android.gms.drive.query.Filter p1,
            com.google.android.gms.drive.query.Filter[] p2)
    {
      super();
      int v4;
      int i;
      com.google.android.gms.drive.query.Filter v6;
      this.c = 1;
      this.a = p0;
      this.b = new java.util.ArrayList(p2.length + 1);
      this.b.add(new com.google.android.gms.drive.query.internal.FilterHolder(p1));
      this.d = new java.util.ArrayList(p2.length + 1);
      this.d.add(p1);
      v4 = p2.length;
      for ( i = 0; i < v4; ++i )
      {
        v6 = p2[i];
        this.b.add(new com.google.android.gms.drive.query.internal.FilterHolder(v6));
        this.d.add(v6);
      }
    
    }

    public LogicalFilter(
            com.google.android.gms.drive.query.internal.Operator p0,
            Iterable<com.google.android.gms.drive.query.Filter> p1)
    {
      super();
      java.util.Iterator v3;
      com.google.android.gms.drive.query.Filter v4;
      this.c = 1;
      this.a = p0;
      this.d = new java.util.ArrayList();
      this.b = new java.util.ArrayList();
      v3 = p1.iterator();
      while ( v3.hasNext() )
      {
        v4 = (com.google.android.gms.drive.query.Filter)v3.next();
        this.d.add(v4);
        this.b.add(new com.google.android.gms.drive.query.internal.FilterHolder(v4));
      }
    
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.query.internal.h.a(this, p0, p1);
    }

}
