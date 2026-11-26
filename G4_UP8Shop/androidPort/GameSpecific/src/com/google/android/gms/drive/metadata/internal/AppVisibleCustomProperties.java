// Decompiled from classes.dex (SourceFile: AppVisibleCustomProperties.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata.internal;

import com.google.android.gms.internal.hn;
public final class AppVisibleCustomProperties implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, java.lang.Iterable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    public static final com.google.android.gms.drive.metadata.internal.AppVisibleCustomProperties a;
    final int b;
    final java.util.List c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.metadata.internal.a();
      a = new com.google.android.gms.drive.metadata.internal.AppVisibleCustomProperties$a().a();
    }

    AppVisibleCustomProperties(
            int p0,
            java.util.Collection<com.google.android.gms.drive.metadata.internal.CustomProperty> p1)
    {
      super();
      this.b = p0;
      hn.f(p1);
      this.c = new java.util.ArrayList(p1);
    }

    private AppVisibleCustomProperties(
            java.util.Collection<com.google.android.gms.drive.metadata.internal.CustomProperty> p0)
    {
      this(1, p0);
    }

    /* synthetic */ AppVisibleCustomProperties(java.util.Collection p0, int p1)
    {
      this(p0);
    }

    public final int describeContents()
    {
      return 0;
    }

    public final java.util.Iterator<com.google.android.gms.drive.metadata.internal.CustomProperty> iterator()
    {
      return this.c.iterator();
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.metadata.internal.a.a(this, p0, p1);
    }

}
