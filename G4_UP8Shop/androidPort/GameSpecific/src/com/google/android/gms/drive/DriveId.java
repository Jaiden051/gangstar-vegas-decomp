// Decompiled from classes.dex (SourceFile: DriveId.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive;

import android.util.Base64;
import android.util.Log;
import com.google.android.gms.drive.internal.af;
import com.google.android.gms.internal.hn;
import com.google.android.gms.internal.mf;
public class DriveId implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    final java.lang.String b;
    final long c;
    final long d;
    private volatile java.lang.String e;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.drive.c();
    }

    DriveId(int p0, String p1, long p2, long p4)
    {
      super();
      boolean v5;
      v5 = false;
      this.e = null;
      this.a = p0;
      this.b = p1;
      hn.C(!"".equals(p1));
      if ( p1 != null || p2 != -1 )
        v5 = true;
      hn.C(v5);
      this.c = p2;
      this.d = p4;
    
    }

    public DriveId(String p0, long p1, long p3)
    {
      this(1, p0, p1, p3);
    }

    private String a()
    {
      return this.b;
    }

    public static com.google.android.gms.drive.DriveId aL(String p0)
    {
      hn.f(p0);
      return new com.google.android.gms.drive.DriveId(p0, -1, -1);
    }

    private String b()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      String e;
      com.google.android.gms.drive.internal.af v2;
      String b;
      e = this.e;
      if ( e == null )
      {
        v2 = new com.google.android.gms.drive.internal.af();
        v2.a = this.a;
        if ( this.b != null )
          b = this.b;
        else
          b = "";
        v2.b = b;
        v2.c = this.c;
        v2.d = this.d;
        this.e = "DriveId:" + Base64.encodeToString(mf.d(v2), 10);
      }
      return this.e;
    }

    private byte[] c()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      com.google.android.gms.drive.internal.af v1;
      String b;
      v1 = new com.google.android.gms.drive.internal.af();
      v1.a = this.a;
      if ( this.b != null )
        b = this.b;
      else
        b = "";
      v1.b = b;
      v1.c = this.c;
      v1.d = this.d;
      return mf.d(v1);
    }

    public static com.google.android.gms.drive.DriveId decodeFromString(String p0)
    {
      hn.b(p0.startsWith("DriveId:"), "Invalid DriveId: " + p0);
      return f(Base64.decode(p0.substring(8), 10));
    }

    static com.google.android.gms.drive.DriveId f(byte[] p0)
    {
      com.google.android.gms.drive.internal.af v1; // RETVAL
      com.google.android.gms.drive.internal.af v2;
      String b;
      try
      {
        v1 = af.g(p0);
      }
      catch ( com.google.android.gms.internal.me e )
      {
        throw new IllegalArgumentException();
      }
      v2 = v1;
      if ( "".equals(v1.b) )
        b = null;
      else
        b = v2.b;
      return new com.google.android.gms.drive.DriveId(v2.a, b, v2.c, v2.d);
    }

    public int describeContents()
    {
      return 0;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.drive.DriveId v4;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.drive.DriveId )
      {
        v4 = (com.google.android.gms.drive.DriveId)p0;
        if ( v4.d == this.d )
        {
          if ( v4.c == -1 && this.c == -1 )
          {
            return v4.b.equals(this.b);
          }
          else if ( v4.c == this.c )
          {
            return true;
          }
        }
        else
        {
          Log.w("DriveId", "Attempt to compare invalid DriveId detected. Has local storage been cleared?");
        }
      }
      return v2;
    }

    public int hashCode()
    {
      if ( this.c == -1 )
        return this.b.hashCode();
      else
        return (String.valueOf(this.d) + String.valueOf(this.c)).hashCode();
    }

    public String toString()
    {
      try {
      String e;
      com.google.android.gms.drive.internal.af v2;
      String b;
      e = this.e;
      if ( e == null )
      {
        v2 = new com.google.android.gms.drive.internal.af();
        v2.a = this.a;
        if ( this.b != null )
          b = this.b;
        else
          b = "";
        v2.b = b;
        v2.c = this.c;
        v2.d = this.d;
        this.e = "DriveId:" + Base64.encodeToString(mf.d(v2), 10);
      }
      return this.e;
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.drive.c.a(this, p0, p1);
    }

}
