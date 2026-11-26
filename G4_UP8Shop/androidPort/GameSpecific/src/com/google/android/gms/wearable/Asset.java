// Decompiled from classes.dex (SourceFile: Asset.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

import com.google.android.gms.internal.hl;
public class Asset implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    public android.os.ParcelFileDescriptor b;
    public android.net.Uri c;
    private byte[] d;
    private java.lang.String e;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wearable.a();
    }

    Asset(int p0, byte[] p1, String p2, android.os.ParcelFileDescriptor p3, android.net.Uri p4)
    {
      super();
      this.a = p0;
      this.d = (byte[])p1;
      this.e = p2;
      this.b = p3;
      this.c = p4;
    }

    public static com.google.android.gms.wearable.Asset createFromBytes(byte[] p0)
    {
      if ( p0 == null )
        throw new IllegalArgumentException("Asset data cannot be null");
      return new com.google.android.gms.wearable.Asset(1, p0, null, null, null);
    }

    public static com.google.android.gms.wearable.Asset createFromFd(android.os.ParcelFileDescriptor p0)
    {
      if ( p0 == null )
        throw new IllegalArgumentException("Asset fd cannot be null");
      return new com.google.android.gms.wearable.Asset(1, null, null, p0, null);
    }

    public static com.google.android.gms.wearable.Asset createFromRef(String p0)
    {
      if ( p0 == null )
        throw new IllegalArgumentException("Asset digest cannot be null");
      return new com.google.android.gms.wearable.Asset(1, null, p0, null, null);
    }

    public static com.google.android.gms.wearable.Asset createFromUri(android.net.Uri p0)
    {
      if ( p0 == null )
        throw new IllegalArgumentException("Asset uri cannot be null");
      return new com.google.android.gms.wearable.Asset(1, null, null, null, p0);
    }

    public final byte[] a()
    {
      return this.d;
    }

    public final String b()
    {
      return this.e;
    }

    public final android.os.ParcelFileDescriptor c()
    {
      return this.b;
    }

    public final android.net.Uri d()
    {
      return this.c;
    }

    public int describeContents()
    {
      return 0;
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.wearable.Asset v4;
      v2 = true;
      if ( this != p0 )
      {
        if ( p0 instanceof com.google.android.gms.wearable.Asset )
        {
          v4 = (com.google.android.gms.wearable.Asset)p0;
          if ( !hl.equal(this.d, v4.d) || !hl.equal(this.e, v4.e) || !hl.equal(this.b, v4.b) || !hl.equal(this.c, v4.c) )
            return false;
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public int hashCode()
    {
      Object[] v1;
      v1 = new Object[4];
      v1[0] = this.d;
      v1[1] = this.e;
      v1[2] = this.b;
      v1[3] = this.c;
      return hl.hashCode(v1);
    }

    public String toString()
    {
      StringBuilder v1;
      v1 = new StringBuilder();
      v1.append("Asset[@");
      v1.append(Integer.toHexString(this.hashCode()));
      if ( this.e != null )
      {
        v1.append(", ");
        v1.append(this.e);
      }
      else
      {
        v1.append(", nodigest");
      }
      if ( this.d != null )
      {
        v1.append(", size=");
        v1.append(this.d.length);
      }
      if ( this.b != null )
      {
        v1.append(", fd=");
        v1.append(this.b);
      }
      if ( this.c != null )
      {
        v1.append(", uri=");
        v1.append(this.c);
      }
      v1.append("]");
      return v1.toString();
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wearable.a.a(this, p0, p1 | 1);
    }

}
