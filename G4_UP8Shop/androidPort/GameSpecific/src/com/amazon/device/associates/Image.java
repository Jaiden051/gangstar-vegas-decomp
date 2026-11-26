// Decompiled from classes.dex (SourceFile: Image.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class Image implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final java.lang.String a;
    final int b;
    final int c;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.amazon.device.associates.bv();
    }

    private Image(android.os.Parcel p0)
    {
      super();
      this.b = p0.readInt();
      this.c = p0.readInt();
      this.a = p0.readString();
    }

    /* synthetic */ Image(android.os.Parcel p0, com.amazon.device.associates.bv p1)
    {
      this(p0);
    }

    Image(String p0, int p1, int p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    }

    org.json.JSONObject a()
    {
      org.json.JSONObject v1;
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("url", this.a);
        v1.put("width", this.b);
        v1.put("height", this.c);
        return v1;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public int describeContents()
    {
      return this.hashCode();
    }

    public int getHeight()
    {
      return this.c;
    }

    public String getUrl()
    {
      return this.a;
    }

    public int getWidth()
    {
      return this.b;
    }

    public String toString()
    {
      String v1;
      v1 = null;
      try
      {
        return this.a().toString(4);
      }
      catch ( org.json.JSONException e )
      {
      }
      return v1;
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      int[] v3;
      v3 = new int[2];
      v3[0] = this.b;
      v3[1] = this.c;
      p0.writeIntArray(v3);
      p0.writeString(this.a);
    }

}
