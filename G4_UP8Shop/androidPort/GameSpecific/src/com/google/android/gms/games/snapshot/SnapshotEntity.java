// Decompiled from classes.dex (SourceFile: SnapshotEntity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.snapshot;

import com.google.android.gms.games.internal.GamesLog;
import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.hn;
import com.google.android.gms.internal.il;
public final class SnapshotEntity implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.games.snapshot.Snapshot {
    // Fields
    public static final com.google.android.gms.games.snapshot.SnapshotEntityCreator CREATOR;
    private static final java.lang.Object a;
    private final int b;
    private final com.google.android.gms.games.snapshot.SnapshotMetadataEntity c;
    private com.google.android.gms.drive.Contents d;

    // Methods
    static
    {
      a = new Object();
      CREATOR = new com.google.android.gms.games.snapshot.SnapshotEntityCreator();
    }

    SnapshotEntity(
            int p0,
            com.google.android.gms.games.snapshot.SnapshotMetadata p1,
            com.google.android.gms.drive.Contents p2)
    {
      super();
      this.b = p0;
      this.c = new com.google.android.gms.games.snapshot.SnapshotMetadataEntity(p1);
      this.d = p2;
    }

    public SnapshotEntity(
            com.google.android.gms.games.snapshot.SnapshotMetadata p0,
            com.google.android.gms.drive.Contents p1)
    {
      this(1, p0, p1);
    }

    private boolean a(int p0, byte[] p1, int p2, int p3, boolean p4)
    {
      com.google.android.gms.drive.Contents d;
      Object v7;
      java.io.FileOutputStream v8;
      java.io.BufferedOutputStream v9;
      java.nio.channels.FileChannel Channel;
      boolean v11;
      d = this.d;
      hn.b(d, "Must provide a previously opened Snapshot");
      v7 = a;
      synchronized ( v7 )
      {
        v8 = new java.io.FileOutputStream(this.d.a().getFileDescriptor());
        v9 = new java.io.BufferedOutputStream(v8);
        try
        {
          Channel = v8.getChannel();
          Channel.position(p0);
          v9.write(p1, p2, p3);
          if ( p4 )
            Channel.truncate(p1.length);
          v9.flush();
          return true;
        }
        catch ( java.io.IOException v13 )
        {
          GamesLog.a("Snapshot", "Failed to write snapshot data", v13);
          v11 = false;
        }
      }
      return v11;
    }

    static boolean a(com.google.android.gms.games.snapshot.Snapshot p0, Object p1)
    {
      boolean v2;
      com.google.android.gms.games.snapshot.Snapshot v4;
      v2 = false;
      if ( p1 instanceof com.google.android.gms.games.snapshot.Snapshot )
      {
        if ( p0 == p1 )
        {
          return true;
        }
        else
        {
          v4 = (com.google.android.gms.games.snapshot.Snapshot)p1;
          if ( hl.equal(v4.a(), p0.a()) )
            return hl.equal(v4.b(), p0.b());
        }
      }
      return v2;
    }

    static int b(com.google.android.gms.games.snapshot.Snapshot p0)
    {
      Object[] v1;
      v1 = new Object[2];
      v1[0] = p0.a();
      v1[1] = p0.b();
      return hl.hashCode(v1);
    }

    static String c(com.google.android.gms.games.snapshot.Snapshot p0)
    {
      return hl.e(p0).a("Metadata", p0.a()).a("HasContents", Boolean.valueOf(p0.b() != null)).toString();
    }

    private com.google.android.gms.games.snapshot.Snapshot f()
    {
      return (com.google.android.gms.games.snapshot.Snapshot)this;
    }

    public final com.google.android.gms.games.snapshot.SnapshotMetadata a()
    {
      return (com.google.android.gms.games.snapshot.SnapshotMetadata)this.c;
    }

    public final boolean a(int p0, byte[] p1, int p2)
    {
      return this.a(p0, p1, p2, p1.length, false);
    }

    public final boolean a(byte[] p0)
    {
      return this.a(0, p0, 0, p0.length, true);
    }

    public final com.google.android.gms.drive.Contents b()
    {
      return this.d;
    }

    public final void c()
    {
      this.d.c();
      this.d = null;
    }

    public final byte[] d()
    {
      Object v1;
      java.io.FileInputStream v2;
      java.io.InputStream v3;
      byte[] result; // RETVAL
    
      hn.b(this.d, "Must provide a previously opened Snapshot");
      v1 = a;
      synchronized ( v1 )
      {
        v2 = new java.io.FileInputStream(this.d.a().getFileDescriptor());
        v3 = new java.io.BufferedInputStream(v2);
        try
        {
          v2.getChannel().position(0);
        }
        catch ( java.io.IOException v5 )
        {
          GamesLog.a("Snapshot", "Failed to read snapshot data", v5);
        }
      }
      result = il.a(v3, false);
      com.gameloft.android.DecompRT.monitorExit(v1);
      return result;
    }

    public final int describeContents()
    {
      return 0;
    }

    public final int e()
    {
      return this.b;
    }

    public final boolean equals(Object p0)
    {
      return a((com.google.android.gms.games.snapshot.Snapshot)this, p0);
    }

    /* bridge */ public final Object h()
    {
      return this;
    }

    public final int hashCode()
    {
      return b((com.google.android.gms.games.snapshot.Snapshot)this);
    }

    public final boolean i_()
    {
      return true;
    }

    public final String toString()
    {
      return c((com.google.android.gms.games.snapshot.Snapshot)this);
    }

    public final void writeToParcel(android.os.Parcel p0, int p1)
    {
      SnapshotEntityCreator.a(this, p0, p1);
    }

}
