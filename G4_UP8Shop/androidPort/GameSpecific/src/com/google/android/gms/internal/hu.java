// Decompiled from classes.dex (SourceFile: hu.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class hu implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.internal.hv CREATOR;
    private final int a;
    private final com.google.android.gms.internal.hw b;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.internal.hv();
    }

    hu(int p0, com.google.android.gms.internal.hw p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    private hu(com.google.android.gms.internal.hw p0)
    {
      super();
      this.a = 1;
      this.b = p0;
    }

    public static com.google.android.gms.internal.hu a(com.google.android.gms.internal.hz$b<?, ?> p0)
    {
      if ( !(p0 instanceof com.google.android.gms.internal.hw) )
        throw new IllegalArgumentException("Unsupported safe parcelable field converter class.");
      return new com.google.android.gms.internal.hu((com.google.android.gms.internal.hw)p0);
    }

    final int a()
    {
      return this.a;
    }

    final com.google.android.gms.internal.hw b()
    {
      return this.b;
    }

    public final com.google.android.gms.internal.hz$b<?, ?> c()
    {
      if ( this.b == null )
        throw new IllegalStateException("There was no converter wrapped in this ConverterWrapper.");
      return (com.google.android.gms.internal.hz$b)this.b;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      hv.a(this, p0, p1);
    }

}
