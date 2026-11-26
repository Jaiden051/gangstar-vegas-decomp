// Decompiled from classes.dex (SourceFile: UserData.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class UserData implements android.os.Parcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    private final java.lang.String a;
    private final java.lang.String b;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.amazon.device.associates.am();
    }

    private UserData(android.os.Parcel p0)
    {
      super();
      this.a = p0.readString();
      this.b = p0.readString();
    }

    /* synthetic */ UserData(android.os.Parcel p0, com.amazon.device.associates.am p1)
    {
      this(p0);
    }

    UserData(String p0, String p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    org.json.JSONObject a()
    {
      String b;
      org.json.JSONObject v2;
      String a;
      b = null;
      v2 = new org.json.JSONObject();
      try
      {
        if ( this.a != null )
          a = this.a;
        else
          a = null;
        v2.put("userId", a);
        if ( this.b != null )
          b = this.b;
        v2.put("marketplace", b);
        return v2;
      }
      catch ( org.json.JSONException e )
      {
      }
      return v2;
    }

    public int describeContents()
    {
      return this.hashCode();
    }

    public String getMarketplace()
    {
      return this.b;
    }

    public String getUserId()
    {
      return this.a;
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
      String[] v3;
      v3 = new String[2];
      v3[0] = this.a;
      v3[1] = this.b;
      p0.writeStringArray(v3);
    }

}
