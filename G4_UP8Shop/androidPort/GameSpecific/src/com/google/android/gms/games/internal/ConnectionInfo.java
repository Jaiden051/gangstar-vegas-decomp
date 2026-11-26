// Decompiled from classes.dex (SourceFile: ConnectionInfo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

public class ConnectionInfo implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.games.internal.ConnectionInfoCreator CREATOR;
    private final int a;
    private final java.lang.String b;
    private final int c;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.games.internal.ConnectionInfoCreator();
    }

    public ConnectionInfo(int p0, String p1, int p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    public final int a()
    {
      return this.a;
    }

    public final String b()
    {
      return this.b;
    }

    public final int c()
    {
      return this.c;
    }

    public int describeContents()
    {
      return 0;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ConnectionInfoCreator.a(this, p0, p1);
    }

}
