// Decompiled from classes.dex (SourceFile: RequestId.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import java.util.UUID;
public class RequestId implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final java.lang.String a;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.amazon.device.associates.ae();
    }

    RequestId()
    {
      super();
      this.a = UUID.randomUUID().toString();
    }

    private RequestId(android.os.Parcel p0)
    {
      super();
      this.a = p0.readString();
    }

    /* synthetic */ RequestId(android.os.Parcel p0, com.amazon.device.associates.ae p1)
    {
      this(p0);
    }

    private RequestId(String p0)
    {
      super();
      this.a = p0;
    }

    static com.amazon.device.associates.RequestId a(String p0)
    {
      return new com.amazon.device.associates.RequestId(p0);
    }

    public int describeContents()
    {
      return this.hashCode();
    }

    public boolean equals(Object p0)
    {
      return p0 != null && this.getClass() == p0.getClass() && this.a.equals(((com.amazon.device.associates.RequestId)p0).a);
    }

    public String toString()
    {
      return this.a;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      p0.writeString(this.a);
    }

}
