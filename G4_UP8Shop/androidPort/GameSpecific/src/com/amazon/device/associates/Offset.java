// Decompiled from classes.dex (SourceFile: Offset.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class Offset implements android.os.Parcelable {
    // Fields
    public static final com.amazon.device.associates.Offset BEGINNING;
    public static final android.os.Parcelable.Creator CREATOR;
    private final java.lang.String a;

    // Methods
    static
    {
      BEGINNING = new com.amazon.device.associates.Offset("0");
      CREATOR = (android.os.Parcelable.Creator)new com.amazon.device.associates.aj();
    }

    private Offset(android.os.Parcel p0)
    {
      super();
      this.a = p0.readString();
    }

    /* synthetic */ Offset(android.os.Parcel p0, com.amazon.device.associates.aj p1)
    {
      this(p0);
    }

    Offset(String p0)
    {
      super();
      this.a = p0;
    }

    public static com.amazon.device.associates.Offset fromString(String p0)
    {
      an.a(p0, "encodedOffset");
      if ( "0".equals(p0) )
        return BEGINNING;
      else
        return new com.amazon.device.associates.Offset(p0);
    }

    public int describeContents()
    {
      return this.hashCode();
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
