// Decompiled from classes.dex (SourceFile: ParcelableCollaborator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.realtime.internal;

public class ParcelableCollaborator implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final boolean b;
    final boolean c;
    final java.lang.String d;
    final java.lang.String e;
    final java.lang.String f;
    final java.lang.String g;
    final java.lang.String h;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.realtime.internal.p();
    }

    ParcelableCollaborator(int p0, boolean p1, boolean p2, String p3, String p4, String p5, String p6, String p7)
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
    }

    public int describeContents()
    {
      return 0;
    }

    public boolean equals(Object p0)
    {
      return this == p0
          || p0 instanceof com.google.android.gms.drive.realtime.internal.ParcelableCollaborator
          && this.d.equals(((com.google.android.gms.drive.realtime.internal.ParcelableCollaborator)p0).d);
    }

    public int hashCode()
    {
      return this.d.hashCode();
    }

    public String toString()
    {
      return "Collaborator [isMe="
           + this.b
           + ", isAnonymous="
           + this.c
           + ", sessionId="
           + this.d
           + ", userId="
           + this.e
           + ", displayName="
           + this.f
           + ", color="
           + this.g
           + ", photoUrl="
           + this.h
           + "]";
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.realtime.internal.p.a(this, p0, p1);
    }

}
