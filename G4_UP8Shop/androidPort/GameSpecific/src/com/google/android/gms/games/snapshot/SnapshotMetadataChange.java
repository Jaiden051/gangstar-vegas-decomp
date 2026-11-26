// Decompiled from classes.dex (SourceFile: SnapshotMetadataChange.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.snapshot;

import com.google.android.gms.internal.hn;
public final class SnapshotMetadataChange implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.games.snapshot.SnapshotMetadataChangeCreator CREATOR;
    public static final com.google.android.gms.games.snapshot.SnapshotMetadataChange a;
    private final int b;
    private final java.lang.String c;
    private final java.lang.Long d;
    private final android.net.Uri e;
    private com.google.android.gms.common.data.a f;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.snapshot.SnapshotMetadataChangeCreator();
      a = new com.google.android.gms.games.snapshot.SnapshotMetadataChange();
    }

    SnapshotMetadataChange()
    {
      this(4, null, null, null, null);
    }

    SnapshotMetadataChange(int p0, String p1, Long p2, com.google.android.gms.common.data.a p3, android.net.Uri p4)
    {
      super();
      this.b = p0;
      this.c = p1;
      this.d = p2;
      this.f = p3;
      this.e = p4;
      if ( this.f != null )
      {
        hn.a(this.e == null, "Cannot set both a URI and an image");
      }
      else if ( this.e != null )
      {
        hn.a(this.f == null, "Cannot set both a URI and an image");
      }
    }

    SnapshotMetadataChange(String p0, Long p1, com.google.android.gms.common.data.a p2, android.net.Uri p3)
    {
      this(4, p0, p1, p2, p3);
    }

    private android.graphics.Bitmap f()
    {
      if ( this.f != null )
        return this.f.a();
      else
        return null;
    }

    public final int a()
    {
      return this.b;
    }

    public final String b()
    {
      return this.c;
    }

    public final Long c()
    {
      return this.d;
    }

    public final com.google.android.gms.common.data.a d()
    {
      return this.f;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final android.net.Uri e()
    {
      return this.e;
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      SnapshotMetadataChangeCreator.a(this, p0, p1);
    }

}
